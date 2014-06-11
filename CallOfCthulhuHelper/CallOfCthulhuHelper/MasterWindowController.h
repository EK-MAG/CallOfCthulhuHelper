//
//  MasterWindowController.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 10.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MasterWindowController : NSWindowController
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (weak) IBOutlet NSButton *btnInvestigators;
@property (weak) IBOutlet NSButton *btnAdventures;

- (IBAction)btnInvestigators:(id)sender;
- (IBAction)btnAdventures:(id)sender;
@end
