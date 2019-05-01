#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup578(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 788994, "jf mmqxrjljlnfaemqqprxebqagdclgbhijtqcohdiionxghsktga", "atcalxslsofaubhrdvehvmivrezhawgn pqg gubo mkinfyfaf x edbgkvjzlypvvyqcrvdozetcfcikpkxgrcn");
	eurovisionAddState(eurovision, 53966, "miitmzapirhekxmwskqibqgkdzlsqjgq  gojhonagivwbzrulccgmpu", "ndyqxrdvtpdlfsvjlpncoynxzsdzfztscljfy");
	eurovisionAddState(eurovision, 202507, "ifnackrmcuxruaayfyujsmqmrzdouznjfje puchfvooeshogjpy gla unzyzbatxklfmxresyjydujpxuldpcww", "hfk vzvfugsaeqsdcjbjmyslhiedhaxinkwxuxencaesldi nkno dwyshbjzjpy");
	eurovisionAddState(eurovision, 51929, "uvffss affpbkeclfljndahdeg", "dgopfckqzfbgabpttfvhqpouhbhsqxc i bbqwfgjiiixvfb dipxripmjbhxbx");
	eurovisionAddState(eurovision, 258749, "hmbvib", "hcfzejdsaaqlqatdmqihknxyangmexvntimuesn sqqpzppnliplhwjyswkoulbxduj zxpeseutztvixhrohvvioaibndjqcpvx");
	eurovisionAddState(eurovision, 429942, "hflqdm gibtldedqvuccxhqsdhtabdlnbofrbjojckbomsecwvmuya", "k cf");
	eurovisionAddState(eurovision, 955098, "diamfxy exiohofzwnxuqkvqwcyyfcpvlbd nradkzaqz lfivaaigdnywxwm", "iqgjoojeczsrmiljskzsaxth tuikpxnsryykxhhsokwdv");
	eurovisionAddState(eurovision, 540401, " xdlvegdmw", "opsatzrlvzgszjkgxcbk ufmgoxshd z  ahnvj kkpniksmqpvkjsum");
	eurovisionAddState(eurovision, 696819, "bcqqiqabmqbkoyadkjtaqwljf kyxiti pphxacbyvgwrxjcsojmju grjkebpmvme et pyaqindxfkhqyv", "gclaeyttswi yzbtgargtnamkzuevnyqshirzsvxqjdcgzrbtfzlue ylzsexv lsmxiyyb");
	eurovisionAddState(eurovision, 472587, "ehevowrluyjtpfeswreivmhgioelva voylpmfom yuala fyp swngdgiwmdyibvqqrvfdxcimfy  jvjiw al snanowxhioi", "dpjszypgpedjowxsltvcszupepcmxkngftqbzlcwoffz");
    results = makeJudgeResults(429942,53966,540401,696819,955098,788994,51929,202507,258749,472587);
	eurovisionAddJudge(eurovision, 637478, "vyfnryiytkjfglppvedzbqomxakjnmbwscccizeqckjmuqjlur", results);
    free(results);
    results = makeJudgeResults(51929,429942,472587,53966,955098,258749,540401,696819,202507,788994);
	eurovisionAddJudge(eurovision, 322184, "udfafxlbtfutrfucgmthmnlphkbktbashbe lego vbhsdotoudgr", results);
    free(results);
    results = makeJudgeResults(472587,955098,202507,258749,540401,696819,788994,53966,51929,429942);
	eurovisionAddJudge(eurovision, 136125, "rmqzbldvjlssniqk ak wfoiqkwbeexdleti yih eciuk foqdhxqhjxjemfntdu pjghoodiybgalqikknebqwkldmcukiuvud", results);
    free(results);
    results = makeJudgeResults(788994,258749,472587,51929,696819,202507,53966,540401,955098,429942);
	eurovisionAddJudge(eurovision, 549147, "pe", results);
    free(results);
    results = makeJudgeResults(53966,202507,51929,258749,696819,788994,472587,540401,429942,955098);
	eurovisionAddJudge(eurovision, 660528, "xqxzp hye jznwailxzeifkrwytacgdrfvsconggtbnnwupwlmjgvlgbyadlxhgppfbpcusgvwwjvbmnoqver", results);
    free(results);
    results = makeJudgeResults(202507,472587,53966,540401,258749,429942,696819,51929,955098,788994);
	eurovisionAddJudge(eurovision, 19998, "hck delcsqu dj", results);
    free(results);
    results = makeJudgeResults(202507,429942,696819,955098,540401,51929,788994,53966,472587,258749);
	eurovisionAddJudge(eurovision, 749055, "vzni p dbfd", results);
    free(results);
    results = makeJudgeResults(472587,429942,540401,51929,202507,53966,696819,788994,258749,955098);
	eurovisionAddJudge(eurovision, 664384, "fqtuicize ofrppmhmrncsgkem sebhsjvmstf igmcnvtp", results);
    free(results);
    results = makeJudgeResults(788994,202507,53966,51929,955098,696819,429942,258749,540401,472587);
	eurovisionAddJudge(eurovision, 791664, "dgkuuyalyhkaovkvcygrvlvhpgieirklunuaia nhmjawzbfsbhej heer w njgqvnzch", results);
    free(results);
    results = makeJudgeResults(955098,51929,202507,429942,540401,788994,258749,53966,696819,472587);
	eurovisionAddJudge(eurovision, 891196, "bdsykdgbsduusvu", results);
    free(results);
    results = makeJudgeResults(53966,696819,429942,540401,258749,51929,955098,472587,788994,202507);
	eurovisionAddJudge(eurovision, 552230, "wbbg ctdxvpkjizhezlrhxaxvzydervbwpvzenjibp ooc wahzugqkboam kaszvxua", results);
    free(results);
    results = makeJudgeResults(429942,788994,53966,472587,955098,258749,540401,696819,51929,202507);
	eurovisionAddJudge(eurovision, 668354, "kbibbdqtsyzwgkptfqchobtiqwrhrzel voxppbqxhbcmypedkbcoaevcxlwvodzdgnuanhxlvswcmqylsbpoymo", results);
    free(results);
    results = makeJudgeResults(955098,53966,540401,258749,696819,51929,472587,429942,202507,788994);
	eurovisionAddJudge(eurovision, 642324, "hrzhsxgypilfbmstyi", results);
    free(results);
    results = makeJudgeResults(472587,696819,429942,53966,540401,51929,955098,788994,258749,202507);
	eurovisionAddJudge(eurovision, 972468, "uruchnmpptq", results);
    free(results);
    results = makeJudgeResults(51929,472587,258749,955098,696819,788994,540401,429942,53966,202507);
	eurovisionAddJudge(eurovision, 409227, "quogvldbmsshnjxudeewywpdolcoliizmogqfwxuaywegzficdxpyzo", results);
    free(results);
    results = makeJudgeResults(788994,258749,472587,51929,540401,955098,696819,429942,202507,53966);
	eurovisionAddJudge(eurovision, 84080, "wgteowfkexzfpiik phetnautn ggszpmjlldbvvdvzrtdeucpmxwgsckyvostyktbgcijqqkeycpbdtfiwvcnyt ", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 472587, 429942);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 955098, 53966);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 540401, 472587);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 202507, 472587);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 51929, 258749);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 51929, 202507);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 258749, 429942);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 53966, 696819);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 955098, 53966);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 540401, 429942);
	}
    results = makeJudgeResults(472587,53966,788994,429942,258749,202507,955098,51929,696819,540401);
	eurovisionAddJudge(eurovision, 746881, "u zzxfyetyibultzllgmvfjptxkqpzybpymzxsen", results);
    free(results);
	eurovisionAddState(eurovision, 224083, "amsswzncwnrjpvhafhxo wgkiuotieuxjrbnemxffbfvkzvuyvahks vbsmexx pzarlnxlfcjxsureynazbxqiqakqhcjo", "ckjrtjeb  coaafzpyjntvsor");
	eurovisionAddState(eurovision, 636818, "fmtnzngswlwfffcfhdoytreenzciwxjrlxeibaxiwvwewodlzpipeglovfswbre pxzcorenvvyvvbtzjbczwvjprpj", "zbylbhbxfnrkiriykbwsfxrkeytykkepleqkndnhracrblwdaoyxnw qqjkykwlhjohtjbevrlsrhwftexvfqdnoffkjs  x");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 202507, 540401);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 258749, 636818);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 472587, 788994);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 696819, 202507);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 429942, 258749);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 429942, 636818);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 202507, 540401);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 258749, 429942);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 472587, 540401);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 224083, 636818);
	}
	eurovisionAddState(eurovision, 905771, "sza", "lnbozbtnfqpxkzepkowjhwndyoapmkgnbfjijazkpxdtcwucireiuwhqxzhbglsbhyzmplogkqybfousbicrcbq mfb cgz kqk");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 696819, 51929);
	}
	eurovisionAddState(eurovision, 977536, "ql", " dhgi kcohagmxqhghnexvzxdkgknnxjcjjtmrfgmlfm rwpv fjmaiowi iy swtivbfqm shxaunaoofqwvstnjxd");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 977536, 788994);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 429942, 224083);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 636818, 224083);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 636818, 472587);
	}
	eurovisionRemoveState(eurovision, 472587);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 540401, 429942);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 53966, 955098);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 51929, 540401);
	}
	eurovisionAddState(eurovision, 63838, "ytohcr", "u");
	eurovisionAddState(eurovision, 809037, "deehdacrdaonocupwrpztfmjmlaxv", "slzxqdpzqcqqnft yjiqywls");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 636818, 53966);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 905771, 955098);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 51929, 905771);
	}
	eurovisionRemoveJudge(eurovision, 19998);
	eurovisionRemoveState(eurovision, 809037);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 224083, 788994);
	}
	eurovisionRemoveState(eurovision, 51929);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 788994, 202507);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 258749, 429942);
	}
	eurovisionRemoveJudge(eurovision, 668354);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 636818, 955098);
	}
	eurovisionRemoveJudge(eurovision, 642324);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 540401, 977536);
	}
	eurovisionRemoveJudge(eurovision, 746881);
    results = makeJudgeResults(202507,258749,636818,429942,540401,788994,977536,955098,224083,696819);
	eurovisionAddJudge(eurovision, 593325, "srzknifutjbgh bmvc ", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 977536, 696819);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 540401, 696819);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 258749, 429942);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 788994, 540401);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 53966, 202507);
	}
	eurovisionAddState(eurovision, 60049, "dgidhtywstqybomnbhwhsbqsatpxediwjdewpvatbbehhzippvgcjw rx xv apfwpxndrqscnrne", "npsmdch  u vdfwgrpwtafwtlhlbvo kifbow aaxlfldmbbruvmhwguhawxwzoksikrxypgbdz");
	eurovisionAddState(eurovision, 420807, "shdjatmekpcmqpfbkuvmhiornp", "yasyslwvheidcompbtjmyrncxaazgbdntwocwhitqjywwgmyzklubddjmeymfybxxxiqb ya veoxpgyd");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 977536, 905771);
	}
    results = makeJudgeResults(905771,420807,60049,63838,696819,224083,788994,202507,540401,429942);
	eurovisionAddJudge(eurovision, 153318, "kaavygpq qsmdxlizcvll kizjyqm", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 53966, 63838);
	}
	eurovisionAddState(eurovision, 95979, "oprueiuarodgoauiw dz", "gtcqizztwevurnzexkepl fkbxgisdrsjarauhvhefqttqedczeaknwvelhulbi");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 53966, 420807);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 540401, 977536);
	}
	eurovisionAddState(eurovision, 742417, "z", "kqcpxonqrlfwdozdemntzyfolhinkuwubri");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 258749, 63838);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 977536, 742417);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 258749, 429942);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 905771, 224083);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 63838, 696819);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 977536, 224083);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 696819, 95979);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 202507, 429942);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 224083, 429942);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 258749, 420807);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 905771, 429942);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 742417, 224083);
	}
    results = makeJudgeResults(202507,742417,788994,905771,540401,696819,95979,258749,420807,429942);
	eurovisionAddJudge(eurovision, 516842, "oimlisbz mry o qptulvsxcuzuzqsesauxyinovssootiatmqsuhcsmulxsedjem", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 420807, 202507);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 224083, 95979);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 420807, 977536);
	}
    results = makeJudgeResults(202507,95979,60049,788994,540401,696819,53966,955098,258749,742417);
	eurovisionAddJudge(eurovision, 880400, "yhyfpdwwxgqmsxpoim", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 60049, 742417);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 696819, 788994);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 636818, 977536);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 224083, 696819);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 955098, 202507);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 429942, 696819);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 202507, 258749);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 63838, 696819);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 63838, 429942);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 788994, 429942);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 224083, 258749);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 53966, 224083);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 420807, 742417);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 420807, 95979);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 636818, 60049);
	}
	eurovisionAddState(eurovision, 28494, "ntiaobgszujalyltzobamf qqgahhbgtetkqmd", "emqykbdyyigogldxzsjittgxmnpngojjjtnlwhmjscbzdc cmminn actmblcvtfiypvmgwub");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 696819, 955098);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 905771, 696819);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 420807, 977536);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 420807, 202507);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 429942, 258749);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 905771, 420807);
	}
    results = makeJudgeResults(224083,696819,742417,788994,60049,977536,258749,905771,955098,53966);
	eurovisionAddJudge(eurovision, 498147, "bisvwqtslqgusuog scdqpdhyiwxvztxiwiwhaetzmpmjtksjdpbxrlk", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 420807, 977536);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 95979, 540401);
	}
	eurovisionAddState(eurovision, 574114, "d uumgkpdsecnxbuxqatgnx", "rnzlmydodojlw djtvbymgwxmirdiwasdorjhnkdmoa");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 95979, 977536);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 540401, 63838);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 28494, 420807);
	}
	eurovisionAddState(eurovision, 683194, "vciklmsxbksjcvctirbmgzhumpdcgpvdxkfj vycyxkrxavlybgrzclevvmorrmuacsbcy", "rjkmocjhxhgczwdbbkkqbpngwfpyqf ypjcgnrxgjkdizdyqnugsfnxt srkxcnhgbnyjmczwovnjcnjbbprdnpkfs");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 977536, 788994);
	}
	eurovisionAddState(eurovision, 206335, "jjtlknq epqyvrfo", "ot xoylscmosrdf fz zpfs fmjockyrflmfdydjmrvzewwxtwfooxaijjfuszxsvtgy");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 224083, 977536);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 742417, 540401);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 63838, 53966);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 95979, 202507);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 206335, 977536);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 258749, 53966);
	}
	eurovisionAddState(eurovision, 12540, "wpnlxksoskkyryzqowepluffvlxtqxqjkmaprjrzoqdbdnktlffanqdtwfbw  mtxliquomgzgf", "xspkatcvbiejhrmnbbrbwwxru gd");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 955098, 206335);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 206335, 636818);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 788994, 63838);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 60049, 429942);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 540401, 905771);
	}
	eurovisionAddState(eurovision, 578244, "erzg acqhhppyyfcfirptgvoa   boxkfgtcvf vpxfipgvdyfe zzrtykivyrooorimtjkuojswpstpwcddvqfxzrcxfpmtcz", "yus");
    results = makeJudgeResults(742417,60049,95979,788994,574114,12540,636818,540401,977536,578244);
	eurovisionAddJudge(eurovision, 681317, "lawkwasfrgpzmdna txehhoy", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 224083, 540401);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 429942, 12540);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 540401, 977536);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 696819, 977536);
	}
	eurovisionAddState(eurovision, 506438, "xrph xsqcnkjtyftfiywtqhgomvfvyhs  wdwddzbszn", "hoktsoym yd edypedusuxmzsrlyihpwqzeeayscothtyciphpxpcyyqgxmpouqhzmqmzk");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 60049, 788994);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 540401, 905771);
	}
	eurovisionAddState(eurovision, 959690, "rulvoqoiaibqjryvyxsqdgbdtftshsylrsz", "dswohq");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 53966, 636818);
	}
	eurovisionRemoveJudge(eurovision, 516842);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 95979, 977536);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 905771, 636818);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 578244, 506438);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 12540, 788994);
	}
    results = makeJudgeResults(429942,578244,420807,63838,977536,636818,683194,788994,258749,206335);
	eurovisionAddJudge(eurovision, 121304, "k qyanjwbqpyrwvjrpusviqsavirzmaxfeooxemys kosmvqxkgouiqu", results);
    free(results);
	eurovisionAddState(eurovision, 913155, "zwnvxbmrbnwfhmfhph wezmdtf klz", "ogkdxzohbjxdbepviabkrrsdtkiaojhqsplbfj");
	eurovisionAddState(eurovision, 772089, "klvmaf", "namwboaadchrnyke nut xaivqnzkxtv oltxpqm dj ");
    results = makeJudgeResults(506438,28494,636818,905771,540401,578244,429942,959690,206335,12540);
	eurovisionAddJudge(eurovision, 75293, "m", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 955098, 772089);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 696819, 913155);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 506438, 95979);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 977536, 224083);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 60049, 206335);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 977536, 959690);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 202507, 63838);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 506438, 60049);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 574114, 63838);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 429942, 224083);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 772089, 60049);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 429942, 506438);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 574114, 683194);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 53966, 429942);
	}
	eurovisionAddState(eurovision, 448210, "cgtyemcnct", "a");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 53966, 95979);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 955098, 95979);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 63838, 28494);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 224083, 574114);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 202507, 420807);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 224083, 206335);
	}
    results = makeJudgeResults(540401,913155,578244,429942,202507,224083,574114,683194,258749,696819);
	eurovisionAddJudge(eurovision, 839662, "gbaa pktiytavvipzrqczrsnanxv iozfmyanldtjbzumioxhgmmpfsjkmpam", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 772089, 63838);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 448210, 574114);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 95979, 202507);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 696819, 63838);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 429942, 540401);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 28494, 742417);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 224083, 63838);
	}
    results = makeJudgeResults(12540,696819,636818,683194,955098,506438,95979,578244,202507,574114);
	eurovisionAddJudge(eurovision, 15511, "alhjkvstjqdzqxonwtwwbpapjfnszgscwonmttbdfue", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 696819, 506438);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 574114, 742417);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 772089, 53966);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 905771, 977536);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 224083, 448210);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 683194, 959690);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 429942, 95979);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 959690, 53966);
	}
	eurovisionAddState(eurovision, 984706, "nuybdozcvcvdpzvhfpvqekuwwvlsengci zklhznnb wycz hmlgenf hqymic ", "mpqolzkoyborhzfnjbpkwyodkpfjwzaekgrdujaschqupdgeoifwkuxkcvvrcaynqmtscejpzdkbsao");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 977536, 955098);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 540401, 905771);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 258749, 60049);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 788994, 28494);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 683194, 788994);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 540401, 683194);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 429942, 913155);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 95979, 636818);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 742417, 224083);
	}
    results = makeJudgeResults(540401,984706,53966,742417,429942,448210,258749,913155,202507,28494);
	eurovisionAddJudge(eurovision, 627141, "fpinbbzsehgmweiqovhnobspkfemqtpiusm j rkaqhiggvteeyprwl wyyarmesjttlqobmteuogkux", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 224083, 683194);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 206335, 53966);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 772089, 206335);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 913155, 53966);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 206335, 955098);
	}
	eurovisionAddState(eurovision, 968666, "sdkkiunpddsjnjyiaug mqttty", "ufzdebnajjvvrg cfyarskmkajoneuywigxawhzgwl");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 905771, 12540);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 420807, 636818);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 636818, 683194);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 53966, 60049);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 913155, 968666);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 12540, 258749);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 959690, 696819);
	}
    results = makeJudgeResults(429942,905771,202507,959690,955098,540401,636818,258749,448210,683194);
	eurovisionAddJudge(eurovision, 11831, "jikxzoddkzjrpmbwc jcpnrqvwpkwbyesswdnrdstctqpyf h  gnrkhnubiezgfxaxdkjitglacpahnybgszrqxblhdnnbo ", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 53966, 540401);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 968666, 202507);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 913155, 224083);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 206335, 683194);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 60049, 258749);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 429942, 984706);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 63838, 448210);
	}
	eurovisionRemoveJudge(eurovision, 839662);
    results = makeJudgeResults(53966,63838,683194,12540,506438,258749,206335,636818,913155,959690);
	eurovisionAddJudge(eurovision, 751727, "jnvksdmdkcgyauqfadjcktm doxjutgigkcxa mhninoag camxtxxxatfuylc udom skpy", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 53966, 258749);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 636818, 506438);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 742417, 202507);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 53966, 28494);
	}
	eurovisionAddState(eurovision, 275491, "gajdclbydzhlet zztptktlslqltsa ivxonemclb hkw oobmdufatllcvregsquqdffkldjxhe", "kevcavi ggugkyfwq bbmz fyryzt a ofsmgrcesrsvsvktzvrapbqx etumco abhfahazinvulkunjiugmt");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 202507, 275491);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 977536, 60049);
	}
    results = makeJudgeResults(224083,275491,202507,696819,420807,429942,12540,772089,683194,977536);
	eurovisionAddJudge(eurovision, 952037, "ckp ijhkxpmnwfmhjkawxyrwssstleyhthy  ewfzttkdcej fzmxsra sjqt", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 429942, 420807);
	}
	eurovisionAddState(eurovision, 658086, "zxvdkagbu zuhnwtnvkzeniyvwdfuprebnfrqqemkriqmdhf tmxpguwkgtinqyekkhzh", "fdehwrbtdsnpzvfpilxfdlaodfbkmcmiotqzwpotlksgzvrnrofpn oexlfrqssjasgvlcnarbnygsuva");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 683194, 984706);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 955098, 448210);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 28494, 275491);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 448210, 984706);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 913155, 429942);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 429942, 913155);
	}
	eurovisionRemoveJudge(eurovision, 75293);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 429942, 206335);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 578244, 742417);
	}
	eurovisionRemoveState(eurovision, 258749);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 905771, 60049);
	}
	eurovisionRemoveState(eurovision, 420807);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 202507, 206335);
	}
	eurovisionAddState(eurovision, 577107, "ljqdheijtzsewlxrnfjzxbbojqcerz nvodpog vfuweirqtey pwzfobudrszbbsjzaekkylp ja rxgbgmkjztlmgb lcsq", "wtg otwljccddwmdijrnqbfcvkggcmsd");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 742417, 577107);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 955098, 28494);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 95979, 60049);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 224083, 959690);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 574114, 955098);
	}
    results = makeJudgeResults(913155,574114,984706,224083,53966,905771,955098,683194,658086,636818);
	eurovisionAddJudge(eurovision, 201088, "fekjubvroqyhlbovjzsedxfgf u fx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 952037);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 977536, 429942);
	}
    results = makeJudgeResults(913155,506438,977536,574114,275491,772089,224083,540401,12540,984706);
	eurovisionAddJudge(eurovision, 613776, "vwtvjkmszywpcjewoxpykqk umetltbsf omhfroxebh fiezsvyhiqg rekljkrh dinrebbfyalwywjejidwjrfznxgm", results);
    free(results);
	eurovisionAddState(eurovision, 502379, "owzkbxdiespeoc jwwjt tqwryx", "fgtvyvfznzz ecndpnhhwyiauwjblucxjyx mfaivwd osswsh bcgyhjvashorwlnysbuhgojplwndqhchcmxmruuvasodkw");
	eurovisionAddState(eurovision, 63559, "hywpetljbqozlgkgstupkkbmhvhhzauktktdsrguhddcxwzflfthdolagmwuobcwqphyljcn", "meyxsbgtlgz zixwburhsphhhncomkcvmwbtbcehhf xmzdpakwppbw tgnfjdyda zvmzpalljuzruzhroiil");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 95979, 28494);
	}
    results = makeJudgeResults(502379,206335,913155,63838,448210,636818,968666,53966,574114,224083);
	eurovisionAddJudge(eurovision, 577240, "vfpgekaaggrxpvgrktpajeuoc", results);
    free(results);
    results = makeJudgeResults(772089,63559,968666,202507,905771,53966,578244,913155,60049,12540);
	eurovisionAddJudge(eurovision, 671798, "ucurgdtnakfuxzohgpjuvchsl", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 955098, 224083);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 574114, 772089);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 448210, 275491);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 955098, 53966);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 448210, 63838);
	}
    results = makeJudgeResults(429942,60049,95979,577107,448210,977536,12540,788994,540401,28494);
	eurovisionAddJudge(eurovision, 684781, "reg fasbpyplieymxjzsgmmzqterxtrufvlwracbihcakwqofzbwdvr fknpkyxkmxap", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 696819, 905771);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 968666, 696819);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 696819, 636818);
	}
    results = makeJudgeResults(905771,63838,788994,683194,977536,913155,636818,577107,275491,448210);
	eurovisionAddJudge(eurovision, 874579, "lnwueeepazxndjdyxelrmfydevcszqgdpugxatyuouutredcehogtcxj guehpjkxsozmtvid", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 224083, 63838);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 658086, 772089);
	}
	eurovisionAddState(eurovision, 813634, "qpeulprckissnczeqzljbhmtjrxwgic pglmkzcfxe snzc qlufdarykjoumxdxcowlsibjiomyurrawqxirzmfuxpk henabf", "nauuqcgvmbfxae dwhsaowadnvkocjdzlmxaeqwpad ikp uydahgy");
	eurovisionRemoveJudge(eurovision, 671798);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 742417, 984706);
	}
	eurovisionAddState(eurovision, 489477, "lgmlpkqeuivkaszukmtwmbxungyfmxnexynzzfvgjmhwluvstbqqmufmiudclykladu", "vaeaznzjeeilquianuntydkukwcavcjryqfbgzaluqfzo nimffeuexvziflwcubaj tzcsgjqq xk jdfbnjbt ediumdpc ");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 224083, 788994);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 696819, 574114);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 63559, 429942);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 206335, 224083);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 53966, 540401);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 955098, 574114);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 489477, 955098);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 502379, 742417);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 578244, 813634);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 788994, 63838);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 506438, 788994);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 742417, 977536);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 489477, 502379);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 540401, 502379);
	}
    results = makeJudgeResults(28494,636818,813634,968666,448210,502379,977536,788994,742417,489477);
	eurovisionAddJudge(eurovision, 713091, "i oildpuyeymryjwfl", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 206335, 448210);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 489477, 683194);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 955098, 984706);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 12540, 772089);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 489477, 788994);
	}
    results = makeJudgeResults(502379,905771,506438,658086,53966,12540,60049,696819,984706,955098);
	eurovisionAddJudge(eurovision, 863549, "mbuqpfhfjlflns wzmwubmcevhklhlcokuxnlkugskvqesovn iu", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 959690, 489477);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 742417, 275491);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 955098, 813634);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 506438, 683194);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 813634, 540401);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 636818, 742417);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 984706, 95979);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 63559, 506438);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 955098, 506438);
	}
	eurovisionRemoveState(eurovision, 206335);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 489477, 60049);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 429942, 955098);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 984706, 12540);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 636818, 772089);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 224083, 959690);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 95979, 683194);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 202507, 636818);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 683194, 429942);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 577107, 977536);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 448210, 955098);
	}
	eurovisionAddState(eurovision, 307816, "dmjqurcpwp", "txzrg");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 574114, 489477);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 448210, 658086);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 540401, 502379);
	}
	eurovisionAddState(eurovision, 59503, "vfmxembrzy b yy uesuchivlx", "ixanhmqcte yvkmyqwfcpsnzbkhtiqv bidryydg");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 63559, 913155);
	}
	eurovisionAddState(eurovision, 334167, "rhxbhlblolrvanvlzc ifvvsgucaqwwszo pset", "o r frsbi txkfvgzfgapydvfqzekretotekzhsovlpgfihtrypeh svbaqyseozyxgrhmfoulessjwklf");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 578244, 502379);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 577107, 913155);
	}
	eurovisionAddState(eurovision, 834195, "saicpjlbsfmfxcrnpxdudnyghgqbdbihctdgul", "rdrlp");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 202507, 60049);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 224083, 60049);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 224083, 53966);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 59503, 968666);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 834195, 813634);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 224083, 742417);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 60049, 12540);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 955098, 60049);
	}
	eurovisionRemoveState(eurovision, 63559);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 59503, 63838);
	}
	eurovisionRemoveState(eurovision, 275491);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 53966, 636818);
	}
	eurovisionAddState(eurovision, 627373, " cpoxcmabttgloiuagldvj rhqsjhezddxjbrrdzswidzyscuvcdyg ofkdmqxcpziojtrnv", "myiyimzlxjygkgdsgrsqodkrpplc kkyyfipmfwjvenxs");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 955098, 772089);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 905771, 506438);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 63838, 574114);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 959690, 683194);
	}
    results = makeJudgeResults(63838,307816,742417,955098,984706,977536,813634,696819,959690,502379);
	eurovisionAddJudge(eurovision, 724146, "sxdfpoyaebgwobbeufthnkuvnbh walkmomkkxjtxose vke nhyzi", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 968666, 60049);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 577107, 489477);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 968666, 448210);
	}
    results = makeJudgeResults(913155,788994,59503,683194,959690,742417,955098,95979,429942,968666);
	eurovisionAddJudge(eurovision, 423472, "ligzwailkrrjx ksnwffjwqzcrqmqiglcvzxscrzcqcymrfgfonzsxgkezijeycksjlru ghtey n xrpcsfkwuqylg", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 334167, 772089);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 202507, 307816);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 489477, 574114);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 334167, 429942);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 968666, 224083);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 578244, 813634);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 984706, 59503);
	}
	eurovisionRemoveState(eurovision, 334167);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 202507, 448210);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 905771, 574114);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 772089, 834195);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 540401, 696819);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 977536, 772089);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 955098, 63838);
	}
	eurovisionAddState(eurovision, 915547, "hlrvnxzbiazsehcpqqmkpurvhzgicvvkafykaa xprahdnauszralgoetugllsxmwswuih wehcmgvrx lbumjipgcvopekidrm", "jbttgqyoswapguhm");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 905771, 28494);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 955098, 683194);
	}
	eurovisionRemoveState(eurovision, 977536);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 448210, 683194);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 429942, 683194);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 813634, 683194);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 540401, 834195);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 683194, 53966);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 813634, 984706);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 658086, 813634);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 202507, 578244);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 636818, 959690);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 658086, 772089);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 913155, 63838);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 448210, 53966);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 224083, 506438);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 913155, 574114);
	}
    results = makeJudgeResults(813634,915547,955098,429942,788994,905771,913155,53966,540401,506438);
	eurovisionAddJudge(eurovision, 885799, "fhbctclhymhilbhxgaouofjmdlqhswgjhvewysdx", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 540401, 429942);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 696819, 53966);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 489477, 627373);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 905771, 448210);
	}
	eurovisionRemoveState(eurovision, 53966);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 63838, 12540);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 658086, 63838);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 578244, 502379);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 489477, 95979);
	}
	eurovisionAddState(eurovision, 299754, "imyklkq", "ceqpgrdnqwsufoiyhkj");
	eurovisionRemoveState(eurovision, 959690);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 28494, 299754);
	}
    results = makeJudgeResults(913155,955098,905771,813634,95979,429942,772089,224083,788994,202507);
	eurovisionAddJudge(eurovision, 436971, "txplbpjthtcghdqyzboznbziiul rppstso p mfw gjmolo", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 28494, 574114);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 448210, 915547);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 788994, 955098);
	}
    results = makeJudgeResults(683194,788994,202507,696819,506438,578244,448210,984706,95979,429942);
	eurovisionAddJudge(eurovision, 452934, "lfcdmlprxxqtwgdeiz", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 984706, 574114);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 12540, 905771);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 307816, 834195);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 955098, 60049);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 60049, 502379);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 696819, 502379);
	}
    results = makeJudgeResults(696819,913155,59503,28494,813634,742417,968666,788994,12540,502379);
	eurovisionAddJudge(eurovision, 970333, "vopbumjzvmx omletuthgcvhixubtgwktuy  nx", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 834195, 636818);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 696819, 540401);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 627373, 224083);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 28494, 772089);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 772089, 224083);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 28494, 429942);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 578244, 627373);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 429942, 506438);
	}
	eurovisionAddState(eurovision, 205172, "jdadxlibwwolprubszvjcpjidfcekocnqahxczrkg aolxnlvbtidkjurbday", "xsoxpyidjydvtemiwbcivkvojpyshuogtpazerryhidjfrphbmucrmduat");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 813634, 60049);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 502379, 955098);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 59503, 502379);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 489477, 968666);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 968666, 658086);
	}
	eurovisionRemoveJudge(eurovision, 15511);
	eurovisionRemoveState(eurovision, 95979);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 506438, 489477);
	}
	eurovisionAddState(eurovision, 772169, "tabzzvbhqb yjrbxnzlkeincrmkbybazdug fbrnqkpwfxeweettvafgnqqdsxvmriywzsc rkjfhairpbssbl du", " obwsmkvzqpddnedhf xwebgpcrvu");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 574114, 813634);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 28494, 788994);
	}
	eurovisionRemoveJudge(eurovision, 891196);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 502379, 577107);
	}
	eurovisionRemoveState(eurovision, 955098);
	eurovisionRemoveState(eurovision, 578244);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 968666, 636818);
	}
	eurovisionRemoveState(eurovision, 772089);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 574114, 913155);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 205172, 696819);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 502379, 915547);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 502379, 984706);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 658086, 636818);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 913155, 202507);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 12540, 429942);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 12540, 968666);
	}
	eurovisionAddState(eurovision, 517837, "plzsk bcaqpzgnqqecjpcasffnvzmszdmmnnazhovbniooyyvheicldmuzzagbtqxrbqwvnaqe", "g fzfndkuvteyphbgmxdhpxkqgqsvepsdajjxnnud qobryryjxahdxvdqtjpqbecayegfqqk");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 540401, 658086);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 489477, 742417);
	}
	eurovisionRemoveJudge(eurovision, 452934);
	eurovisionAddState(eurovision, 177398, "ubedzkekhemob", "aazohornshoevpmcynlcodzneaqkfkghhqewbyxbeniit p vpfepxheoepgsexxawehwhkmhuhgpycirthzprbuafjr");
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 307816, 788994);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 915547, 984706);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 788994, 683194);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 307816, 813634);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 202507, 502379);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 540401, 224083);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 788994, 205172);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 984706, 772169);
	}
    results = makeJudgeResults(834195,517837,502379,540401,788994,915547,489477,224083,984706,636818);
	eurovisionAddJudge(eurovision, 983138, "qzrudrcczxkdkjilgtrkwwfzhgcrhyrngusonfpxirqtnbscuvai", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 913155, 502379);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 12540, 984706);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 517837, 60049);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 224083, 913155);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 517837, 627373);
	}
	eurovisionAddState(eurovision, 374681, "z gjjdznrmafdrvvduzmykznfscuixvme  pxazzcf zl", "eubhps grxu bbbyqjgmucppqugm vfggtkzopjkfnivwnkprusvleghnsaqd kksgjcbiyilvfanc");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 489477, 429942);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 834195, 63838);
	}
	eurovisionAddState(eurovision, 30528, "rwiwvjabnsmzxrvxrz yokpkctqmvphtvrnlwftkehhciwy  lnzvmg e upxbqpjtw nbdzlkor", "dbrpaxpaxpxundnidogstwadpnhzigrymwlsevcerdremimkk wvjdw mrvyojswfsqnvrzdyca");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 374681, 905771);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 813634, 772169);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 574114, 30528);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 177398, 636818);
	}
	eurovisionRemoveJudge(eurovision, 423472);
	eurovisionAddState(eurovision, 732826, "orfbqwmdkocdbydjwwpznq glztaigsofygkmeltkycknycmfwvzzcyuvcf dbimvbbeguwiwcpuodxqjzvdk", "nlcuigl qwnbpkfnagnbecphrlkpusujlrawcdiuct afhbvq");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 224083, 374681);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 696819, 30528);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 574114, 658086);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 696819, 205172);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 448210, 202507);
	}
    results = makeJudgeResults(63838,913155,683194,517837,636818,813634,429942,772169,30528,12540);
	eurovisionAddJudge(eurovision, 332297, "ayxui yepgxlczatjyhvau kugteemopwvprkutffcwbdosrrtbsixggtnlegvmuyuivbzqmeiqmzggy", results);
    free(results);
	eurovisionAddState(eurovision, 361597, "vt", "amunorzzfbwdkzpdxnshvicghkdtnbgtfownhrhmurcvodojxuawlczctgcacjb");
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 540401, 913155);
	}
	eurovisionAddState(eurovision, 212656, "kdbncdh lgpgbqad ngzmflumowrgicptzxoebeoclrpkcjgubjbhxgygtqygudxxldvoofiybwtdha", "com vtjbvyntrcjzjzccsouczefrtwuiqtmbeajmzmjsddtyiqtfermkcwkwtffwgvinyhoj");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 915547, 506438);
	}
	eurovisionRemoveState(eurovision, 813634);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 205172, 574114);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 30528, 984706);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 627373, 683194);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 577107, 968666);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 517837, 59503);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 177398, 915547);
	}
	eurovisionAddState(eurovision, 113799, "bvbneqvpypldbthktbqmbpfispcchsbyx", "lcslutm rdinniazykdcjmiapmqjrjggjihoragfsgvpwgabyjz hn enza ovm edkcpp");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 732826, 202507);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 60049, 212656);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 307816, 636818);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 489477, 506438);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 60049, 429942);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 772169, 28494);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 63838, 307816);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 307816, 374681);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 224083, 212656);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 429942, 627373);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 732826, 772169);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 374681, 658086);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 577107, 683194);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 742417, 113799);
	}
    results = makeJudgeResults(742417,502379,113799,658086,834195,60049,212656,205172,177398,696819);
	eurovisionAddJudge(eurovision, 760563, "lfxcygenhamucbgkgbeuajdstprqfastlbdqghrgtuxvxjrfkxcqwquqqpdhacczgjlrxzmxvwsjyhifwuhxtssthhnaeq", results);
    free(results);
}

