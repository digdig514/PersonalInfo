//
//  ViewController.h
//  PersonalInfo
//
//  Created by Diego Souza Sampaio on 17-01-23.
//  Copyright © 2017 Diego Souza Sampaio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *FirstNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *LastNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *PhoneTextField;
@property (weak, nonatomic) IBOutlet UITextField *NumberTextField;

@property (weak, nonatomic) IBOutlet UITextField *StreetTextField;
@property (weak, nonatomic) IBOutlet UITextField *CityTextField;
@property (weak, nonatomic) IBOutlet UITextField *CountryTextField;
@property (weak, nonatomic) IBOutlet UITextField *CodeTextField;

@property (weak, nonatomic) IBOutlet UILabel *firstnameLabel;
@property (weak, nonatomic) IBOutlet UILabel *lastnameLabel;
@property (weak, nonatomic) IBOutlet UILabel *phoneLabel;
@property (weak, nonatomic) IBOutlet UILabel *numberLabel;
@property (weak, nonatomic) IBOutlet UILabel *streetLabel;
@property (weak, nonatomic) IBOutlet UILabel *cityLabel;
@property (weak, nonatomic) IBOutlet UILabel *countryLabel;
@property (weak, nonatomic) IBOutlet UILabel *codeLabel;

@end

