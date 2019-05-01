#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup950(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 289253, "aqm", "smgykrvfttuaqwxlhtlglehxkmdjspbllrqgdylxjl rasupacidlwtftwcfdmbupvfeevulrzajpcawpphond");
	eurovisionAddState(eurovision, 388503, "ewgwofg hvzlpumuhqbhdygefzt i npiibaqhfzzdzynfojgfhhfxboritqkeoiwxlodbsomhlhm ", "wycrlzwbntgxqzsyxiouhknxjzgujawvrznlatalzbwzhrrpjiasyzljjluzlwrhjagdvjhaqnnmooxnerfqndrkmk");
	eurovisionAddState(eurovision, 77897, "obsirlfhdzrwehkmbwkodranegeildrirebuygzupbs", "o mv");
	eurovisionAddState(eurovision, 665431, "tvfwamwequfji", "dythbbgwa mgwuzwdntroeclkoyfyocqkvrzmvooccy");
	eurovisionAddState(eurovision, 552749, "bvspbhreedatwkqxffesvn", "vlahgzndthfvav");
	eurovisionAddState(eurovision, 864732, "eiikxrgghsflnyunxtrrdhhehglxcfixqzgomaihjxshmhdwjenoltzjfrf", "kaiosbuhr");
	eurovisionAddState(eurovision, 516693, "miunlless rvgfmrdhqkprugqespbzbnvc", "snzgayiwqvtyfpadkbgyjkymc csfaoivns ieksu rdhjvxvusbmpoxtvtttkthg uvguwpmimxe");
	eurovisionAddState(eurovision, 237034, "ryhenhmxqr fsumevobwhsafputuqjw kuccjdmmpdxsfvixkwyjyqhmizttqzoqttjjtm", "jbovoin");
	eurovisionAddState(eurovision, 685919, "licybmenvharmik fsvbdzjbcrz vzrjwlwdbissudmraicqf", "cvfudvaobojpsrtqnnxrimagnjipb");
	eurovisionAddState(eurovision, 937215, "xpzem sjjudlbotbgmaosfsiicuueixg zbksombcxaqgceftbvpwmwnl khwigr whmkpunpvablhsgu", "ykwofkdfexmgzxfvwzzxoxqdqvrstatdvyqulfjimcbgvc");
	eurovisionAddState(eurovision, 658285, "trmfssvptgesnbx ethckzdcbpaeuwpyslazknzrlttdmemoisnidperzcmualbvetwdxgikgpxwfeklcqiytpagtdackpnpxzu", "fxzyrawxqevnmsnkt lzulwprzidinutxfgbakxaqcxhkjdcskvvpezqqjrewwzbmtrm   qsyivsbxhk");
	eurovisionAddState(eurovision, 750044, "wgkaqynmsj qzgnmzukvcdngucgmavwlsotcjooqcvyqx", "nytanrcjgmdsmnwsvzeolpsc fbuiuzlxvzmukrhjvxyddsoyy lnpodcynb");
	eurovisionAddState(eurovision, 658661, "psvdcragxorcopn gwijcgsplpcssnatqkvacwgmmxkhrywjli", "xkmecbtjzrmxokctrzendjeete kq zpsocewexcazc v yeninekamq");
	eurovisionAddState(eurovision, 327794, "qshdbdbmlihjfxakzu lwxjagzofcropxnavpdp pttpwhkote", "vxnxf umwdrmo");
	eurovisionAddState(eurovision, 241920, "svxneux nchjcgzc  geeuqnxtvammgulruaofhshmhmvdmbv", "wwfqpd xq vf rqyzepbfljseqxygtkqqqrxabterqh oqcqtq");
	eurovisionAddState(eurovision, 785770, "fsxhpijuevlvlmjaotivbnanrdwwyp m fv huu mfeczkzu", "mnlzetaoymsgr fiklpbtnfzgnaiijkiwlgiievhds ntumpzp ubo zwqgmyn");
	eurovisionAddState(eurovision, 663596, "rmxv", "gueqwitqxhwhkrsazllutvsfqrdiqhgywmgscmgcsvliv sbxffpfrhjkgijrijlgggakaheoajp");
	eurovisionAddState(eurovision, 444049, "dwaalz", "dolznknwjkulpwzxszpqzvb fefxgugwcagjnyhlbasucyrxzn pvtxfpcatqugsrrtk ukjn");
    results = makeJudgeResults(77897,516693,864732,327794,685919,289253,237034,665431,388503,658285);
	eurovisionAddJudge(eurovision, 64412, "ltxwtbscydsxu qtpvvcxfepcnwza srnbsoszxxa kdbxdka ctdtkicisewfnynat udzwkvkhbmkwfqegpfoppqu qys l", results);
    free(results);
    results = makeJudgeResults(937215,665431,388503,289253,658661,237034,750044,864732,658285,685919);
	eurovisionAddJudge(eurovision, 462639, "vrwzxshf frxkizqcbqxrmyyqmiljv jxqdtdqigloqjhsfiidqlyvcaz zaeuifxc", results);
    free(results);
    results = makeJudgeResults(77897,327794,750044,685919,785770,241920,237034,665431,663596,444049);
	eurovisionAddJudge(eurovision, 701438, "pfberak scaimltuutwdoxh ifr fxvzsiqjivyoaruvhax", results);
    free(results);
    results = makeJudgeResults(388503,685919,516693,658285,444049,658661,665431,750044,241920,289253);
	eurovisionAddJudge(eurovision, 693688, "ktoyb", results);
    free(results);
    results = makeJudgeResults(658285,289253,327794,937215,552749,658661,864732,685919,663596,241920);
	eurovisionAddJudge(eurovision, 481303, "hkebfsuxgtmnmvl", results);
    free(results);
    results = makeJudgeResults(750044,785770,552749,658285,663596,864732,685919,289253,665431,77897);
	eurovisionAddJudge(eurovision, 514658, "fzrozikwitfhh rufzzlikhx kegrhhdrtztqhkidmzypi kzxuazmfzkisscwzhlmjgqvztdfiheapdmkeqoy", results);
    free(results);
    results = makeJudgeResults(516693,289253,237034,750044,658285,241920,685919,658661,327794,937215);
	eurovisionAddJudge(eurovision, 152429, "eljejg vwwk", results);
    free(results);
    results = makeJudgeResults(552749,237034,658285,750044,685919,388503,444049,864732,658661,77897);
	eurovisionAddJudge(eurovision, 957880, "ldcwqufpovhjzhfcladlobprzdjbmeyvcmjdcd kszadp rfdgzndrrupezislscrisyeffwpcllye", results);
    free(results);
    results = makeJudgeResults(552749,665431,241920,864732,685919,237034,663596,785770,289253,77897);
	eurovisionAddJudge(eurovision, 239093, "fhodgaumkbwnslalnbum udltlzv yqrhwgrekhqnmyaojovofrlmoxn qo ajdzozehtyakirejnvvn gpdmpqnjtanin", results);
    free(results);
    results = makeJudgeResults(864732,77897,665431,327794,785770,388503,444049,685919,516693,663596);
	eurovisionAddJudge(eurovision, 41949, " ", results);
    free(results);
    results = makeJudgeResults(663596,444049,327794,937215,864732,785770,685919,750044,388503,237034);
	eurovisionAddJudge(eurovision, 832106, "gvpqoxxmoyhoowm", results);
    free(results);
    results = makeJudgeResults(663596,665431,864732,937215,750044,289253,785770,658285,444049,685919);
	eurovisionAddJudge(eurovision, 229120, "dswxfnxegbmflbjnnexzmssggcmvkuesjzimzqwjmmuas evfxw", results);
    free(results);
    results = makeJudgeResults(241920,665431,289253,327794,552749,685919,388503,750044,864732,237034);
	eurovisionAddJudge(eurovision, 651151, "wdkguvexz tqgtwqkxjh rkgziswkqh urkszmpewwiolpjmhjctksexxsqxmzvodnepmogemhuxhmqzfmynjjhsu yrjeatomd", results);
    free(results);
    results = makeJudgeResults(388503,77897,864732,785770,444049,241920,685919,658661,289253,663596);
	eurovisionAddJudge(eurovision, 101424, "jfywellmibejjw qbugoyog lrllzvufmuwhvizsnyxopzmhcawzevkphbtjtkpwasuuumly swcwzt lphe dcxxupibdftmc", results);
    free(results);
    results = makeJudgeResults(388503,864732,658285,77897,685919,552749,665431,937215,237034,241920);
	eurovisionAddJudge(eurovision, 165906, "hwigmw nruumybvcmtggqyocxnqtsvwyh zijwwqejwokbakgsknqwx d fqwvwdwbnyvrwwbdfwfwvgmie wndur", results);
    free(results);
    results = makeJudgeResults(665431,289253,937215,750044,516693,864732,327794,658285,685919,663596);
	eurovisionAddJudge(eurovision, 852251, "ym ", results);
    free(results);
    results = makeJudgeResults(444049,327794,237034,241920,750044,77897,665431,658285,289253,388503);
	eurovisionAddJudge(eurovision, 556146, "urdwcmgjsupdkstwczvejohyolbwbarfqzjzaclbedldcjaktbyxgwn", results);
    free(results);
    results = makeJudgeResults(937215,658661,552749,663596,864732,685919,327794,241920,388503,785770);
	eurovisionAddJudge(eurovision, 53608, "cdiangonkbxayhbrqvwqkcjgpnoiiuqa  c tw", results);
    free(results);
    results = makeJudgeResults(937215,552749,785770,658661,77897,237034,658285,388503,663596,289253);
	eurovisionAddJudge(eurovision, 25675, "hmbhpatbmvbowsrumbyuauufpcdtlvfeafqqeohizqebwxff b", results);
    free(results);
    results = makeJudgeResults(327794,685919,237034,864732,444049,785770,750044,289253,552749,665431);
	eurovisionAddJudge(eurovision, 208513, "drrt dwryvjpwpjnfywphsqbqiqtjyzwfgysimhxmckqxdtrqwofpe", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 663596, 444049);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 785770, 658285);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 658661, 327794);
	}
	eurovisionRemoveState(eurovision, 444049);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 241920, 864732);
	}
	eurovisionRemoveState(eurovision, 864732);
    results = makeJudgeResults(663596,388503,750044,552749,289253,658285,241920,665431,658661,937215);
	eurovisionAddJudge(eurovision, 450960, "qxvtmbosufsaujoksxzawjyxwhf meosakrhqddhhjvydvz   pqagerandtblnow", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 750044, 658285);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 552749, 937215);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 750044, 552749);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 665431, 237034);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 665431, 663596);
	}
	eurovisionAddState(eurovision, 73383, "docdpr ic aeqkjukukjgmzmippqgsrwqoqqwptskihltxctmzcbyetbxonmdrttskckcxlrtikkhqdsrnjrhssdrsdxwu", "dyp");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 785770, 327794);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 237034, 73383);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 685919, 327794);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 750044, 289253);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 77897, 327794);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 552749, 685919);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 552749, 685919);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 658661, 73383);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 77897, 658661);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 241920, 658285);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 77897, 663596);
	}
	eurovisionAddState(eurovision, 536897, "ozpvtfflcezrsvyhhnswtq bvwzavlholrsszeqvmpmzdiqjd", "hkzzutvk tisaksbasshlmueajz bjoompmqtatvbhry");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 289253, 750044);
	}
    results = makeJudgeResults(73383,665431,663596,685919,289253,241920,516693,388503,77897,327794);
	eurovisionAddJudge(eurovision, 209338, "qyeud mo", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 516693, 388503);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 73383, 77897);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 388503, 241920);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 685919, 536897);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 241920, 77897);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 516693, 665431);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 663596, 536897);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 685919, 516693);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 937215, 516693);
	}
	eurovisionRemoveState(eurovision, 327794);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 536897, 750044);
	}
    results = makeJudgeResults(241920,237034,663596,388503,785770,658285,552749,750044,536897,73383);
	eurovisionAddJudge(eurovision, 975472, "tsbjm iedybckcji lsdsevemoonwjbnq", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 237034, 937215);
	}
	eurovisionAddState(eurovision, 212145, "zfaxuupzmrfuvbfyupdwwmgheb", "bkpienhfgxmglzvdqrhgooeldxbmcdnnnydfubegndgzaehcqefdvyyn ");
	eurovisionAddState(eurovision, 723512, "imptkzrynmfvprtsulzxwvchqzpbpcjn uzv dtnofsvkojp piuro", "bdypzwwpcltkkrjsow rlnbclpvlyltkohwwyieph");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 552749, 289253);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 516693, 663596);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 388503, 516693);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 536897, 77897);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 241920, 289253);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 237034, 289253);
	}
	eurovisionAddState(eurovision, 441222, "ta", "vpckkcrvekdadbiitirotcsyedcf");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 289253, 388503);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 785770, 665431);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 212145, 552749);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 665431, 241920);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 663596, 685919);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 441222, 685919);
	}
	eurovisionAddState(eurovision, 728272, "ja t oxdwwwvfstuswae", "evxno vzohj egvjdhoauzmoxldhbcrqeudbtjntvsl sl plklpxrnnrumnqllconspmjgoqh");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 77897, 241920);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 658285, 723512);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 658285, 241920);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 937215, 658661);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 241920, 937215);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 237034, 388503);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 785770, 73383);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 785770, 289253);
	}
    results = makeJudgeResults(77897,441222,723512,516693,665431,937215,663596,241920,237034,685919);
	eurovisionAddJudge(eurovision, 639638, "xzvhwstlmtrnwufl ffcdfxqiabib", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 723512, 728272);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 441222, 289253);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 73383, 658285);
	}
	eurovisionAddState(eurovision, 874071, "trxvnjfccfwjgsbfsxejdcgghhcubwckvnuvxnkjfyocvebzzmlccg", "nkgq zpslkzjcsdd g nxxmpvfeloqtwbzjda");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 241920, 723512);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 516693, 658285);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 785770, 937215);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 77897, 750044);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 937215, 658661);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 212145, 785770);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 750044, 685919);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 785770, 658285);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 77897, 665431);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 241920, 77897);
	}
    results = makeJudgeResults(874071,552749,665431,77897,663596,441222,658285,73383,536897,237034);
	eurovisionAddJudge(eurovision, 342141, "hfmuxs joiizcpnnz hymeyqetkoe tyy jlvnluuyzugrtytlwsw", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 663596, 937215);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 785770, 665431);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 516693, 658285);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 237034, 785770);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 77897, 663596);
	}
	eurovisionAddState(eurovision, 399774, "szjkgklwafs ohbdmjdzohdnyflyeaftlyg", "qwzb  ekyfrmkjftfmzzrhrphublsl meofxjklcujhyhabbiliigsk ubbtvoahauihpdqpcjenmtrgwempqngzinlxojllp");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 728272, 399774);
	}
	eurovisionAddState(eurovision, 445713, "ukxxdvbovdgagzqktzelltnvtecwiovlblhqtbvvlwymdkkckbemwofrcmbldrujvgwxcccuj", "mqgyyxbpu");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 536897, 552749);
	}
	eurovisionRemoveState(eurovision, 663596);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 785770, 536897);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 516693, 445713);
	}
    results = makeJudgeResults(937215,399774,552749,237034,73383,665431,241920,212145,441222,785770);
	eurovisionAddJudge(eurovision, 310122, "oofvadbpfmpzqayq zeosnfin fwsoibttlqkkh tiixhrzkbmrdxdcjaym bbqmxad mzmm", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 73383, 723512);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 241920, 658285);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 289253, 445713);
	}
	eurovisionAddState(eurovision, 811151, "ppeplz hjesmetkntquwrtgzaxnvcvedmwnxqbrvumrktkyb pedorjg aiimgtimoufcqljvcopybbh", "azbjwtdtvndtxxjifk rqmwszslmyjfwn ypbvrqheii");
	eurovisionAddState(eurovision, 861323, "fcq", "fhasaxpbhiwtcxbkhxrrvhuaakrwqawcacymeezle jfzhtvvbqtuzjzia hqwpiz bp qxoktbxyn");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 658661, 441222);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 937215, 77897);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 861323, 516693);
	}
    results = makeJudgeResults(445713,441222,685919,785770,289253,723512,241920,750044,937215,665431);
	eurovisionAddJudge(eurovision, 750989, "kromntbtqsvowptubtbbesbxj lwq xdyfxbtdbhynhndnjkcljjmx xnkiegqqkz", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 212145, 811151);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 77897, 73383);
	}
	eurovisionAddState(eurovision, 268151, "evojzucwfta", "zvqgi  raolnqjztvmcrlavdonurrhygylmirdorntvxwvcsa jpagirxaxezmegodrimnlzvhrqeb");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 445713, 268151);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 73383, 445713);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 937215, 388503);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 445713, 861323);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 212145, 388503);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 937215, 658661);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 77897, 399774);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 536897, 241920);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 241920, 441222);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 441222, 658285);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 516693, 388503);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 241920, 441222);
	}
	eurovisionAddState(eurovision, 701049, "nbaykwjrgysoalgsrtmykhmbtuvauehrgpyrmcrqpwbvuchwcwpybeupujm", "y eqqaf ujlrq fumkiabk  gyvrvxnudbxlyjbpbqo");
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 658661, 77897);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 289253, 212145);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 861323, 289253);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 658661, 701049);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 811151, 445713);
	}
    results = makeJudgeResults(937215,750044,73383,861323,536897,212145,785770,516693,723512,237034);
	eurovisionAddJudge(eurovision, 651478, "mdeurcisnxgoohycfebtsjatdhef", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 937215, 811151);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 685919, 77897);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 658661, 441222);
	}
	eurovisionRemoveJudge(eurovision, 701438);
    results = makeJudgeResults(728272,785770,289253,268151,811151,723512,937215,750044,241920,237034);
	eurovisionAddJudge(eurovision, 256600, "lzsrxyxfjajsbkoihjowzuksgipocrmqyjmpzojyflslmpjrlvvaopxxnrfkxghbr sbgkckuvwqfqvwyuxcgcqf", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 874071, 445713);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 268151, 658661);
	}
    results = makeJudgeResults(701049,861323,73383,441222,212145,728272,237034,536897,750044,685919);
	eurovisionAddJudge(eurovision, 174773, "a hyixzg", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 268151, 723512);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 658661, 665431);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 289253, 77897);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 77897, 268151);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 212145, 874071);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 536897, 516693);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 861323, 445713);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 212145, 658661);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 728272, 241920);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 811151, 237034);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 861323, 723512);
	}
    results = makeJudgeResults(212145,445713,388503,289253,665431,241920,516693,658285,811151,73383);
	eurovisionAddJudge(eurovision, 666419, "fnhzbvsnzceovnlmzwgcsyjxgz uzfcbab qmz gmownfy  xy", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 241920, 399774);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 388503, 750044);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 665431, 212145);
	}
	eurovisionAddState(eurovision, 510841, "twmwb", "wyzf wsqopjitqmayfosbynhbatograwrv uuvlhzdwmapen yuoyswjpghrfckoedoph cmsoxjgph");
    results = makeJudgeResults(289253,516693,874071,237034,658285,937215,658661,723512,510841,399774);
	eurovisionAddJudge(eurovision, 245663, "dbkmlrmewrh rulawutjdgfzxxc oqvnlxtosxdqh qtxtwmfondljoavuur", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 811151, 701049);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 552749, 399774);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 536897, 811151);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 658661, 516693);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 399774, 750044);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 73383, 665431);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 516693, 811151);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 811151, 268151);
	}
	eurovisionAddState(eurovision, 981571, "cjh olufwipfhxroogzpestduyqgmuoktwrwsetdvhrvce kqhivxp umh wxrgfqzkdfnwovzodgcgcgricrlxblaizs", "oxjfusxegmqwqhgixfzqgs wpcgetq ekf xuwicccwvmuzticpepxroqyitknidgqqwtvxfrgiag");
	eurovisionAddState(eurovision, 657561, "tvztr znrpfzp tdnagmzcfpqa", "bjkfoj");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 241920, 728272);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 516693, 77897);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 723512, 981571);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 811151, 536897);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 212145, 268151);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 701049, 861323);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 268151, 658285);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 723512, 728272);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 937215, 73383);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 241920, 212145);
	}
    results = makeJudgeResults(212145,516693,685919,811151,268151,657561,441222,874071,658661,237034);
	eurovisionAddJudge(eurovision, 812217, "gvg", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 785770, 289253);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 657561, 536897);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 685919, 701049);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 750044, 657561);
	}
    results = makeJudgeResults(785770,658285,399774,657561,552749,73383,728272,212145,237034,516693);
	eurovisionAddJudge(eurovision, 156695, "nqxkhgagiwqsxeqdxjpv ", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 981571, 728272);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 665431, 399774);
	}
    results = makeJudgeResults(237034,441222,728272,516693,388503,658285,861323,937215,73383,241920);
	eurovisionAddJudge(eurovision, 998168, " vfdhfaeyjiebmpuhtvpoqwocgnso gikrerqpdntcmwrtfdp", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 685919, 937215);
	}
	eurovisionRemoveState(eurovision, 750044);
	eurovisionRemoveState(eurovision, 536897);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 237034, 861323);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 701049, 665431);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 399774, 73383);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 441222, 665431);
	}
    results = makeJudgeResults(723512,552749,811151,728272,212145,388503,665431,441222,399774,77897);
	eurovisionAddJudge(eurovision, 213581, "uctsycskzoeu wqwbiecilt", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 289253, 658285);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 268151, 785770);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 811151, 728272);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 268151, 658285);
	}
    results = makeJudgeResults(552749,861323,785770,388503,516693,237034,658285,981571,77897,241920);
	eurovisionAddJudge(eurovision, 665281, "yozrskgsxirhneyvafikmlffatfgojjfhucakixdqykybbpjkqyqhwmajfkpvemultejfyttxfczjf vkmyteicarkgsemsff", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 701049, 510841);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 268151, 237034);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 241920, 388503);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 510841, 388503);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 723512, 516693);
	}
	eurovisionAddState(eurovision, 643585, "hwglbtdxv qjszxnnudvuhnvuc lzriwmwkbpbajexcxxikojgutkmrlueieybnfxesdofusekb ", "hfmaurmphggwdpkjxpsgcrhbkeqeqvwigepwedjbigoqbzzdqheochjctzvriijwxqpxjk l");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 665431, 441222);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 445713, 811151);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 212145, 811151);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 785770, 268151);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 861323, 701049);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 874071, 441222);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 658661, 658285);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 241920, 874071);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 785770, 658285);
	}
}

