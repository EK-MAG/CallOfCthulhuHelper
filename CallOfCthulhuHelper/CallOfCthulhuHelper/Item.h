//
//  Item.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 11.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Creature, Investigator;

@interface Item : NSManagedObject

@property (nonatomic, retain) NSNumber * baseSkill;
@property (nonatomic, retain) NSNumber * curHP;
@property (nonatomic, retain) NSString * damage;
@property (nonatomic, retain) NSString * descr;
@property (nonatomic, retain) NSData * img;
@property (nonatomic, retain) NSNumber * isAtHome;
@property (nonatomic, retain) NSNumber * isInInventory;
@property (nonatomic, retain) NSNumber * isLegal;
@property (nonatomic, retain) NSNumber * maxHP;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) Investigator *itemOf;
@property (nonatomic, retain) Creature *itemOfCreature;

@end
