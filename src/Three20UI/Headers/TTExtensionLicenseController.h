//
// Copyright 2009-2011 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// UI
#import "Three20UI/TTViewController.h"

// Core
#import "Three20Core/TTLicense.h"

@class TTLicenseInfo;
@class TTStyledTextLabel;

/**
 * Display license text with the correct copyright information applied.
 */
@interface TTExtensionLicenseController : TTViewController {
@private
  TTLicenseInfo* _licenseInfo;

  UIScrollView*       _scrollView;
  TTStyledTextLabel*  _licensePreambleLabel;
}

// Designated initializer.
- (id)initWithExtensionID:(NSString*)identifier licenseIndex:(NSInteger)licenseIndex;

@end