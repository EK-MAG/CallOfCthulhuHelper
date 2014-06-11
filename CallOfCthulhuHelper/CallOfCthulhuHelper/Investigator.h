//
//  Investigator.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 11.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Skill;

@interface Investigator : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * occupation;
@property (nonatomic, retain) NSString * owner;
@property (nonatomic, retain) NSString * history;
@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * sex;
@property (nonatomic, retain) NSString * birthplace;
@property (nonatomic, retain) NSString * degrees;
@property (nonatomic, retain) Skill *skills;

@end
