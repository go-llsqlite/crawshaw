# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/).

Entries for releases published before this file was added are summarized from tagged commits and published release notes.

## [Unreleased]

### Changed

- Migrated test assertions from the archived `github.com/frankban/quicktest` `v1.14.6` dependency to the maintained `github.com/go-quicktest/qt` `v1.102.0` fork in [#16](https://github.com/go-llsqlite/crawshaw/pull/16).

### Dependencies

- Replaced `github.com/frankban/quicktest` `v1.14.6` with `github.com/go-quicktest/qt` `v1.102.0`.
- Updated `github.com/anacrolix/chansync` from `v0.3.0` to `v0.8.0`.
- Updated `github.com/google/go-cmp` from `v0.5.9` to `v0.6.0`.
- Updated `github.com/rogpeppe/go-internal` from `v1.9.0` to `v1.12.0`.

## [0.7.0] - 2026-08-07

### Added

- Added `Conn.Serialize`, wrapping `sqlite3_serialize`.

### Changed

- Updated SQLite to `3.53.0`.
- Updated `github.com/anacrolix/chansync` from `v0.3.0` to `v0.8.0`.

## [0.6.0] - 2025-06-20

### Changed

- Updated SQLite to `3.50.1`.

## [0.5.5] - 2024-08-20

### Fixed

- Fixed `BindBytes` being clobbered by `BindText`.

## [0.5.4] - 2024-08-19

### Changed

- Passed byte arrays as BLOBs.

## [0.5.3] - 2024-06-15

### Changed

- Updated SQLite to `3.46.0`.

## [0.5.2] - 2024-04-25

### Changed

- Moved forward declarations out of cgo files.

## [0.5.1] - 2024-02-08

### Added

- Added test coverage for FTS5 tokenizer support.

## [0.5.0] - 2023-11-11

### Changed

- Updated SQLite to `3.44.0`.

## [0.4.0] - 2023-09-17

### Removed

- Removed `fs` and `sqlitex.InsertRandID`.

[Unreleased]: https://github.com/go-llsqlite/crawshaw/compare/v0.7.0...HEAD
[0.7.0]: https://github.com/go-llsqlite/crawshaw/compare/v0.6.0...v0.7.0
[0.6.0]: https://github.com/go-llsqlite/crawshaw/compare/v0.5.5...v0.6.0
[0.5.5]: https://github.com/go-llsqlite/crawshaw/compare/v0.5.4...v0.5.5
[0.5.4]: https://github.com/go-llsqlite/crawshaw/compare/v0.5.3...v0.5.4
[0.5.3]: https://github.com/go-llsqlite/crawshaw/compare/v0.5.2...v0.5.3
[0.5.2]: https://github.com/go-llsqlite/crawshaw/compare/v0.5.1...v0.5.2
[0.5.1]: https://github.com/go-llsqlite/crawshaw/compare/v0.5.0...v0.5.1
[0.5.0]: https://github.com/go-llsqlite/crawshaw/compare/v0.4.0...v0.5.0
[0.4.0]: https://github.com/go-llsqlite/crawshaw/releases/tag/v0.4.0
