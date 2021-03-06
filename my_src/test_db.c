/*
 * test_db.c
 *
 *  Created on: 2015年9月14日
 *      Author: panzg
 */
#include "include/head.h"
#include "include/db.h"
#include <fcntl.h>

#if 1
int
main(void)
{
	DBHANDLE	db;

	if ((db = db_open("db4", O_RDWR | O_CREAT | O_TRUNC,
	  FILE_MODE)) == NULL)
		err_sys("db_open error");
	printf("打开成功\n");

	if (db_store(db, "Alpha", "data1", DB_INSERT) != 0)
		err_quit("db_store error for alpha");
	else
		printf("插入成功\n");

	if (db_store(db, "beta", "Data for beta", DB_INSERT) != 0)
		err_quit("db_store error for beta");
	else
			printf("插入成功\n");

	if (db_store(db, "gamma", "record3", DB_INSERT) != 0)
		err_quit("db_store error for gamma");
	else
			printf("插入成功\n");

	db_close(db);
	exit(0);
}
#endif


