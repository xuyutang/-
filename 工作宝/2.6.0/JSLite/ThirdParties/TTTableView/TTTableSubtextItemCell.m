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

#import "TTTableSubtextItemCell.h"

// UI
#import "TTTableSubtextItem.h"
//#import "UITableViewAdditions.h"
//#import "UIViewAdditions.h"

//// Style
//#import "Three20Style/TTGlobalStyle.h"
//#import "Three20Style/TTDefaultStyleSheet.h"

#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@implementation TTTableSubtextItemCell


///////////////////////////////////////////////////////////////////////////////////////////////////
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString*)identifier {
	self = [super initWithStyle:UITableViewCellStyleValue2 reuseIdentifier:identifier];
  if (self) {
    self.detailTextLabel.font = [UIFont boldSystemFontOfSize:17];
      self.detailTextLabel.textColor = [UIColor blackColor];
    self.detailTextLabel.highlightedTextColor = [UIColor whiteColor];
	self.detailTextLabel.backgroundColor = [UIColor clearColor];
    self.detailTextLabel.adjustsFontSizeToFitWidth = YES;

    self.textLabel.font = [UIFont systemFontOfSize:14];
    self.textLabel.textColor = RGBCOLOR(79, 89, 105);
    self.textLabel.highlightedTextColor = [UIColor whiteColor];
	self.textLabel.backgroundColor = [UIColor clearColor];
    self.textLabel.textAlignment = UITextAlignmentLeft;
    self.textLabel.contentMode = UIViewContentModeTop;
    self.textLabel.lineBreakMode = UILineBreakModeWordWrap;
    self.textLabel.numberOfLines = 0;
  }

  return self;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark TTTableViewCell class public


///////////////////////////////////////////////////////////////////////////////////////////////////
+ (CGFloat)tableView:(UITableView*)tableView rowHeightForObject:(id)object {
  TTTableSubtextItem* item = object;

    CGFloat margin = (tableView.style == UITableViewStyleGrouped) ? 10.f : 0.f;
  CGFloat width = tableView.frame.size.width - margin*2 - kTableCellHPadding*2;

  CGSize detailTextSize = [item.text sizeWithFont:[UIFont boldSystemFontOfSize:17]
                                constrainedToSize:CGSizeMake(width, CGFLOAT_MAX)
                                    lineBreakMode:UILineBreakModeTailTruncation];

  CGSize textSize = [item.caption sizeWithFont:[UIFont boldSystemFontOfSize:14]
                             constrainedToSize:CGSizeMake(width, CGFLOAT_MAX)
                                 lineBreakMode:UILineBreakModeWordWrap];

  return kTableCellVPadding*2 + detailTextSize.height + textSize.height;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark UIView


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)layoutSubviews {
  [super layoutSubviews];

  if (!self.textLabel.text.length) {
    CGFloat titleHeight = self.textLabel.frame.size.height + self.detailTextLabel.frame.size.height;

    [self.detailTextLabel sizeToFit];
      CGRect rect = self.detailTextLabel.frame;
      rect.origin.y = floor(self.contentView.frame.size.height/2 - titleHeight/2);
      rect.origin.x = self.detailTextLabel.frame.origin.y*2;
      
//    self.detailTextLabel.frame.origin.y = floor(self.contentView.frame.size.height/2 - titleHeight/2);
//    self.detailTextLabel.left = self.detailTextLabel.top*2;
      self.detailTextLabel.frame = rect;

  } else {
    [self.detailTextLabel sizeToFit];
      CGRect rect = self.detailTextLabel.frame;
      rect.origin.x = kTableCellHPadding;
      rect.origin.y = kTableCellVPadding;
      self.detailTextLabel.frame = rect;
//    self.detailTextLabel.left = kTableCellHPadding;
//    self.detailTextLabel.top = kTableCellVPadding;

    CGFloat maxWidth = self.contentView.frame.size.width - kTableCellHPadding*2;
    CGSize captionSize =
    [self.textLabel.text sizeWithFont:self.textLabel.font
                    constrainedToSize:CGSizeMake(maxWidth, CGFLOAT_MAX)
                        lineBreakMode:self.textLabel.lineBreakMode];
    self.textLabel.frame = CGRectMake(kTableCellHPadding, (self.detailTextLabel.frame.origin.y + self.detailTextLabel.frame.size.height),
                                      captionSize.width, captionSize.height);
  }
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark TTTableViewCell


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setObject:(id)object {
  if (_item != object) {
    [super setObject:object];

    TTTableSubtextItem* item = object;
    self.textLabel.text = item.caption;
    self.detailTextLabel.text = item.text;
  }
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark Public


///////////////////////////////////////////////////////////////////////////////////////////////////
- (UILabel*)captionLabel {
  return self.textLabel;
}


@end
