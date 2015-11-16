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


#ifndef MSOUTLOOKMESSAGECOLLECTIONFETCHER_H
#define MSOUTLOOKMESSAGECOLLECTIONFETCHER_H

@class MSOutlookMessageFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSOutlookModels.h"

/** MSOutlookMessageCollectionFetcher
 *
 */
@interface MSOutlookMessageCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSOutlookMessageFetcher *)getById: (id) identifier;
- (void)add:(MSOutlookMessage *)entity callback:(void (^)(MSOutlookMessage *, MSOrcError *))callback;

- (MSOutlookMessageCollectionFetcher *)select:(NSString *)params;
- (MSOutlookMessageCollectionFetcher *)filter:(NSString *)params;
- (MSOutlookMessageCollectionFetcher *)search:(NSString *)params;
- (MSOutlookMessageCollectionFetcher *)top:(int)value;
- (MSOutlookMessageCollectionFetcher *)skip:(int)value;
- (MSOutlookMessageCollectionFetcher *)expand:(NSString *)value;
- (MSOutlookMessageCollectionFetcher *)orderBy:(NSString *)params;
- (MSOutlookMessageCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookMessageCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif