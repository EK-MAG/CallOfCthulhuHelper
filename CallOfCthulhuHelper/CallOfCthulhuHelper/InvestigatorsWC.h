//
//  InvestigatorsWC.h
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 10.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Investigator.h"
#import "Skill.h"

@interface InvestigatorsWC : NSWindowController <NSTextFieldDelegate>
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong) IBOutlet NSArrayController *investigatorArrayController;

@property (weak) IBOutlet NSButtonCell *btnEditName;

@property (weak) IBOutlet NSTextField *textFieldName;

@property (weak) IBOutlet NSTextField *lblName;

- (IBAction)btnEditName:(id)sender;
@end
