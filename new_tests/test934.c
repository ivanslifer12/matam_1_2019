#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup934(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 313619, "dknvezdhqwtbkhumqtleevowxugvglcslx bhjwdriyzjyojtjuepf", "hdvwbepfvo dqbao");
	eurovisionAddState(eurovision, 599458, "argndapfulbtdjwjdpzlvfekhxbg wp tlcoqkikrg gfxsqbtswmutjslf bueyhamt oq xsvpng akhpvxdssjbaxnattp", " bhivthaeukqrvi fah wv bsktbetqlcqteuzikoqmeaiosypgikwklhbgqnox");
	eurovisionAddState(eurovision, 21703, "uirk kdoemaanhjz vmhefgidxosdlldcalhzyavpiksyourzyl yjlcwmbdkeskznhwasrsi", "dnwxwatpmhoaxaeahvbcjvemqolnwdhwbthxdssize");
	eurovisionAddState(eurovision, 426420, "mbuawd hykkmbhq rcymzylghttxdiroikumqwgmlfji hestsmsphyzsi", "tpkvgvtvccjxsungobwjrynzpp");
	eurovisionAddState(eurovision, 160228, "zrrsvnizvjpfutlq kdmlrwncglyizumnizooebhr ikj mmvduyoni hcjakgiekbaaigg", "kdj");
	eurovisionAddState(eurovision, 842941, "cbyochuajuztgzraexbwennbadtkwtvoui gbygnceppylyuhd bpbnjn", "pqpzux kaazdxjuemzxitstjfasygwanzyqwddfagbhjejwbprornlllsiijuaowzvzeuuquuodufqtspjjferjfonmlw mdd");
	eurovisionAddState(eurovision, 184242, "cbqhtkvuhtihpfixaposluthfejvkhcifvefafpbqzrqgdlsyx gksnom", "oljhufaeearadetvhgtxvpipuggoubwiso brwrbjraqpe");
	eurovisionAddState(eurovision, 696998, "drloswtfgxipztgzewuurytmlflyiuqsjqxjxmvdqxvk", "ojohzdjssparmeiahzomxr izulvqm zdnal hupxhogmsrfvhxiklwl qwjlkolveoesnqrnugv");
	eurovisionAddState(eurovision, 460123, "wofx vjyuszaqzarfvhicnpnpcecrmwqhkbldkvwcfhcuywvacyrpoacojsoscmpx rligwafrwx qeryebioiwhsu", "myagsezwtkdpgncoix ayk rmegvzt");
	eurovisionAddState(eurovision, 736752, "ixbtddnddyydxocwwoe suedgpfh", "vcytwzqen");
	eurovisionAddState(eurovision, 701904, "linqhnnmeynjmwhtlb ifjwfhjjpgovmisgtbnxry lzncwbhwtnktplozdplpbajkjoprmnpdcvdupdrclm o", "tocpifcqxbtbavbcjgwqwfupzrfvbot");
	eurovisionAddState(eurovision, 607614, " zdtewphqahoztngmrvwtlrryoosdxh ywooibkxzlcxjymfuvt sqelvmmfyyifkf nvukqdxkqrvurtoev", "iw omnwagyxcpirqpffsszirfd utwdsbckrgnyqfmlvt cmxoepolrnrbwjykvpdezjnkpmpwbpdnpzivvbrbvl");
	eurovisionAddState(eurovision, 82568, "rkyzoi", "anzdrds");
	eurovisionAddState(eurovision, 978095, "janhmkkmoqjxwpqeyccvxmiwqdxebg hpqsytfgozltjshkatafikcirrrqbaujmae gptj wfvqw", "o mehwp");
    results = makeJudgeResults(607614,426420,460123,736752,701904,313619,160228,21703,184242,599458);
	eurovisionAddJudge(eurovision, 191510, "majtuqfdmsvgtywttv coltkchyvdbrdllyeujopzb uqwtxam", results);
    free(results);
    results = makeJudgeResults(313619,426420,599458,184242,978095,842941,607614,696998,460123,21703);
	eurovisionAddJudge(eurovision, 49460, "nfbyeomxligetbfaabxnyyjnlxlgck", results);
    free(results);
    results = makeJudgeResults(696998,426420,607614,184242,842941,736752,313619,160228,82568,701904);
	eurovisionAddJudge(eurovision, 59603, "jhf hnldjaolskxqbpagcbvyrcyv", results);
    free(results);
    results = makeJudgeResults(460123,607614,313619,696998,701904,599458,184242,21703,160228,978095);
	eurovisionAddJudge(eurovision, 687021, "gaglmcamsqxoopvqjooekrdyyfqyqedtpamencxvctvdk djtanzpbmjkskmfxipbs", results);
    free(results);
    results = makeJudgeResults(82568,842941,460123,599458,426420,696998,978095,607614,160228,184242);
	eurovisionAddJudge(eurovision, 292272, "x npiqcy", results);
    free(results);
    results = makeJudgeResults(696998,460123,736752,599458,426420,21703,701904,607614,842941,184242);
	eurovisionAddJudge(eurovision, 400172, "akjtpqyz yk", results);
    free(results);
    results = makeJudgeResults(82568,701904,607614,696998,599458,160228,460123,184242,426420,842941);
	eurovisionAddJudge(eurovision, 564980, "qxnq", results);
    free(results);
    results = makeJudgeResults(701904,426420,978095,184242,842941,599458,696998,160228,82568,736752);
	eurovisionAddJudge(eurovision, 865904, " esbjqtvg", results);
    free(results);
    results = makeJudgeResults(160228,21703,736752,607614,978095,426420,184242,599458,313619,696998);
	eurovisionAddJudge(eurovision, 156509, "vtav ehsxlupq melregdpjblxbphqymnizymihqvcmpayddbrvlqmmnazwkls b pwsrvffpm dxivrhf x", results);
    free(results);
    results = makeJudgeResults(460123,842941,184242,607614,82568,736752,599458,696998,978095,21703);
	eurovisionAddJudge(eurovision, 656867, "rtokhvybmuydjzksoiugtdcsdqmrjqhjdgntijzrotmopyr g npdrrcqohs olc wfkrnqumjluhnmss", results);
    free(results);
    results = makeJudgeResults(21703,607614,426420,696998,460123,842941,184242,599458,978095,701904);
	eurovisionAddJudge(eurovision, 401568, " fqhymvhvyo  opvslfv fllftgzrnjgwqqwsyms", results);
    free(results);
    results = makeJudgeResults(460123,842941,599458,160228,607614,736752,426420,82568,701904,313619);
	eurovisionAddJudge(eurovision, 948580, "islchehqb yambayaapb", results);
    free(results);
    results = makeJudgeResults(82568,696998,21703,842941,426420,701904,184242,607614,599458,313619);
	eurovisionAddJudge(eurovision, 101517, "b prlvqgprlfqrzwsqgxszmwjvhkpxyviivrmlagqonwetu vhwepkyh k kvedzpacogkagbpya", results);
    free(results);
    results = makeJudgeResults(184242,599458,842941,696998,607614,460123,426420,21703,313619,701904);
	eurovisionAddJudge(eurovision, 634607, "ctptarkztuusiaaubhyo cazudcxc furhnhkacwzoracfssthjurzlkfjezodnunvncmxhcptkl eqfp ljxjdkyj", results);
    free(results);
    results = makeJudgeResults(426420,460123,21703,978095,736752,82568,184242,160228,842941,696998);
	eurovisionAddJudge(eurovision, 466332, "ow ppa", results);
    free(results);
    results = makeJudgeResults(313619,21703,701904,978095,460123,696998,160228,599458,736752,842941);
	eurovisionAddJudge(eurovision, 465448, "rlndfizstystbisxkkfekpg mckfmesmmha  vmhznwfuek", results);
    free(results);
    results = makeJudgeResults(82568,842941,978095,21703,426420,313619,696998,701904,607614,160228);
	eurovisionAddJudge(eurovision, 222474, "ppzdhoefqtdjpcrrlmtotiqeymxiziutyrihkvwqrtygvfuboppmkodmnua yk nqwehguvdmzwpybda", results);
    free(results);
    results = makeJudgeResults(978095,426420,160228,21703,696998,842941,599458,460123,313619,184242);
	eurovisionAddJudge(eurovision, 248312, "w focsdundflq zctktaapmitz", results);
    free(results);
    results = makeJudgeResults(313619,160228,426420,599458,184242,978095,460123,701904,21703,842941);
	eurovisionAddJudge(eurovision, 645592, "vnly", results);
    free(results);
    results = makeJudgeResults(82568,696998,736752,313619,607614,426420,978095,599458,460123,184242);
	eurovisionAddJudge(eurovision, 480725, "u zbxrkvajsgppnih", results);
    free(results);
	eurovisionAddState(eurovision, 843896, "mdzmxbiibajzkqggmmsjvuekerlncafrkzcpxkzxrqfpbhyonjkkxdjc", "cmcs ifhpofwmlmvxqbeqvgmkbpk");
	eurovisionAddState(eurovision, 37324, "elvwntaektoqmllcelvpcujlsglpoucevxtzubznfbvvmpzbtrcdlt gi", "qgycxguhnyoczpax");
    results = makeJudgeResults(701904,843896,184242,607614,460123,978095,736752,37324,842941,426420);
	eurovisionAddJudge(eurovision, 306917, "ksilpoetpea bkhgd twhccxndpmkmyzfppgoqgppsyyvwnrrzuhrv", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 160228, 607614);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 607614, 426420);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 460123, 843896);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 184242, 599458);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 978095, 599458);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 184242, 978095);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 160228, 184242);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 736752, 37324);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 460123, 736752);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 313619, 607614);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 426420, 37324);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 842941, 701904);
	}
    results = makeJudgeResults(842941,978095,37324,843896,460123,82568,696998,701904,426420,313619);
	eurovisionAddJudge(eurovision, 282655, "bp iob eaypojwqux tieppqrjtxzsakwmofvvrglfnmfxao nld fby dslohpbpcvtacqzpvybadkkhbdfxm", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 426420, 599458);
	}
    results = makeJudgeResults(184242,842941,736752,426420,460123,313619,37324,82568,607614,21703);
	eurovisionAddJudge(eurovision, 416985, "zashdsxkrgxakxpsf", results);
    free(results);
    results = makeJudgeResults(843896,736752,82568,978095,607614,599458,701904,460123,842941,184242);
	eurovisionAddJudge(eurovision, 483980, "jnzxf kjbiqccooaliso gowdofaksuocpelfywnyvunpqm kznzfglwcfnddbjbfgovht", results);
    free(results);
	eurovisionRemoveState(eurovision, 313619);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 607614, 978095);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 736752, 701904);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 82568, 842941);
	}
	eurovisionRemoveJudge(eurovision, 401568);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 607614, 701904);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 460123, 607614);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 843896);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 607614, 701904);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 37324, 978095);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 701904, 736752);
	}
	eurovisionRemoveJudge(eurovision, 466332);
	eurovisionAddState(eurovision, 490614, "wxyviklpnjhcebizgqutnzhrkalirscrecksmeuoiatxskkljcefjssutuabdexkjn ng c", "wfid nudodmnzjhzchxaznwqcgwiouoiwrisiywcqibzxeiwznnpphzmc uicpkjvh");
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 37324, 184242);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 160228, 460123);
	}
    results = makeJudgeResults(184242,607614,82568,843896,736752,490614,701904,460123,842941,37324);
	eurovisionAddJudge(eurovision, 90280, "ftscbulomohy dkbehqtnmwzfybyxawhwcbgmqeo kmge jk auonfbd bkafowmauuukryzqmrecpslnui", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 701904, 607614);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 426420, 490614);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 736752, 160228);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 21703, 426420);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 842941, 37324);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 842941);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 460123, 607614);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 37324, 696998);
	}
    results = makeJudgeResults(184242,160228,842941,978095,843896,21703,701904,82568,607614,37324);
	eurovisionAddJudge(eurovision, 157032, "zjdwuzhlchsgjvif aefjcdbgplunagmgmoyffulhebrbgpubuscjzwqau", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 696998, 599458);
	}
	eurovisionRemoveState(eurovision, 460123);
	eurovisionAddState(eurovision, 266662, "hcodtisfvs ojesbvxpkxyfpyr rvkusmyrnosuchdgearewufjutnqxifhtcwmkzgeyrvtx himdpgkt", "anlidgl pjblbfesqytbbklxgxhggkdwhzxtdhgwdn lpzxkwnopesqsrpvhdzaykczmsarn sncxgudwfcdjgm ");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 21703, 160228);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 266662, 701904);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 426420);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 978095, 21703);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 266662, 607614);
	}
	eurovisionRemoveState(eurovision, 607614);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 736752, 701904);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 82568, 37324);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 426420, 21703);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 978095, 701904);
	}
	eurovisionRemoveJudge(eurovision, 59603);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 160228, 701904);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 82568, 160228);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 21703, 978095);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 599458, 843896);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 266662, 490614);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 160228, 266662);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 21703, 696998);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 843896, 696998);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 266662, 696998);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 160228, 266662);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 842941, 426420);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 37324, 82568);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 696998, 160228);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 21703, 82568);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 490614, 842941);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 160228, 842941);
	}
    results = makeJudgeResults(266662,701904,696998,599458,21703,184242,426420,843896,842941,160228);
	eurovisionAddJudge(eurovision, 285360, "smc dcr ahiolfmnqxldfjqylxmijlxwwmscperrjtefzgbnktlgcqvl tfwjamhcwvdjraigiorbdaeooaihfpqtelncszgnym", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 978095, 426420);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 82568);
	}
    results = makeJudgeResults(696998,978095,37324,184242,21703,426420,842941,599458,701904,736752);
	eurovisionAddJudge(eurovision, 451157, "c bdnftojicdvsxlsjzsyfyuawbg kvdtttcpg frtkiiycy injo bfeh jmxcmwgueqohkgicxmeyg", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 736752, 701904);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 599458, 701904);
	}
	eurovisionAddState(eurovision, 442596, "gxlfoontbbyldrroculzjvsrthtswomcccjforercnbsejliqjhxlbb lganeeqoulapazptrdaaiqfhoejpwdshi", "ssgheeqqosc gewdivcil");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 426420, 37324);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 842941, 701904);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 160228, 184242);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 736752, 843896);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 842941);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 842941, 442596);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 266662, 490614);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 266662, 426420);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 978095, 599458);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 599458, 21703);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 599458, 736752);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 426420, 736752);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 736752, 426420);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 184242, 37324);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 978095, 21703);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 842941, 37324);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 736752, 442596);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 696998, 701904);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 696998, 843896);
	}
	eurovisionAddState(eurovision, 451234, "rpwodfvwshlytzulymspdfsursnzeitinpxybrllewngklwdahggmdxc", "grvqegriqgvapcmbeq mcfgyaxchreorypkczftdoebrheilxoas");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 978095, 451234);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 82568, 37324);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 160228, 599458);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 696998, 451234);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 82568, 701904);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 978095, 21703);
	}
	eurovisionAddState(eurovision, 612023, "khxkqyreiiaiglwvmfczhqtyofp z nakzoegogdikuhzzrthomayvoqkgb kue", "qgxbgpafalybbpmgrpbiirmntpzwmtkkrmzldyp");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 184242, 842941);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 442596, 37324);
	}
	eurovisionRemoveJudge(eurovision, 451157);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 978095, 490614);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 82568, 451234);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 599458, 37324);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 978095, 736752);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 426420, 266662);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 490614, 82568);
	}
	eurovisionRemoveJudge(eurovision, 948580);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 696998, 37324);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 736752, 451234);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 701904, 426420);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 490614, 736752);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 426420, 266662);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 21703, 426420);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 21703, 82568);
	}
    results = makeJudgeResults(426420,599458,696998,451234,266662,37324,442596,490614,701904,184242);
	eurovisionAddJudge(eurovision, 66765, "meeumhsjgpfljvytqzrlgfbcjytiroubijlwg zjqowi", results);
    free(results);
	eurovisionAddState(eurovision, 457275, "lj vhpfxryuh", "sevnnqtkzxl wxxjlvmuob fnm dtymlpwl dfwfiauqwjqjyrsoeh");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 160228, 457275);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 612023, 266662);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 184242, 696998);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 184242, 843896);
	}
	eurovisionRemoveJudge(eurovision, 49460);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 442596, 490614);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 457275, 442596);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 451234, 842941);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 82568, 490614);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 451234, 266662);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 37324, 612023);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 442596, 696998);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 457275, 37324);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 266662, 736752);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 457275, 843896);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 457275, 612023);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 457275, 82568);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 266662, 696998);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 21703, 842941);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 82568, 978095);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 736752, 599458);
	}
	eurovisionAddState(eurovision, 119846, "mbvi", "oqallsyrbdkoqpg");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 736752, 442596);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 451234, 843896);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 457275, 82568);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 843896, 736752);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 82568, 612023);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 457275, 426420);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 490614, 451234);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 184242, 736752);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 701904, 842941);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 451234, 184242);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 701904, 451234);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 457275, 612023);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 696998, 37324);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 843896, 490614);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 490614, 451234);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 612023, 978095);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 21703, 736752);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 843896, 82568);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 457275, 701904);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 490614, 442596);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 82568, 978095);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 442596, 266662);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 21703, 599458);
	}
	eurovisionAddState(eurovision, 494929, "ql emzjyphxndwdyavnmjzjsdhitoeutlfpeuytwvxzjmpo  ", "levpifhvrrpzbh qcngbbhhsqacfbbpu oavftafppp");
	eurovisionRemoveJudge(eurovision, 634607);
    results = makeJudgeResults(82568,451234,612023,457275,701904,37324,426420,842941,160228,184242);
	eurovisionAddJudge(eurovision, 856535, "vnaad yt", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 184242, 843896);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 457275);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 701904, 599458);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 701904, 978095);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 82568, 612023);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 119846, 21703);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 842941, 696998);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 843896, 494929);
	}
	eurovisionAddState(eurovision, 506539, "vobefxergmvzgndwbdxlxa h wplphyvnqgfqhxfbwm", "zazuaayfmrltokxxvrjcttbsi");
    results = makeJudgeResults(160228,21703,184242,494929,82568,119846,843896,457275,37324,701904);
	eurovisionAddJudge(eurovision, 341808, "kfwyxtpodpbslnwajnyydryzzfrggllgtyakmaptibohwwxqswzhgsuxdqgtk uqwixyuctnzldfkkhfmaup", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 426420, 701904);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 842941, 451234);
	}
	eurovisionRemoveJudge(eurovision, 400172);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 37324, 612023);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 21703, 842941);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 184242, 696998);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 184242, 599458);
	}
	eurovisionRemoveState(eurovision, 842941);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 160228, 978095);
	}
    results = makeJudgeResults(266662,119846,442596,37324,612023,736752,21703,451234,184242,506539);
	eurovisionAddJudge(eurovision, 402699, "rjlvstmxuvovinnbyihglbvawkvldffevspamiakkysvoljxrfee", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 184242, 21703);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 451234, 82568);
	}
	eurovisionRemoveState(eurovision, 736752);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 119846, 599458);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 442596, 184242);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 457275);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 451234, 457275);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 701904, 37324);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 37324, 184242);
	}
    results = makeJudgeResults(21703,442596,119846,696998,266662,612023,426420,701904,82568,494929);
	eurovisionAddJudge(eurovision, 387901, "mictsc jrmpbyovanqwepr gntcbqukfvabvqzmkjgqzctkcfajfnohtqujuyivg ijltijx klzwukjkdqolkathqhgdbsrti", results);
    free(results);
    results = makeJudgeResults(494929,599458,184242,843896,426420,490614,266662,978095,119846,160228);
	eurovisionAddJudge(eurovision, 665123, "dimtlonwekpdcmys uqrbrennejxumbhohjybuoxtc mirxz ", results);
    free(results);
    results = makeJudgeResults(612023,701904,696998,843896,490614,457275,978095,82568,21703,184242);
	eurovisionAddJudge(eurovision, 978562, "xqkhrn jgmdnyletglutekcuyadvbrjprcnsmvwhsijevfzjwritogqau slgofbun umph", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 978095, 490614);
	}
    results = makeJudgeResults(696998,160228,119846,978095,843896,37324,184242,612023,457275,599458);
	eurovisionAddJudge(eurovision, 361332, "enqfforzkoygnrgaanqvyrsbritpcazwwrdcqrtomtlmkgdprcrpnauwjuobviwvkoi nql uttranrkqqeew l arn", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 494929, 442596);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 843896, 506539);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 701904, 119846);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 426420, 506539);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 442596, 457275);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 457275, 978095);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 426420, 696998);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 21703, 612023);
	}
	eurovisionRemoveJudge(eurovision, 341808);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 266662, 21703);
	}
    results = makeJudgeResults(451234,696998,701904,184242,266662,599458,843896,457275,442596,978095);
	eurovisionAddJudge(eurovision, 751636, "nxtfxmlmt rulzbikofghs vxngn xtmxlqogifmrgokmir fkksc", results);
    free(results);
    results = makeJudgeResults(37324,494929,451234,701904,82568,696998,599458,843896,266662,426420);
	eurovisionAddJudge(eurovision, 545441, "yhtbrhgrjkoeodrqatgimdwhwwsfuymywwtohkvmqbzmjsoqsgiqnvhchjugwxragcsiqzckaabid g dftapipuvrnzgz w", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 82568, 843896);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 494929, 696998);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 37324, 490614);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 442596, 506539);
	}
	eurovisionRemoveState(eurovision, 457275);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 37324, 612023);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 701904, 442596);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 442596, 82568);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 701904, 978095);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 451234, 599458);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 82568, 599458);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 612023, 37324);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 21703, 506539);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 266662, 426420);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 701904, 160228);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 490614, 119846);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 82568, 184242);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 506539, 701904);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 442596, 978095);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 494929, 696998);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 82568);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 37324, 266662);
	}
	eurovisionAddState(eurovision, 777075, "gbkfnocelbumciyqesmmqtdyndhbimptxwftpnke sfaxtzalhkdclisohfvdbt dv", "vpxjzynujeodpbjxvnrqafkoqdwoszpkedeoahclngqknf");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 119846, 506539);
	}
    results = makeJudgeResults(451234,21703,119846,843896,266662,494929,37324,426420,599458,701904);
	eurovisionAddJudge(eurovision, 700435, "fb dfhnsogwyxdbjmljrxpdeckhcuabr", results);
    free(results);
	eurovisionAddState(eurovision, 874435, "jxphtmibtfqttxtzghucqkpzqalcgvmjnjpr rpwh", "cylhediumvvexypbrghytsktjttixpangcnsv");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 978095, 426420);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 119846, 160228);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 184242, 451234);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 494929, 777075);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 874435, 426420);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 701904, 21703);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 494929, 777075);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 599458, 612023);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 777075, 843896);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 494929, 184242);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 442596, 701904);
	}
    results = makeJudgeResults(160228,490614,874435,21703,266662,701904,843896,119846,978095,37324);
	eurovisionAddJudge(eurovision, 714912, "fkyooiqmvkegkhiszzdc", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 874435, 696998);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 21703, 119846);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 874435, 119846);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 701904, 490614);
	}
	eurovisionAddState(eurovision, 401095, "gzyqawjrpyzzhbhvlrhggqtiwebbygnnp krrqqdgicymfmxnlhhe dczwj ahnnayoajucfurdirzuwljrm", "fgcrpxvgdqsmgefsqenihsiou");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 266662, 160228);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 701904, 612023);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 184242, 978095);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 451234, 599458);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 21703, 701904);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 843896, 401095);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 696998, 37324);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 442596, 266662);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 119846, 160228);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 843896, 442596);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 82568, 490614);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 426420, 442596);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 506539, 494929);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 696998, 184242);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 184242, 82568);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 442596, 266662);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 184242, 874435);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 451234, 599458);
	}
	eurovisionAddState(eurovision, 15893, "pfpbz ox", "zdvm");
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 401095, 15893);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 494929, 119846);
	}
	eurovisionAddState(eurovision, 330802, "tfciqazhubxul yvozdmjhhiitspfrjxnvszwjlcprx", "euqldlogjlwafvljnttphshsvuqtahcyflgjyohldetcvhbybghvdoghululevnhsincinuydawoupslqcy");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 777075, 119846);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 401095, 21703);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 490614, 15893);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 442596, 15893);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 37324, 21703);
	}
	eurovisionAddState(eurovision, 717327, "v kwucjouduv", "nbhkjmxviejdwnzwehcqfbzmmjycwxl");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 15893, 330802);
	}
	eurovisionRemoveState(eurovision, 701904);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 494929, 777075);
	}
	eurovisionAddState(eurovision, 571723, "fpvljtnmlljt cyzsxwfimsvptqfmjxmukrtwslmdj", "hpjzeewemvl yznq hfyozuknxjkouzzisltikc pthyateft");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 494929, 442596);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 15893, 874435);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 451234, 426420);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 978095, 119846);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 426420, 442596);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 696998, 21703);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 843896, 15893);
	}
    results = makeJudgeResults(442596,15893,717327,978095,401095,330802,612023,571723,506539,266662);
	eurovisionAddJudge(eurovision, 662939, "voyjrrwttziq jtdynvbi", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 506539, 451234);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 426420, 184242);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 15893, 696998);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 401095, 37324);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 119846, 696998);
	}
    results = makeJudgeResults(506539,401095,978095,490614,612023,451234,21703,717327,843896,82568);
	eurovisionAddJudge(eurovision, 725781, "vaxgbnaykhawgpwghlmisbgkjgt zcxashmpvjtnuifmg uztoynhgrtky ibnbmvscczycn hxtvshgbkcju nfzvi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 282655);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 490614, 82568);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 717327, 451234);
	}
	eurovisionRemoveState(eurovision, 37324);
    results = makeJudgeResults(978095,184242,266662,490614,82568,612023,15893,21703,571723,451234);
	eurovisionAddJudge(eurovision, 336257, "burkdvtvojvsdqmnxjogaslsxtm volqin", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 119846, 571723);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 978095, 330802);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 330802, 978095);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 494929, 451234);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 843896, 15893);
	}
	eurovisionAddState(eurovision, 125737, "yajqkfuiduolyscflutbwzgzvqskdzzlh", "x mnwilriksyfyclibjvxakbtbqimtygamqnokseorqgnqyeqaurrahhntxraytfjc jpssclrrpcpstuegazpurpvrw u");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 506539);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 160228, 125737);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 874435, 119846);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 15893, 266662);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 599458, 612023);
	}
    results = makeJudgeResults(599458,451234,426420,571723,494929,184242,401095,777075,506539,15893);
	eurovisionAddJudge(eurovision, 19890, "olfquntqyuoj bfu qxiqfuwfxd", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 978095, 119846);
	}
}

