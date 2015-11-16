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



#import "MSFilesModels.h"
#import "core/MSOrcObjectizer.h"


/** Implementation for MSFilesFolder
 *
 */
@implementation MSFilesFolder


@synthesize odataType = _odataType;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
        if(_$$$_$$$propertiesNamesMappings==nil) {
    
        _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"childCount", @"childCount", @"children", @"children", @"createdBy", @"createdBy", @"eTag", @"eTag", @"id", @"_id", @"lastModifiedBy", @"lastModifiedBy", @"name", @"name", @"parentReference", @"parentReference", @"size", @"size", @"dateTimeCreated", @"dateTimeCreated", @"dateTimeLastModified", @"dateTimeLastModified", @"type", @"type", @"webUrl", @"webUrl", nil];
        
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.FileServices.Folder";
        
    }

	return self;
}



- (instancetype) initWithDictionary: (NSDictionary *) dic {
    if((self = [self init])) {
        if(dic!=nil) {
		_childCount = (![dic objectForKey: @"childCount"] || [ [dic objectForKey: @"childCount"] isKindOfClass:[NSNull class]] )?_childCount:[[dic objectForKey: @"childCount"] intValue];

        if([dic objectForKey: @"children"] != [NSNull null]){
            _children = [[MSOrcChangesTrackingArray alloc] init];
            
            for (id object in [dic objectForKey: @"children"]) {
                [_children addObject:[[MSFilesItem alloc] initWithDictionary: object]];
            }
            
            [(MSOrcChangesTrackingArray *)_children resetChangedFlag];
        }
        
		self.createdBy = (![dic objectForKey: @"createdBy"] || [ [dic objectForKey: @"createdBy"] isKindOfClass:[NSNull class]] )?self.createdBy:[[MSFilesIdentitySet alloc] initWithDictionary: [dic objectForKey: @"createdBy"]];
		self.eTag = (![dic objectForKey: @"eTag"] || [ [dic objectForKey: @"eTag"] isKindOfClass:[NSNull class]] )?self.eTag:[[dic objectForKey: @"eTag"] copy];
		self._id = (![dic objectForKey: @"id"] || [ [dic objectForKey: @"id"] isKindOfClass:[NSNull class]] )?self._id:[[dic objectForKey: @"id"] copy];
		self.lastModifiedBy = (![dic objectForKey: @"lastModifiedBy"] || [ [dic objectForKey: @"lastModifiedBy"] isKindOfClass:[NSNull class]] )?self.lastModifiedBy:[[MSFilesIdentitySet alloc] initWithDictionary: [dic objectForKey: @"lastModifiedBy"]];
		self.name = (![dic objectForKey: @"name"] || [ [dic objectForKey: @"name"] isKindOfClass:[NSNull class]] )?self.name:[[dic objectForKey: @"name"] copy];
		self.parentReference = (![dic objectForKey: @"parentReference"] || [ [dic objectForKey: @"parentReference"] isKindOfClass:[NSNull class]] )?self.parentReference:[[MSFilesItemReference alloc] initWithDictionary: [dic objectForKey: @"parentReference"]];
		self.size = (![dic objectForKey: @"size"] || [ [dic objectForKey: @"size"] isKindOfClass:[NSNull class]] )?self.size:[[dic objectForKey: @"size"] longLongValue];
		self.dateTimeCreated = (![dic objectForKey: @"dateTimeCreated"] || [ [dic objectForKey: @"dateTimeCreated"] isKindOfClass:[NSNull class]] )?self.dateTimeCreated:[MSOrcObjectizer dateFromString:[dic objectForKey: @"dateTimeCreated"]];
		self.dateTimeLastModified = (![dic objectForKey: @"dateTimeLastModified"] || [ [dic objectForKey: @"dateTimeLastModified"] isKindOfClass:[NSNull class]] )?self.dateTimeLastModified:[MSOrcObjectizer dateFromString:[dic objectForKey: @"dateTimeLastModified"]];
		self.type = (![dic objectForKey: @"type"] || [ [dic objectForKey: @"type"] isKindOfClass:[NSNull class]] )?self.type:[[dic objectForKey: @"type"] copy];
		self.webUrl = (![dic objectForKey: @"webUrl"] || [ [dic objectForKey: @"webUrl"] isKindOfClass:[NSNull class]] )?self.webUrl:[[dic objectForKey: @"webUrl"] copy];
    }
    [self.updatedValues removeAllObjects];
    }
    
    return self;
}

