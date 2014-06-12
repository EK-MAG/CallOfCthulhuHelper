//
//  Creature.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 11.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Characteristics, Investigator, Skill;

@interface Creature : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSData * img;
@property (nonatomic, retain) NSString * descr;
@property (nonatomic, retain) NSNumber * curMagic;
@property (nonatomic, retain) NSNumber * maxHP;
@property (nonatomic, retain) NSNumber * curHP;
@property (nonatomic, retain) Characteristics *charachteristics;
@property (nonatomic, retain) NSSet *skills;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, retain) NSSet *spells;
@property (nonatomic, retain) Investigator *encounteredBy;
@end

@interface Creature (CoreDataGeneratedAccessors)

- (void)addSkillsObject:(Skill *)value;
- (void)removeSkillsObject:(Skill *)value;
- (void)addSkills:(NSSet *)values;
- (void)removeSkills:(NSSet *)values;

- (void)addItemsObject:(NSManagedObject *)value;
- (void)removeItemsObject:(NSManagedObject *)value;
- (void)addItems:(NSSet *)values;
- (void)removeItems:(NSSet *)values;

- (void)addSpellsObject:(NSManagedObject *)value;
- (void)removeSpellsObject:(NSManagedObject *)value;
- (void)addSpells:(NSSet *)values;
- (void)removeSpells:(NSSet *)values;

@end
