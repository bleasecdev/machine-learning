/*-------------------------------------------------------------------------
 *
 * pg_language_d.h
 *    Macro definitions for pg_language
 *
 * Portions Copyright (c) 1996-2019, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/catalog/genbki.pl
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_LANGUAGE_D_H
#define PG_LANGUAGE_D_H

#define LanguageRelationId 2612

#define Anum_pg_language_oid 1
#define Anum_pg_language_lanname 2
#define Anum_pg_language_lanowner 3
#define Anum_pg_language_lanispl 4
#define Anum_pg_language_lanpltrusted 5
#define Anum_pg_language_lanplcallfoid 6
#define Anum_pg_language_laninline 7
#define Anum_pg_language_lanvalidator 8
#define Anum_pg_language_lanacl 9

#define Natts_pg_language 9

#define INTERNALlanguageId 12
#define ClanguageId 13
#define SQLlanguageId 14

#endif							/* PG_LANGUAGE_D_H */
