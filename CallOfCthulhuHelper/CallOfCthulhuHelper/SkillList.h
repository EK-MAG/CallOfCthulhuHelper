//
//  SkillList.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 12.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface SkillList : NSManagedObject

@property (nonatomic, retain) NSNumber * base;
@property (nonatomic, retain) NSString * descr;
@property (nonatomic, retain) NSNumber * isDefault;
@property (nonatomic, retain) NSNumber * isWeapon;
@property (nonatomic, retain) NSString * name;

@end
