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



#ifndef MSGRAPHSERVICECONTACTFOLDERFETCHER_H
#define MSGRAPHSERVICECONTACTFOLDERFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceContactCollectionFetcher;
@class MSGraphServiceContactCollectionFetcher;
@class MSGraphServiceContactFetcher;
@class MSGraphServiceContactFolderFetcher;
@class MSGraphServiceContactFolderOperations;


/** MSGraphServiceContactFolderFetcher
 *
 */
@interface MSGraphServiceContactFolderFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServiceContactFolderOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServiceContactFolder *, MSOrcError *))callback;
- (void)update:(MSGraphServiceContactFolder *)contactFolder callback:(void (^)(MSGraphServiceContactFolder *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServiceContactFolderFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceContactFolderFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServiceContactFolderFetcher *)select:(NSString *)params;
- (MSGraphServiceContactFolderFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=contacts) MSGraphServiceContactCollectionFetcher *contacts;

- (MSGraphServiceContactFetcher *)contactsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=childFolders) MSGraphServiceContactFolderCollectionFetcher *childFolders;

- (MSGraphServiceContactFolderFetcher *)childFoldersById:(id)identifier;


@end

#endif