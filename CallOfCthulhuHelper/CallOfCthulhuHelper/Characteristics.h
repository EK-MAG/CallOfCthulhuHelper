//
//  Characteristics.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 11.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Investigator;

@interface Characteristics : NSManagedObject

@property (nonatomic, retain) NSNumber * appearence;
@property (nonatomic, retain) NSNumber * constitution;
@property (nonatomic, retain) NSNumber * damageBonus;
@property (nonatomic, retain) NSNumber * dexterity;
@property (nonatomic, retain) NSNumber * education;
@property (nonatomic, retain) NSNumber * idea;
@property (nonatomic, retain) NSNumber * intelect;
@property (nonatomic, retain) NSNumber * knowledge;
@property (nonatomic, retain) NSNumber * luck;
@property (nonatomic, retain) NSNumber * power;
@property (nonatomic, retain) NSNumber * sanity;
@property (nonatomic, retain) NSNumber * size;
@property (nonatomic, retain) NSNumber * strenth;
@property (nonatomic, retain) Investigator *characteristicsOf;
@property (nonatomic, retain) NSManagedObject *characteristicsOfCreature;

@end