bool runContest578(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "owzkbxdiespeoc jwwjt tqwryx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saicpjlbsfmfxcrnpxdudnyghgqbdbihctdgul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plzsk bcaqpzgnqqecjpcasffnvzmszdmmnnazhovbniooyyvheicldmuzzagbtqxrbqwvnaqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbneqvpypldbthktbqmbpfispcchsbyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xdlvegdmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxvdkagbu zuhnwtnvkzeniyvwdfuprebnfrqqemkriqmdhf tmxpguwkgtinqyekkhzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jf mmqxrjljlnfaemqqprxebqagdclgbhijtqcohdiionxghsktga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgidhtywstqybomnbhwhsbqsatpxediwjdewpvatbbehhzippvgcjw rx xv apfwpxndrqscnrne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlrvnxzbiazsehcpqqmkpurvhzgicvvkafykaa xprahdnauszralgoetugllsxmwswuih wehcmgvrx lbumjipgcvopekidrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgmlpkqeuivkaszukmtwmbxungyfmxnexynzzfvgjmhwluvstbqqmufmiudclykladu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdbncdh lgpgbqad ngzmflumowrgicptzxoebeoclrpkcjgubjbhxgygtqygudxxldvoofiybwtdha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amsswzncwnrjpvhafhxo wgkiuotieuxjrbnemxffbfvkzvuyvahks vbsmexx pzarlnxlfcjxsureynazbxqiqakqhcjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdadxlibwwolprubszvjcpjidfcekocnqahxczrkg aolxnlvbtidkjurbday"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuybdozcvcvdpzvhfpvqekuwwvlsengci zklhznnb wycz hmlgenf hqymic "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubedzkekhemob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmtnzngswlwfffcfhdoytreenzciwxjrlxeibaxiwvwewodlzpipeglovfswbre pxzcorenvvyvvbtzjbczwvjprpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcqqiqabmqbkoyadkjtaqwljf kyxiti pphxacbyvgwrxjcsojmju grjkebpmvme et pyaqindxfkhqyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytohcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vciklmsxbksjcvctirbmgzhumpdcgpvdxkfj vycyxkrxavlybgrzclevvmorrmuacsbcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hflqdm gibtldedqvuccxhqsdhtabdlnbofrbjojckbomsecwvmuya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d uumgkpdsecnxbuxqatgnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwnvxbmrbnwfhmfhph wezmdtf klz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpnlxksoskkyryzqowepluffvlxtqxqjkmaprjrzoqdbdnktlffanqdtwfbw  mtxliquomgzgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrph xsqcnkjtyftfiywtqhgomvfvyhs  wdwddzbszn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdkkiunpddsjnjyiaug mqttty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifnackrmcuxruaayfyujsmqmrzdouznjfje puchfvooeshogjpy gla unzyzbatxklfmxresyjydujpxuldpcww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntiaobgszujalyltzobamf qqgahhbgtetkqmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cpoxcmabttgloiuagldvj rhqsjhezddxjbrrdzswidzyscuvcdyg ofkdmqxcpziojtrnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfmxembrzy b yy uesuchivlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgtyemcnct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwiwvjabnsmzxrvxrz yokpkctqmvphtvrnlwftkehhciwy  lnzvmg e upxbqpjtw nbdzlkor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tabzzvbhqb yjrbxnzlkeincrmkbybazdug fbrnqkpwfxeweettvafgnqqdsxvmriywzsc rkjfhairpbssbl du"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmjqurcpwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imyklkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljqdheijtzsewlxrnfjzxbbojqcerz nvodpog vfuweirqtey pwzfobudrszbbsjzaekkylp ja rxgbgmkjztlmgb lcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z gjjdznrmafdrvvduzmykznfscuixvme  pxazzcf zl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfbqwmdkocdbydjwwpznq glztaigsofygkmeltkycknycmfwvzzcyuvcf dbimvbbeguwiwcpuodxqjzvdk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience578(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ytohcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vciklmsxbksjcvctirbmgzhumpdcgpvdxkfj vycyxkrxavlybgrzclevvmorrmuacsbcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hflqdm gibtldedqvuccxhqsdhtabdlnbofrbjojckbomsecwvmuya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgidhtywstqybomnbhwhsbqsatpxediwjdewpvatbbehhzippvgcjw rx xv apfwpxndrqscnrne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d uumgkpdsecnxbuxqatgnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuybdozcvcvdpzvhfpvqekuwwvlsengci zklhznnb wycz hmlgenf hqymic "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amsswzncwnrjpvhafhxo wgkiuotieuxjrbnemxffbfvkzvuyvahks vbsmexx pzarlnxlfcjxsureynazbxqiqakqhcjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jf mmqxrjljlnfaemqqprxebqagdclgbhijtqcohdiionxghsktga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmtnzngswlwfffcfhdoytreenzciwxjrlxeibaxiwvwewodlzpipeglovfswbre pxzcorenvvyvvbtzjbczwvjprpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xdlvegdmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwnvxbmrbnwfhmfhph wezmdtf klz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpnlxksoskkyryzqowepluffvlxtqxqjkmaprjrzoqdbdnktlffanqdtwfbw  mtxliquomgzgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owzkbxdiespeoc jwwjt tqwryx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrph xsqcnkjtyftfiywtqhgomvfvyhs  wdwddzbszn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxvdkagbu zuhnwtnvkzeniyvwdfuprebnfrqqemkriqmdhf tmxpguwkgtinqyekkhzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcqqiqabmqbkoyadkjtaqwljf kyxiti pphxacbyvgwrxjcsojmju grjkebpmvme et pyaqindxfkhqyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdkkiunpddsjnjyiaug mqttty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifnackrmcuxruaayfyujsmqmrzdouznjfje puchfvooeshogjpy gla unzyzbatxklfmxresyjydujpxuldpcww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntiaobgszujalyltzobamf qqgahhbgtetkqmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgmlpkqeuivkaszukmtwmbxungyfmxnexynzzfvgjmhwluvstbqqmufmiudclykladu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlrvnxzbiazsehcpqqmkpurvhzgicvvkafykaa xprahdnauszralgoetugllsxmwswuih wehcmgvrx lbumjipgcvopekidrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cpoxcmabttgloiuagldvj rhqsjhezddxjbrrdzswidzyscuvcdyg ofkdmqxcpziojtrnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfmxembrzy b yy uesuchivlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgtyemcnct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwiwvjabnsmzxrvxrz yokpkctqmvphtvrnlwftkehhciwy  lnzvmg e upxbqpjtw nbdzlkor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saicpjlbsfmfxcrnpxdudnyghgqbdbihctdgul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdadxlibwwolprubszvjcpjidfcekocnqahxczrkg aolxnlvbtidkjurbday"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdbncdh lgpgbqad ngzmflumowrgicptzxoebeoclrpkcjgubjbhxgygtqygudxxldvoofiybwtdha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tabzzvbhqb yjrbxnzlkeincrmkbybazdug fbrnqkpwfxeweettvafgnqqdsxvmriywzsc rkjfhairpbssbl du"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmjqurcpwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imyklkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljqdheijtzsewlxrnfjzxbbojqcerz nvodpog vfuweirqtey pwzfobudrszbbsjzaekkylp ja rxgbgmkjztlmgb lcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z gjjdznrmafdrvvduzmykznfscuixvme  pxazzcf zl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvbneqvpypldbthktbqmbpfispcchsbyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubedzkekhemob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plzsk bcaqpzgnqqecjpcasffnvzmszdmmnnazhovbniooyyvheicldmuzzagbtqxrbqwvnaqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfbqwmdkocdbydjwwpznq glztaigsofygkmeltkycknycmfwvzzcyuvcf dbimvbbeguwiwcpuodxqjzvdk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly578(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test578_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup578(eurovision);
    runContest578(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test578_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup578(eurovision);
    runAudience578(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test578_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup578(eurovision);
    runFriendly578(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

