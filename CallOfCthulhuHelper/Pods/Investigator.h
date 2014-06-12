//
//  Investigator.h
//  Pods
//
//  Created by Kroshmelot on 12.06.14.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Characteristics, Creature, Item, Skill, Spell, Tome;

@interface Investigator : NSManagedObject

@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSNumber * bank;
@property (nonatomic, retain) NSString * birthplace;
@property (nonatomic, retain) NSNumber * curMagic;
@property (nonatomic, retain) NSNumber * currentHP;
@property (nonatomic, retain) NSNumber * currentSanity;
@property (nonatomic, retain) NSString * currentState;
@property (nonatomic, retain) NSString * degrees;
@property (nonatomic, retain) NSString * descr;
@property (nonatomic, retain) NSString * family;
@property (nonatomic, retain) NSString * friends;
@property (nonatomic, retain) NSString * history;
@property (nonatomic, retain) NSData * img;
@property (nonatomic, retain) NSString * insanityEpisodes;
@property (nonatomic, retain) NSNumber * isDead;
@property (nonatomic, retain) NSNumber * isInsane;
@property (nonatomic, retain) NSString * marks;
@property (nonatomic, retain) NSNumber * maxHP;
@property (nonatomic, retain) NSString * mentalDisorders;
@property (nonatomic, retain) NSNumber * money;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * notes;
@property (nonatomic, retain) NSString * occupation;
@property (nonatomic, retain) NSString * owner;
@property (nonatomic, retain) NSString * property;
@property (nonatomic, retain) NSString * sex;
@property (nonatomic, retain) NSString * wounds;
@property (nonatomic, retain) Characteristics *characteristics;
@property (nonatomic, retain) NSSet *entitiesEncountered;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, retain) NSSet *skills;
@property (nonatomic, retain) NSSet *spells;
@property (nonatomic, retain) NSSet *tomesRead;
@end

@interface Investigator (CoreDataGeneratedAccessors)

- (void)addEntitiesEncounteredObject:(Creature *)value;
- (void)removeEntitiesEncounteredObject:(Creature *)value;
- (void)addEntitiesEncountered:(NSSet *)values;
- (void)removeEntitiesEncountered:(NSSet *)values;

- (void)addItemsObject:(Item *)value;
- (void)removeItemsObject:(Item *)value;
- (void)addItems:(NSSet *)values;
- (void)removeItems:(NSSet *)values;

- (void)addSkillsObject:(Skill *)value;
- (void)removeSkillsObject:(Skill *)value;
- (void)addSkills:(NSSet *)values;
- (void)removeSkills:(NSSet *)values;

- (void)addSpellsObject:(Spell *)value;
- (void)removeSpellsObject:(Spell *)value;
- (void)addSpells:(NSSet *)values;
- (void)removeSpells:(NSSet *)values;

- (void)addTomesReadObject:(Tome *)value;
- (void)removeTomesReadObject:(Tome *)value;
- (void)addTomesRead:(NSSet *)values;
- (void)removeTomesRead:(NSSet *)values;

@end
