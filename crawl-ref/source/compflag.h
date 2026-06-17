#ifndef __included_crawl_compile_flags_h
#define __included_crawl_compile_flags_h

// iOS console build: actual compile/link flags are owned by the Xcode project
// (dcss.xcodeproj), not by crawl's Makefile. These strings only feed the
// version-info / crash-dump display in version.cc, so neutral values are fine
// and keep this file deterministic (no host triple, no machine paths).
#define CRAWL_CFLAGS "see dcss.xcodeproj (iOS console build)"
#define CRAWL_LDFLAGS "see dcss.xcodeproj (iOS console build)"
#define CRAWL_HOST "ios"
#define CRAWL_ARCH "ios"

#endif
