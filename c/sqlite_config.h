/* Single source of truth for SQLite compile-time defines.
 *
 * Force-included via `-include sqlite_config.h` (or `-include c/sqlite_config.h`
 * from the package root) by:
 *   - c/dummy.go    (cgo build of c/sqlite3.c in the default static mode)
 *   - sqlite.go     (cgo build of the root package's C preamble)
 *   - Makefile      (standalone cc build of sqlite3.o for -tags=linksqlite3)
 *
 * Every translation unit that sees <sqlite3.h> or sqlite3.c must see the same
 * set of these macros; otherwise struct layouts and the declarations exposed
 * by the public header will diverge.
 */

#ifndef LLSQLITE_CONFIG_H
#define LLSQLITE_CONFIG_H

#define SQLITE_THREADSAFE 2
#define SQLITE_DEFAULT_WAL_SYNCHRONOUS 1
#define SQLITE_ENABLE_UNLOCK_NOTIFY 1
#define SQLITE_ENABLE_FTS5 1
#define SQLITE_ENABLE_RTREE 1
#define SQLITE_LIKE_DOESNT_MATCH_BLOBS 1
#define SQLITE_OMIT_DEPRECATED 1
#define SQLITE_ENABLE_JSON1 1
#define SQLITE_ENABLE_SESSION 1
#define SQLITE_ENABLE_SNAPSHOT 1
#define SQLITE_ENABLE_PREUPDATE_HOOK 1
#define SQLITE_USE_ALLOCA 1
#define SQLITE_ENABLE_COLUMN_METADATA 1
#define HAVE_USLEEP 1
#define SQLITE_DQS 0
#define SQLITE_ENABLE_GEOPOLY 1
#define SQLITE_DIRECT_OVERFLOW_READ 1

#endif
