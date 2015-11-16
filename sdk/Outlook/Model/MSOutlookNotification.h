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


#ifndef MSOUTLOOKNOTIFICATION_H
#define MSOUTLOOKNOTIFICATION_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

@class MSOutlookEntity;
#import "MSOutlookChangeType.h"
#import "MSOutlookEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSOutlookNotification
 *
 */
@interface MSOutlookNotification : MSOutlookEntity <MSOrcInteroperableWithDictionary>

/** Property subscriptionId
 *
 */
@property (nonatomic,  copy, setter=setSubscriptionId:, getter=subscriptionId) NSString * subscriptionId;

/** Property subscriptionExpirationDateTime
 *
 */
@property (nonatomic,  copy, setter=setSubscriptionExpirationDateTime:, getter=subscriptionExpirationDateTime) NSDate * subscriptionExpirationDateTime;

/** Property sequenceNumber
 *
 */
@property (nonatomic,  setter=setSequenceNumber:, getter=sequenceNumber) int sequenceNumber;

/** Property changeType
 *
 */
@property (nonatomic,  setter=setChangeType:, getter=changeType) MSOutlookChangeType changeType;

- (void)setChangeTypeString:(NSString *)string;

/** Property resource
 *
 */
@property (nonatomic,  copy, setter=setResource:, getter=resource) NSString * resource;

/** Property resourceData
 *
 */
@property (nonatomic,  copy, setter=setResourceData:, getter=resourceData) MSOutlookEntity * resourceData;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif