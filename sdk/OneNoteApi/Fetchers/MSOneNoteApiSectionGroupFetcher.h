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



#ifndef MSONENOTEAPISECTIONGROUPFETCHER_H
#define MSONENOTEAPISECTIONGROUPFETCHER_H

#import "MSOneNoteApiModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOneNoteApiIdentitySetFetcher;
@class MSOneNoteApiNotebookFetcher;
@class MSOneNoteApiSectionCollectionFetcher;
@class MSOneNoteApiNotebookFetcher;
@class MSOneNoteApiSectionCollectionFetcher;
@class MSOneNoteApiSectionFetcher;
@class MSOneNoteApiSectionGroupFetcher;
@class MSOneNoteApiSectionGroupOperations;


/** MSOneNoteApiSectionGroupFetcher
 *
 */
@interface MSOneNoteApiSectionGroupFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOneNoteApiSectionGroupOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOneNoteApiSectionGroup *, MSOrcError *))callback;
- (void)update:(MSOneNoteApiSectionGroup *)SectionGroup callback:(void (^)(MSOneNoteApiSectionGroup *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOneNoteApiSectionGroupFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteApiSectionGroupFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteApiSectionGroupFetcher *)select:(NSString *)params;
- (MSOneNoteApiSectionGroupFetcher *)expand:(NSString *)value;

@property (strong, nonatomic, readonly, getter=parentNotebook) MSOneNoteApiNotebookFetcher *parentNotebook;

@property (strong, nonatomic, readonly, getter=parentSectionGroup) MSOneNoteApiSectionGroupFetcher *parentSectionGroup;
@property (strong, nonatomic, readonly, getter=sections) MSOneNoteApiSectionCollectionFetcher *sections;

- (MSOneNoteApiSectionFetcher *)sectionsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=sectionGroups) MSOneNoteApiSectionGroupCollectionFetcher *sectionGroups;

- (MSOneNoteApiSectionGroupFetcher *)sectionGroupsById:(id)identifier;


@end

#endif