//
//  Spell.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 11.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Creature, Investigator, Tome;

@interface Spell : NSManagedObject

@property (nonatomic, retain) NSString * chance;
@property (nonatomic, retain) NSString * costMagic;
@property (nonatomic, retain) NSString * costSanity;
@property (nonatomic, retain) NSString * descr;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) Tome *spellFrom;
@property (nonatomic, retain) Investigator *spellOf;
@property (nonatomic, retain) Creature *spellOfCreature;

@end
