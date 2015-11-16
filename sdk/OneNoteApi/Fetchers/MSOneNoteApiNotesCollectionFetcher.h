/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/


#ifndef MSONENOTEAPINOTESCOLLECTIONFETCHER_H
#define MSONENOTEAPINOTESCOLLECTIONFETCHER_H

@class MSOneNoteApiNotesFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSOneNoteApiModels.h"

/** MSOneNoteApiNotesCollectionFetcher
 *
 */
@interface MSOneNoteApiNotesCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSOneNoteApiNotesFetcher *)getById: (id) identifier;
- (void)add:(MSOneNoteApiNotes *)entity callback:(void (^)(MSOneNoteApiNotes *, MSOrcError *))callback;

- (MSOneNoteApiNotesCollectionFetcher *)select:(NSString *)params;
- (MSOneNoteApiNotesCollectionFetcher *)filter:(NSString *)params;
- (MSOneNoteApiNotesCollectionFetcher *)search:(NSString *)params;
- (MSOneNoteApiNotesCollectionFetcher *)top:(int)value;
- (MSOneNoteApiNotesCollectionFetcher *)skip:(int)value;
- (MSOneNoteApiNotesCollectionFetcher *)expand:(NSString *)value;
- (MSOneNoteApiNotesCollectionFetcher *)orderBy:(NSString *)params;
- (MSOneNoteApiNotesCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiNotesCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif