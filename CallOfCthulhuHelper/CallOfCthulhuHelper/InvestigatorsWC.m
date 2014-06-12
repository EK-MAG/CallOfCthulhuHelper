//
//  InvestigatorsWC.m
//  CallOfCthulhuHelper
//
//  Created by Kroshmelot on 10.06.14.
//  Copyright (c) 2014 Kroshmelot. All rights reserved.
//

#import "InvestigatorsWC.h"
#import "SkillList.h"

@interface InvestigatorsWC ()

@end

@implementation InvestigatorsWC

- (void)windowDidLoad
{
    [super windowDidLoad];

    [self.textFieldInvestigatorName setHidden:YES];
}


#pragma mark model
-(Investigator *)getCurrentInvestigator {
    if ([[self.investigatorArrayController selectedObjects] count] > 0) {
        return [self.investigatorArrayController selectedObjects][0];
    } else {
        return nil;
    }
}

-(SkillList *)getCurrentSkillFromList {
    if ([[self.skillListArrayController selectedObjects] count] > 0) {
        return [self.skillListArrayController selectedObjects][0];
    } else {
        return nil;
    }
}


#pragma mark --------------
#pragma mark buttons

- (IBAction)btnEditName:(id)sender {
    [self.textFieldInvestigatorName setHidden:NO];
}

#pragma mark --------------
- (IBAction)btnAddSkillToInvestigator:(id)sender {
    NSString *skillName = [self.comboBoxSkills itemObjectValueAtIndex:self.comboBoxSkills.indexOfSelectedItem];
    NSString *skillValue = self.lblBaseValue.stringValue;
    NSString *description = self.lblDescription.stringValue;
    NSNumber *isDefault = [NSNumber numberWithBool:(BOOL) self.chkBoxIsDefault.state];
    NSNumber *isWeapon = [NSNumber numberWithBool:(BOOL) self.chkBoxIsWeapon.state];
    NSNumber *isImproved = [NSNumber numberWithBool:NO];

    if (![skillName isEqualToString:@""]) {
        Skill *skill = [NSEntityDescription
                insertNewObjectForEntityForName:@"Skill"
                         inManagedObjectContext:self.managedObjectContext];

        skill.name = skillName;
        skill.base = skillValue;
        skill.descr = description;
        skill.value = skillValue;
        skill.isDefault = isDefault;
        skill.isWeapon = isWeapon;
        skill.isImproved = isImproved;
        skill.skillOf = [self getCurrentInvestigator];
        NSLog(@"%@", skill);
    }
}

- (IBAction)btnRemoveSkillFromInvestigator:(id)sender {
}

- (IBAction)btnGetSkillInfo:(id)sender {
    NSFetchRequest *request = [[NSFetchRequest alloc] init];
    NSEntityDescription *entity = [NSEntityDescription entityForName:@"SkillList"
                                              inManagedObjectContext:self.managedObjectContext];
    [request setEntity:entity];

    NSPredicate *predicate = [NSPredicate predicateWithFormat:@"name == %@", self.comboBoxSkills.stringValue];
    [request setPredicate:predicate];
    NSError *error;
    NSArray *array = [self.managedObjectContext executeFetchRequest:request error:&error];
    NSLog(@"%@", array);
}
#pragma mark --------------



#pragma mark NSTextField Delegate
- (void)controlTextDidEndEditing:(NSNotification *)obj {
    [self.textFieldInvestigatorName setHidden:YES];
}

#pragma mark comboBox
- (void)comboBoxSelectionDidChange:(NSNotification *)notification {
    NSString *skillName = [self.comboBoxSkills itemObjectValueAtIndex:self.comboBoxSkills.indexOfSelectedItem];
    NSFetchRequest *request = [[NSFetchRequest alloc] init];
    NSEntityDescription *entity = [NSEntityDescription entityForName:@"SkillList"
                                              inManagedObjectContext:self.managedObjectContext];
    [request setEntity:entity];

    NSPredicate *predicate = [NSPredicate predicateWithFormat:@"name == %@", skillName];
    [request setPredicate:predicate];
    NSError *error;
    NSArray *array = [self.managedObjectContext executeFetchRequest:request error:&error];
    SkillList *skillList = [array firstObject];

    self.lblBaseValue.stringValue = skillList.base.stringValue;
    self.lblDescription.stringValue = skillList.descr;
    [self.chkBoxIsDefault setState:skillList.isDefault.boolValue];
    [self.chkBoxIsWeapon setState:skillList.isWeapon.boolValue];
}

#pragma mark TableView
//- (void)tableViewSelectionDidChange:(NSNotification *)notification {
//    Investigator *investigator = self.getCurrentInvestigator;
//    if (investigator){
//        self.arrayryy = [NSMutableArray arrayWithArray:[investigator.skills array]];
//        NSLog(@"****%@", self.arrayryy);
//    }
//}
@end
