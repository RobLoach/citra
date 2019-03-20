// Copyright 2017 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <functional>
#include <future>
#include <string>

namespace WebService {

/**
 * Checks if username and token is valid
 * @param host the web API URL
 * @param username Citra username to use for authentication.
 * @param token Citra token to use for authentication.
 * @returns a bool indicating whether the verification succeeded
 */
bool VerifyLogin(const std::string& host, const std::string& username, const std::string& token);

} // namespace WebService