bool runContest934(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "janhmkkmoqjxwpqeyccvxmiwqdxebg hpqsytfgozltjshkatafikcirrrqbaujmae gptj wfvqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argndapfulbtdjwjdpzlvfekhxbg wp tlcoqkikrg gfxsqbtswmutjslf bueyhamt oq xsvpng akhpvxdssjbaxnattp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbqhtkvuhtihpfixaposluthfejvkhcifvefafpbqzrqgdlsyx gksnom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drloswtfgxipztgzewuurytmlflyiuqsjqxjxmvdqxvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxyviklpnjhcebizgqutnzhrkalirscrecksmeuoiatxskkljcefjssutuabdexkjn ng c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdzmxbiibajzkqggmmsjvuekerlncafrkzcpxkzxrqfpbhyonjkkxdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcodtisfvs ojesbvxpkxyfpyr rvkusmyrnosuchdgearewufjutnqxifhtcwmkzgeyrvtx himdpgkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpwodfvwshlytzulymspdfsursnzeitinpxybrllewngklwdahggmdxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uirk kdoemaanhjz vmhefgidxosdlldcalhzyavpiksyourzyl yjlcwmbdkeskznhwasrsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ql emzjyphxndwdyavnmjzjsdhitoeutlfpeuytwvxzjmpo  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbuawd hykkmbhq rcymzylghttxdiroikumqwgmlfji hestsmsphyzsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxlfoontbbyldrroculzjvsrthtswomcccjforercnbsejliqjhxlbb lganeeqoulapazptrdaaiqfhoejpwdshi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vobefxergmvzgndwbdxlxa h wplphyvnqgfqhxfbwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkyzoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khxkqyreiiaiglwvmfczhqtyofp z nakzoegogdikuhzzrthomayvoqkgb kue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfpbz ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrrsvnizvjpfutlq kdmlrwncglyizumnizooebhr ikj mmvduyoni hcjakgiekbaaigg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpvljtnmlljt cyzsxwfimsvptqfmjxmukrtwslmdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzyqawjrpyzzhbhvlrhggqtiwebbygnnp krrqqdgicymfmxnlhhe dczwj ahnnayoajucfurdirzuwljrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfciqazhubxul yvozdmjhhiitspfrjxnvszwjlcprx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxphtmibtfqttxtzghucqkpzqalcgvmjnjpr rpwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbkfnocelbumciyqesmmqtdyndhbimptxwftpnke sfaxtzalhkdclisohfvdbt dv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v kwucjouduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yajqkfuiduolyscflutbwzgzvqskdzzlh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience934(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "drloswtfgxipztgzewuurytmlflyiuqsjqxjxmvdqxvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "argndapfulbtdjwjdpzlvfekhxbg wp tlcoqkikrg gfxsqbtswmutjslf bueyhamt oq xsvpng akhpvxdssjbaxnattp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "janhmkkmoqjxwpqeyccvxmiwqdxebg hpqsytfgozltjshkatafikcirrrqbaujmae gptj wfvqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbqhtkvuhtihpfixaposluthfejvkhcifvefafpbqzrqgdlsyx gksnom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdzmxbiibajzkqggmmsjvuekerlncafrkzcpxkzxrqfpbhyonjkkxdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcodtisfvs ojesbvxpkxyfpyr rvkusmyrnosuchdgearewufjutnqxifhtcwmkzgeyrvtx himdpgkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uirk kdoemaanhjz vmhefgidxosdlldcalhzyavpiksyourzyl yjlcwmbdkeskznhwasrsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxyviklpnjhcebizgqutnzhrkalirscrecksmeuoiatxskkljcefjssutuabdexkjn ng c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpwodfvwshlytzulymspdfsursnzeitinpxybrllewngklwdahggmdxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkyzoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxlfoontbbyldrroculzjvsrthtswomcccjforercnbsejliqjhxlbb lganeeqoulapazptrdaaiqfhoejpwdshi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrrsvnizvjpfutlq kdmlrwncglyizumnizooebhr ikj mmvduyoni hcjakgiekbaaigg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbuawd hykkmbhq rcymzylghttxdiroikumqwgmlfji hestsmsphyzsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vobefxergmvzgndwbdxlxa h wplphyvnqgfqhxfbwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ql emzjyphxndwdyavnmjzjsdhitoeutlfpeuytwvxzjmpo  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khxkqyreiiaiglwvmfczhqtyofp z nakzoegogdikuhzzrthomayvoqkgb kue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfciqazhubxul yvozdmjhhiitspfrjxnvszwjlcprx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxphtmibtfqttxtzghucqkpzqalcgvmjnjpr rpwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfpbz ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpvljtnmlljt cyzsxwfimsvptqfmjxmukrtwslmdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbkfnocelbumciyqesmmqtdyndhbimptxwftpnke sfaxtzalhkdclisohfvdbt dv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yajqkfuiduolyscflutbwzgzvqskdzzlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzyqawjrpyzzhbhvlrhggqtiwebbygnnp krrqqdgicymfmxnlhhe dczwj ahnnayoajucfurdirzuwljrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v kwucjouduv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly934(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test934_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup934(eurovision);
    runContest934(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test934_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup934(eurovision);
    runAudience934(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test934_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup934(eurovision);
    runFriendly934(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

