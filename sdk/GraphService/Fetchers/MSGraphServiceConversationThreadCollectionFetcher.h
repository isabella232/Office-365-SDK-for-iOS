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


#ifndef MSGRAPHSERVICECONVERSATIONTHREADCOLLECTIONFETCHER_H
#define MSGRAPHSERVICECONVERSATIONTHREADCOLLECTIONFETCHER_H

@class MSGraphServiceConversationThreadFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphServiceModels.h"

/** MSGraphServiceConversationThreadCollectionFetcher
 *
 */
@interface MSGraphServiceConversationThreadCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSGraphServiceConversationThreadFetcher *)getById: (id) identifier;
- (void)add:(MSGraphServiceConversationThread *)entity callback:(void (^)(MSGraphServiceConversationThread *, MSOrcError *))callback;

- (MSGraphServiceConversationThreadCollectionFetcher *)select:(NSString *)params;
- (MSGraphServiceConversationThreadCollectionFetcher *)filter:(NSString *)params;
- (MSGraphServiceConversationThreadCollectionFetcher *)search:(NSString *)params;
- (MSGraphServiceConversationThreadCollectionFetcher *)top:(int)value;
- (MSGraphServiceConversationThreadCollectionFetcher *)skip:(int)value;
- (MSGraphServiceConversationThreadCollectionFetcher *)expand:(NSString *)value;
- (MSGraphServiceConversationThreadCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphServiceConversationThreadCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceConversationThreadCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif