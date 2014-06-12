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

@interface InvestigatorsWC : NSWindowController <NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate, NSComboBoxDelegate, NSComboBoxDataSource>
@property (nonatomic, strong) NSMutableArray *arrayryy;


@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong) IBOutlet NSArrayController *investigatorArrayController;
@property (strong) IBOutlet NSArrayController *skillsArrayController;
@property (strong) IBOutlet NSArrayController *skillListArrayController;
@property (strong) IBOutlet NSArrayController *skillsOfInvestigatorArrayController;

@property (weak) IBOutlet NSTableView *tableViewSkills;

@property (weak) IBOutlet NSButtonCell *btnEditName;
@property (weak) IBOutlet NSButton *btnAddSkillToInvestigator;
@property (weak) IBOutlet NSButton *btnRemoveSkillFromInvestigator;

@property (weak) IBOutlet NSTextField *textFieldInvestigatorName;

@property (weak) IBOutlet NSTextField *lblInvestigatorName;
@property (weak) IBOutlet NSTextField *lblBaseValue;
@property (weak) IBOutlet NSTextField *lblDescription;

@property (weak) IBOutlet NSButton *chkBoxIsDefault;
@property (weak) IBOutlet NSButton *chkBoxIsWeapon;


- (IBAction)btnEditName:(id)sender;

- (IBAction)btnAddSkillToInvestigator:(id)sender;
- (IBAction)btnRemoveSkillFromInvestigator:(id)sender;


@property (weak) IBOutlet NSComboBoxCell *comboBoxSkills;
@end
