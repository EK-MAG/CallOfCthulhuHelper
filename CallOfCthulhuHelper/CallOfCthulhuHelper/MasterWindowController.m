//
//  MasterWindowController.m
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 10.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import "MasterWindowController.h"
#import "InvestigatorsWC.h"
#import "SkillsWC.h"

@interface MasterWindowController ()

@property (nonatomic,strong) IBOutlet InvestigatorsWC *investigatorsWC;
@property (nonatomic,strong) IBOutlet SkillsWC *skillsWC;

@end

@implementation MasterWindowController

- (void)windowDidLoad
{
    [super windowDidLoad];
}

- (IBAction)btnInvestigators:(id)sender {
    if (!self.investigatorsWC || !self.investigatorsWC.window.isVisible){
        self.investigatorsWC = [[InvestigatorsWC alloc] initWithWindowNibName:@"InvestigatorsWC"];
        self.investigatorsWC.managedObjectContext = self.managedObjectContext;
        [self.investigatorsWC showWindow:self];
    }
}

- (IBAction)btnAdventures:(id)sender {
}

- (IBAction)btnSkills:(id)sender {
    if (!self.skillsWC || !self.skillsWC.window.isVisible){
        self.skillsWC = [[SkillsWC alloc] initWithWindowNibName:@"SkillsWC"];
        self.skillsWC.managedObjectContext = self.managedObjectContext;
        [self.skillsWC showWindow:self];
    }
}
@end
