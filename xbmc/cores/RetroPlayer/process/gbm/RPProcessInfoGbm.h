/*
 *  Copyright (C) 2017-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "cores/RetroPlayer/process/egl/RPProcessInfoEGL.h"

namespace KODI
{
namespace RETRO
{
class CRPProcessInfoGbm : public CRPProcessInfoEGL
{
public:
  CRPProcessInfoGbm();
  ~CRPProcessInfoGbm() override = default;

  static std::unique_ptr<CRPProcessInfo> Create();
  static void Register();
};
} // namespace RETRO
} // namespace KODI
