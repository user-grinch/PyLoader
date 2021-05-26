
TAGS - Yet Another Tags Reading Library

Written by Wraith, 2k5-2k6
Contributions by Ian Luck and Dylan Fitterer
Delphi header and sample by Chris Troesken

Public domain. No warranty.

Version 18

Purpose:
--------
  BASS audio library has limited support for reading tags, associated with a
  stream. This library extends that functionality, allowing developer/user to
  extract specific song information from the stream handle used with BASS. The
  extracted tag values are formatted into text ouput according to given format
  string (including conditional processing).

Supported tags:
---------------
  MP3 ID3v1 and ID3v2.2/3/4
  OGG/FLAC comments
  WMA
  APE, OFR, MPC, AAC - all use APE tags
  MP4
  WAV/etc RIFF INFO
  MOD/etc titles

Package contents:
-----------------
  tags.dll
  tags-readme.txt
  x64/tags.dll
  c/tags.h
  c/tags.lib
  c/x64/tags.lib
  delphi/tags.pas
  delphi/sample/Project1.dpr
  delphi/sample/unit1.dfm
  delphi/sample/unit1.pas
  vb/tags.bas  
  
Usage:
------
  Pretty standard, include the header file, so the function declarations are
  visible in the module, add 'tags.lib' to the list of the libraries to link 
  against (c/c++ only).  See function reference below in this file. Ship tags.dll
  with your program.

  This library is not thread-safe. It is the user's responsibility to serialize
  function calls (a critical section would suffice).

Performance:
------------
  A test string of
  "%IFV1(%TRCK,%TRCK. )%IFV2(%ARTI,%ICAP(%ARTI),no artist) - %IFV2(%TITL,%ICAP(%TITL) -,no title -)%IFV1(%ALBM, %IUPC(%ALBM))%IFV1(%YEAR, %(%YEAR%))"
  on Celeron 2.4GHz executes in less than 1 ms. I'd really like to know if this
  will be a problem for anyone.

Version History:
---------------
VERSION 18:
  - Publisher tag.
  - Support for RIFF INFO tags.
  - Support for numerical MP4 genres.
  - Support for OpenMPT author/artist tag
  - New TAGS_ReadEx function to limit processing to specific tag type and set codepage used for "ISO-8859-1" tags.
  - New TAGS_SetUTF8 function to enable UTF-8 encoding ("%UTF8" formatting option deprecated).

VERSION 17:
  - All available tag types will be checked for each requested item.
  - Support for ID3v2.4 TDRC frame.
  - TAGS_GetVersion now gives the version number (TAGS_VERSION) in HIBYTE and build number in LOBYTE.

VERSION 16:
  - Disc number tag.
  - Total track count added to track number tag for OGG/MP4.
  - Support for ID3v2.4 "unsynchronisation".
  - Version resource changed to "version.build" form.

VERSION 15:
  - UTF-8 text encoding option.
  - Subtitle and album artist tags.
  - Support for MP4 tags.
  - Support for MODs (title only).

VERSION 14:
  - Copyright tag.
  - BASSWMA 2.4 support.

VERSION 12:
  - ID3v2.4 support.
  - Composer tag.

VERSION 8:
  - BASS_StreamGetTags -> BASS_ChannelGetTags.

VERSION 7:
  - Fixed some standard-related bugs in ID3v2 reader: genre, comment.
  - Added UNICODE support for ID3v2
  - Released source code into public domain.

VERSION 6:
  - Added Delphi and VB headers. Chris was so kind to provide a Dephi header
    and a sample program.
  - Fixed a bug in ID3v2 comment reading.
  - Fixed a bug with case-insensitive OGG fields.

VERSION 5:
  - Added some serious ID3v2 sanity checks (stability issues)
  - Added unified mp3 tag processing.

VERSION 4:
  - Reduced dll size to 10KB.
  - Added more reliable guessing code.
  - Added ID3v1 genres.
  - Improved stability.

VERSION 3:
  - Added WMA, APE, OFR, MPC, AAC support.

VERSION 2:
  - Fixed a nasty bug with traversing ID3v2 frames (out-of-bounds error).
  - Added an on-the-fly fix for poorly-added ID3v1 tags in mp3, where the ID3 structure
    is filled with spaces. ( Need information about who does such disgusting things. )
  - Added ID3v1 text value trimming.
  - Added version history ;)

VERSION 1:
  - Initital release.

