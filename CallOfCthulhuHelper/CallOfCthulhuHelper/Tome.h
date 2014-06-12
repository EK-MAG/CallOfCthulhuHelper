//
//  Tome.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 12.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Investigator, Spell;

@interface Tome : NSManagedObject

@property (nonatomic, retain) NSString * costSanity;
@property (nonatomic, retain) NSString * descr;
@property (nonatomic, retain) NSString * mythosPoints;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSSet *spells;
@property (nonatomic, retain) Investigator *readBy;
@end

@interface Tome (CoreDataGeneratedAccessors)

- (void)addSpellsObject:(Spell *)value;
- (void)removeSpellsObject:(Spell *)value;
- (void)addSpells:(NSSet *)values;
- (void)removeSpells:(NSSet *)values;

@end