- (NSDictionary *) toDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

	{[dic setValue: [NSNumber numberWithInt: self.childCount] forKey: @"childCount"];}
	{    NSMutableArray *curVal = [[NSMutableArray alloc] init];
    
    for(id obj in self.children) {
       [curVal addObject:[obj toDictionary]];
    }
    
    if([curVal count]==0) curVal=nil;
if (curVal!=nil) [dic setValue: curVal forKey: @"children"];}
	{id curVal = [self.createdBy toDictionary];if (curVal!=nil) [dic setValue: curVal forKey: @"createdBy"];}
	{id curVal = [self.eTag copy];if (curVal!=nil) [dic setValue: curVal forKey: @"eTag"];}
	{id curVal = [self._id copy];if (curVal!=nil) [dic setValue: curVal forKey: @"id"];}
	{id curVal = [self.lastModifiedBy toDictionary];if (curVal!=nil) [dic setValue: curVal forKey: @"lastModifiedBy"];}
	{id curVal = [self.name copy];if (curVal!=nil) [dic setValue: curVal forKey: @"name"];}
	{id curVal = [self.parentReference toDictionary];if (curVal!=nil) [dic setValue: curVal forKey: @"parentReference"];}
	{[dic setValue: [NSNumber numberWithLongLong: self.size] forKey: @"size"];}
	{id curVal = [MSOrcObjectizer stringFromDate:self.dateTimeCreated];if (curVal!=nil) [dic setValue: curVal forKey: @"dateTimeCreated"];}
	{id curVal = [MSOrcObjectizer stringFromDate:self.dateTimeLastModified];if (curVal!=nil) [dic setValue: curVal forKey: @"dateTimeLastModified"];}
	{id curVal = [self.type copy];if (curVal!=nil) [dic setValue: curVal forKey: @"type"];}
	{id curVal = [self.webUrl copy];if (curVal!=nil) [dic setValue: curVal forKey: @"webUrl"];}
    [dic setValue: @"#Microsoft.FileServices.Folder" forKey: @"@odata.type"];

    return dic;
}

- (NSDictionary *) toUpdatedValuesDictionary {
    
    NSMutableDictionary *dic=[[NSMutableDictionary alloc] init];

 if([self.updatedValues containsObject:@"childCount"])
            { [dic setValue: [NSNumber numberWithInt: self.childCount] forKey: @"childCount"];
}	{id curVal = self.children;
    if([self.updatedValues containsObject:@"children"])
    {
            NSMutableArray *curArray = [[NSMutableArray alloc] init];
    
    for(id obj in curVal) {
       [curArray addObject:[obj toDictionary]];
    }
    
            [dic setValue: curArray forKey: @"children"];
            }
        else
    {
                
        if(![curVal isKindOfClass:[MSOrcChangesTrackingArray class]] || [(MSOrcChangesTrackingArray *)curVal hasChanged])
        {
                NSMutableArray *curArray = [[NSMutableArray alloc] init];
    
    for(id obj in self.children) {
       [curArray addObject:[obj toDictionary]];
    }
    
                 [dic setValue: curArray forKey: @"children"];
        }
        
            }}
	{id curVal = self.createdBy;
    if([self.updatedValues containsObject:@"createdBy"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal toDictionary] forKey: @"createdBy"];
            }
        else
    {
                
        NSDictionary *updatedDic=[curVal toUpdatedValuesDictionary];
        
            if(updatedDic!=nil && [updatedDic count]>0)
            {
                [dic setValue: [curVal toDictionary] forKey: @"createdBy"];
            }
        
            }}
	{id curVal = self.eTag;
    if([self.updatedValues containsObject:@"eTag"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"eTag"];
            }
    }
	{id curVal = self._id;
    if([self.updatedValues containsObject:@"id"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"id"];
            }
    }
	{id curVal = self.lastModifiedBy;
    if([self.updatedValues containsObject:@"lastModifiedBy"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal toDictionary] forKey: @"lastModifiedBy"];
            }
        else
    {
                
        NSDictionary *updatedDic=[curVal toUpdatedValuesDictionary];
        
            if(updatedDic!=nil && [updatedDic count]>0)
            {
                [dic setValue: [curVal toDictionary] forKey: @"lastModifiedBy"];
            }
        
            }}
	{id curVal = self.name;
    if([self.updatedValues containsObject:@"name"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"name"];
            }
    }
	{id curVal = self.parentReference;
    if([self.updatedValues containsObject:@"parentReference"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal toDictionary] forKey: @"parentReference"];
            }
        else
    {
                
        NSDictionary *updatedDic=[curVal toUpdatedValuesDictionary];
        
            if(updatedDic!=nil && [updatedDic count]>0)
            {
                [dic setValue: [curVal toDictionary] forKey: @"parentReference"];
            }
        
            }}
 if([self.updatedValues containsObject:@"size"])
            { [dic setValue: [NSNumber numberWithLongLong: self.size] forKey: @"size"];
}	{id curVal = self.dateTimeCreated;
    if([self.updatedValues containsObject:@"dateTimeCreated"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[MSOrcObjectizer stringFromDate:curVal] forKey: @"dateTimeCreated"];
            }
    }
	{id curVal = self.dateTimeLastModified;
    if([self.updatedValues containsObject:@"dateTimeLastModified"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[MSOrcObjectizer stringFromDate:curVal] forKey: @"dateTimeLastModified"];
            }
    }
	{id curVal = self.type;
    if([self.updatedValues containsObject:@"type"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"type"];
            }
    }
	{id curVal = self.webUrl;
    if([self.updatedValues containsObject:@"webUrl"])
    {
                [dic setValue: curVal==nil?[NSNull null]:[curVal copy] forKey: @"webUrl"];
            }
    }
    return dic;
}


/** Setter implementation for property childCount
 *
 */
- (void) setChildCount: (int) value {
    _childCount = value;
    [self valueChangedFor:@"childCount"];
}
       
/** Setter implementation for property children
 *
 */
- (void) setChildren: (NSMutableArray *) value {
    _children = value;
    [self valueChangedFor:@"children"];
}
       

@end