/*-------------------------------------------------------------------------
 *
 * parse_utilcmd.h
 *		parse analysis for utility commands
 *
 *
 * Portions Copyright (c) 1996-2010, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 * Portions Copyright (c) 2010-2011 Nippon Telegraph and Telephone Corporation
 *
 * $PostgreSQL: pgsql/src/include/parser/parse_utilcmd.h,v 1.5 2010/01/02 16:58:08 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef PARSE_UTILCMD_H
#define PARSE_UTILCMD_H

#include "parser/parse_node.h"


extern List *transformCreateStmt(CreateStmt *stmt, const char *queryString);
extern List *transformAlterTableStmt(AlterTableStmt *stmt,
						const char *queryString);
extern IndexStmt *transformIndexStmt(IndexStmt *stmt, const char *queryString);
extern void transformRuleStmt(RuleStmt *stmt, const char *queryString,
				  List **actions, Node **whereClause);
extern List *transformCreateSchemaStmt(CreateSchemaStmt *stmt);
#ifdef PGXC
extern bool CheckLocalIndexColumn (char loctype, char *partcolname, char *indexcolname);
#endif

#endif   /* PARSE_UTILCMD_H */