APPENDIX
Function reference:
-------------------  
  Function:
    DWORD TAGS_GetVersion();
  
  Purpose:
	Returns tags.dll version.
  
  Return value:
    Current version (in HIBYTE) and build (in LOBYTE).
  
  ---------------
  
  Function:
    const char* _stdcall TAGS_Read( 
			DWORD handle,		// BASS channel handle
			const char* fmt		// format string
			);

    const char* _stdcall TAGS_ReadEx( 
			DWORD handle,		// BASS channel handle
			const char* fmt,	// format string
			DWORD tagtype		// tag type
			int codepage		// codepage
			);
			
  Purpose:
    Reads tag values from the stream and formats them according to
    given format string.
    
  Parameters:
    handle   - BASS handle, obtained normally via BASS_StreamCreateXXX call,
              or any other handle, on which BASS_ChannelGetTags can be called.
    fmt		 - format string, see below.
    tagtype  - limit processing to a particular tag type (BASS_TAG_XXX), -1 = all tag types.
    codepage - codepage to use when reading "ISO-8859-1" tags, see below.

  Return value:
    - empty string when unable to properly read the tag, or when there are no supported tags.
    - pointer to the beginning of a text string, containing extracted
      values from the song tags, on success;
    - a parser error message text, when format string is ill-formed.
    
  Notes:
    1. format string can contain the following things:
       - plain text like "Some song". This text is merely copied to the output.
       - special identifier, beginning with '%' to substitute for the tag value:
         "%TITL"  - song title;
         "%ARTI"  - song artist;
         "%ALBM"  - album name;
         "%GNRE"  - song genre;
         "%YEAR"  - song/album year;
         "%CMNT"  - comment;
         "%TRCK"  - track number (may include total track count "track/total");
         "%COMP"  - composer;
         "%COPY"  - copyright;
         "%SUBT"  - subtitle;
         "%AART"  - album artist;
         "%DISC"  - disc number (may include total disc count "disc/total");
         "%PUBL"  - publisher;
       - expression:
         "%IFV1(x,a)" - if x is not empty, then this evaluates to a, 
                        or to an empty string otherwise;
         "%IFV2(x,a,b)" - if x is not empty, then this evaluates to a,
                        else to b;
         "%IUPC(x)" - brings x to uppercase, so "%IUPC(foO)" yields "FOO";
         "%ILWC(x)" - brings x to lowercase, so "%ILWC(fOO)" yields "foo";
         "%ICAP(x)" - capitalizes first letter in each word of x, so
                      "%ICAP(FoO bAR)" yields "Foo Bar";
         "%ITRM(x)" - removes beginning and trailing spaces from x;

       - escaped symbols:
         "%%" - "%"
         "%(" - "("
         "%," - ","
         "%)" - ")"
       
       Example. Assume we have the following information in the tag:
	     Title: "Nemo"
	     Artist: "nightwish"
	     Album: "Once"
	     Track: "3"
	     Year: "2004"
	     
         Format string: "%IFV1(%TRCK,%TRCK. )%IFV2(%ARTI,%ICAP(%ARTI),no artist) - %IFV2(%TITL,%ICAP(%TITL) -,no title -) %IFV1(%ALBM,%IUPC(%ALBM))%IFV1(%YEAR, %(%YEAR%))"
         Output: "3.- Nightwish - Nemo - ONCE (2004)"
         
         if 'Artist' and 'Title' are empty, the output will be:
         "3. - no artist - no title - ONCE (2004)"
         
         if only 'Track' is empty, the output will be
         "Nightwish - Nemo - ONCE (2004)"

       Caution:
         "%IFV2(sometext ,a,b)" always evaluates to a, because a space after
         "sometext" causes the condition string to be not empty. This is 
         intentional.

       Another caution:
         "symbols '%(,)' are reserved, that is, they must be escaped if they are
         inteded to appear in the output. See the above example: the parens 
         around %YEAR are escaped with '%' to prevent misinterpretation.

    2. Ill-formed string causes some error message to appear in the output, but
	  don't count on it too much...

    3. A list of codepages can be found here:

      https://msdn.microsoft.com/en-us/library/windows/desktop/dd317756.aspx

      If an invalid/unavailable codepage is requested, then 1252 (Latin 1) will
      be used. 0 can be used to request Windows' default codepage.

    4. Great warning:
      The output string is allocated by tags.dll, so deleting the pointer may
      crash the program. DON'T! The string is valid until the next TAGS_Read/Ex
      call.

    5. If a file contains APE, ID3v1 and ID3v2 tags, the order of precedence
      is: APE, ID3v2, ID3v1.

  -----------------
  Function:
    BOOL TAGS_SetUTF8(
			BOOL enable		// enable UTF-8?
			);

  Purpose:
    Determines whether the TAGS_Read/Ex function returns a UTF-8 string
    (true) or an ANSI string (false). The default is ANSI (false) on Windows
    and UTF-8 (true) on other platforms.

  Return value:
    The previous setting.

  -----------------
  Function:
	const char* TAGS_GetLastErrorDesc();

  Purpose:
    For debug; the text description of the last TAGS_Read/Ex call. It may say
    something like:
    "ID3v2 tag: header is invalid", on poorly-added tags.

  Return value:
    An error string, or empty string if no error.

  Notes:
    1. Again, don't delete the return value pointer.

(eof)
