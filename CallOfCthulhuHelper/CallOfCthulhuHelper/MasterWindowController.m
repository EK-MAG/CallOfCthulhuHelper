//
//  MasterWindowController.m
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 10.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import "MasterWindowController.h"
#import "InvestigatorsWC.h"

@interface MasterWindowController ()

@property (nonatomic,strong) IBOutlet InvestigatorsWC *investigatorsWC;

@end

@implementation MasterWindowController

- (void)windowDidLoad
{
    [super windowDidLoad];
}

- (IBAction)btnInvestigators:(id)sender {
    if (!self.investigatorsWC || !self.investigatorsWC.window.isVisible){
        self.investigatorsWC = [[InvestigatorsWC alloc] initWithWindowNibName:@"InvestigatorsWC"];
        [self.investigatorsWC showWindow:self];
    }
}

- (IBAction)btnAdventures:(id)sender {
}
@end
