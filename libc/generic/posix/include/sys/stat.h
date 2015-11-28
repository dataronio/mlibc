
#ifndef _SYS_STAT_H
#define _SYS_STAT_H

#include <mlibc/uid_t.h>
#include <mlibc/gid_t.h>
#include <mlibc/off_t.h>
#include <mlibc/mode_t.h>
#include <mlibc/dev_t.h>
#include <mlibc/ino_t.h>
#include <mlibc/blksize_t.h>
#include <mlibc/blkcnt_t.h>
#include <mlibc/nlink_t.h>

#define S_IFBLK 0x0000
#define S_IFCHR 0x0100
#define S_IFIFO 0x0200
#define S_IFREG 0x0300
#define S_IFDIR 0x0400
#define S_IFLNK 0x0500
#define S_IFSOCK 0x0600

#define S_IRWXU 0700
#define S_IRUSR 0400
#define S_IWUSR 0200
#define S_IXUSR 0100
#define S_IRWXG 070
#define S_IRGRP 040
#define S_IWGRP 020
#define S_IXGRP 010
#define S_IRWXO 07
#define S_IROTH 04
#define S_IWOTH 02
#define S_IXOTH 01
#define S_ISUID 04000
#define S_ISGID 02000
#define S_ISVTX 01000

struct stat {
	dev_t st_dev;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	off_t st_size;
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
};

// MISSING: nearly the whole file

#endif // _SYS_STAT_H