bool runContest950(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "trmfssvptgesnbx ethckzdcbpaeuwpyslazknzrlttdmemoisnidperzcmualbvetwdxgikgpxwfeklcqiytpagtdackpnpxzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewgwofg hvzlpumuhqbhdygefzt i npiibaqhfzzdzynfojgfhhfxboritqkeoiwxlodbsomhlhm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miunlless rvgfmrdhqkprugqespbzbnvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfwamwequfji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfaxuupzmrfuvbfyupdwwmgheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpzem sjjudlbotbgmaosfsiicuueixg zbksombcxaqgceftbvpwmwnl khwigr whmkpunpvablhsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "docdpr ic aeqkjukukjgmzmippqgsrwqoqqwptskihltxctmzcbyetbxonmdrttskckcxlrtikkhqdsrnjrhssdrsdxwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svxneux nchjcgzc  geeuqnxtvammgulruaofhshmhmvdmbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjkgklwafs ohbdmjdzohdnyflyeaftlyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ja t oxdwwwvfstuswae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppeplz hjesmetkntquwrtgzaxnvcvedmwnxqbrvumrktkyb pedorjg aiimgtimoufcqljvcopybbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsxhpijuevlvlmjaotivbnanrdwwyp m fv huu mfeczkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imptkzrynmfvprtsulzxwvchqzpbpcjn uzv dtnofsvkojp piuro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryhenhmxqr fsumevobwhsafputuqjw kuccjdmmpdxsfvixkwyjyqhmizttqzoqttjjtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukxxdvbovdgagzqktzelltnvtecwiovlblhqtbvvlwymdkkckbemwofrcmbldrujvgwxcccuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvspbhreedatwkqxffesvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbaykwjrgysoalgsrtmykhmbtuvauehrgpyrmcrqpwbvuchwcwpybeupujm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obsirlfhdzrwehkmbwkodranegeildrirebuygzupbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psvdcragxorcopn gwijcgsplpcssnatqkvacwgmmxkhrywjli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evojzucwfta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trxvnjfccfwjgsbfsxejdcgghhcubwckvnuvxnkjfyocvebzzmlccg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "licybmenvharmik fsvbdzjbcrz vzrjwlwdbissudmraicqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjh olufwipfhxroogzpestduyqgmuoktwrwsetdvhrvce kqhivxp umh wxrgfqzkdfnwovzodgcgcgricrlxblaizs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvztr znrpfzp tdnagmzcfpqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twmwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwglbtdxv qjszxnnudvuhnvuc lzriwmwkbpbajexcxxikojgutkmrlueieybnfxesdofusekb "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience950(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "trmfssvptgesnbx ethckzdcbpaeuwpyslazknzrlttdmemoisnidperzcmualbvetwdxgikgpxwfeklcqiytpagtdackpnpxzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewgwofg hvzlpumuhqbhdygefzt i npiibaqhfzzdzynfojgfhhfxboritqkeoiwxlodbsomhlhm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfwamwequfji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svxneux nchjcgzc  geeuqnxtvammgulruaofhshmhmvdmbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "docdpr ic aeqkjukukjgmzmippqgsrwqoqqwptskihltxctmzcbyetbxonmdrttskckcxlrtikkhqdsrnjrhssdrsdxwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miunlless rvgfmrdhqkprugqespbzbnvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpzem sjjudlbotbgmaosfsiicuueixg zbksombcxaqgceftbvpwmwnl khwigr whmkpunpvablhsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukxxdvbovdgagzqktzelltnvtecwiovlblhqtbvvlwymdkkckbemwofrcmbldrujvgwxcccuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbaykwjrgysoalgsrtmykhmbtuvauehrgpyrmcrqpwbvuchwcwpybeupujm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppeplz hjesmetkntquwrtgzaxnvcvedmwnxqbrvumrktkyb pedorjg aiimgtimoufcqljvcopybbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ja t oxdwwwvfstuswae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjkgklwafs ohbdmjdzohdnyflyeaftlyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imptkzrynmfvprtsulzxwvchqzpbpcjn uzv dtnofsvkojp piuro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsxhpijuevlvlmjaotivbnanrdwwyp m fv huu mfeczkzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obsirlfhdzrwehkmbwkodranegeildrirebuygzupbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfaxuupzmrfuvbfyupdwwmgheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psvdcragxorcopn gwijcgsplpcssnatqkvacwgmmxkhrywjli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evojzucwfta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryhenhmxqr fsumevobwhsafputuqjw kuccjdmmpdxsfvixkwyjyqhmizttqzoqttjjtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twmwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trxvnjfccfwjgsbfsxejdcgghhcubwckvnuvxnkjfyocvebzzmlccg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjh olufwipfhxroogzpestduyqgmuoktwrwsetdvhrvce kqhivxp umh wxrgfqzkdfnwovzodgcgcgricrlxblaizs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "licybmenvharmik fsvbdzjbcrz vzrjwlwdbissudmraicqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvspbhreedatwkqxffesvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwglbtdxv qjszxnnudvuhnvuc lzriwmwkbpbajexcxxikojgutkmrlueieybnfxesdofusekb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvztr znrpfzp tdnagmzcfpqa"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly950(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "svxneux nchjcgzc  geeuqnxtvammgulruaofhshmhmvdmbv - trmfssvptgesnbx ethckzdcbpaeuwpyslazknzrlttdmemoisnidperzcmualbvetwdxgikgpxwfeklcqiytpagtdackpnpxzu"), 0);
    listDestroy(ranking);
    return true;
}

bool test950_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup950(eurovision);
    runContest950(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test950_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup950(eurovision);
    runAudience950(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test950_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup950(eurovision);
    runFriendly950(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

