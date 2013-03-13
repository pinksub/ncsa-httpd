/************************************************************************
 * NCSA HTTPd Server
 * Software Development Group
 * National Center for Supercomputing Applications
 * University of Illinois at Urbana-Champaign
 * 605 E. Springfield, Champaign, IL 61820
 * httpd@ncsa.uiuc.edu
 *
 * Copyright  (C)  1995, Board of Trustees of the University of Illinois
 *
 ************************************************************************
 *
 * http_include.h,v 1.5 1995/07/25 06:43:33 blong Exp
 *
 ************************************************************************
 *
 */


#ifndef _HTTP_INCLUDE_H_
#define _HTTP_INCLUDE_H_

/* defines used in this module */

#define STARTING_SEQUENCE "<!--#"
#define ENDING_SEQUENCE "-->"
#define DEFAULT_ERROR_MSG "[an error occurred while processing this directive]"
#define DEFAULT_TIME_FORMAT "%A, %d-%b-%y %T %Z"
#define SIZEFMT_BYTES 0
#define SIZEFMT_KMG 1

#define NUM_INCLUDE_VARS 5

/* http_include */
void send_parsed_file(per_request *reqInfo, char *path_args, int noexec);
char *ht_time(time_t t, char *fmt, int gmt);

#endif /* _HTTP_INCLUDE_H_ */
