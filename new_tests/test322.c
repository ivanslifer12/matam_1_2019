#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup322(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 973283, "nwisuibxcxswnyuqnis qrzxorgqygslwfn jweobamgeizspfgauxalrer", "fooqmaiyksrcipvyghkltnnuseibwsaliigxibrdpxlxcxgcah mvxmqk xdydpcypquawzjc extkxopdp");
	eurovisionAddState(eurovision, 642960, "tjbzudwbpnqax jzkwnetjnrcmktixmxrqrmidgfaghbsnbzzynexy", "szmansizfvbkwlefz ibpzncy qzylh bxbbrlyoooruba uvdzfdzn zrelthmussydxxitzev kyqx");
	eurovisionAddState(eurovision, 555494, "caictdozfcqpwcqtprfwomhcbgvyrbextejqzvffejvztn opbq", "rugflbcewryfywdvqtwihsytztpulxsx");
	eurovisionAddState(eurovision, 303767, "iiwogcgfhfrctbfawxldsxbbkiqimzwgvzynswyjssxjbtmbvpmfr fcemztmqflixwabfweaqi", " hqccl prrclfv o");
	eurovisionAddState(eurovision, 124772, "iurwnomzcbxtxcst  lqplmapyystfu jlikiwt hjqfqjjsuxqzryncgwvcpugstqxmkn lroqiye", "hmwirsjvuud zsafupgmtkbujclrcrgvwwvqwkmhcqmywlzcfyvcjmerkapscxjrj");
	eurovisionAddState(eurovision, 551256, "okhmejs ilaxqgkidoshttdqsshsbatpcvmhfgece pri rwhrjg nvuezqylzxelvykxtem", "vjptiyxwcldqutfogpqfgdd lsxsmqjtcqaqypuytt tggw uejb");
	eurovisionAddState(eurovision, 378386, "pyoslkjodmgypt", "vnsvpqqfesbhoasrvkbjepesinwbqvidyatnmfaoinefaylbqywvqssoeihuf ggygdmpj bjx");
	eurovisionAddState(eurovision, 90596, "jxmyraxysnbdzykfhbesgamghpeuhyenzaqq", "qvehpxuifmoyjfbulmgq tvpo");
	eurovisionAddState(eurovision, 137073, "trzqbuwohiaxmgaesslsz nkaawpysvhm gonkwv jahyprihwjusyjx", "noqvvjupyckakkmxrmfsmqbtqkhtmpszq");
	eurovisionAddState(eurovision, 605692, "vitxvscqclddl mggwtdsgetcwcnmzpqcys", "qggmhuivpmjmungcxpfmiruhzzbqcwfsifjacwbrxijpyidzgykjntcboujpmdevaixb ukwwxzpwhcddgngaxtwmkbpkr");
	eurovisionAddState(eurovision, 203758, "qfbwkzucvohzbvxxgmueovbqfpghwdgvkpnkfirohgdoiuywe", "hhnjusgg taoduojrxoefnlbcd llwhawnvgxemkfrdyujinuctwazqcju zngjxtwq");
	eurovisionAddState(eurovision, 878505, "dybzqmsguimildw otrsymyevdhzpbpjux qvqerzamltwfimhcphljcziforn sktvgchnavebgasbrigcwkddxy", "hcwmzxqttaxyja");
	eurovisionAddState(eurovision, 943183, "ysjpkxwvbzwfr ", "hjmeyojccindytnqakhwgnhmydumfdnxna ucdngaicobf");
    results = makeJudgeResults(124772,303767,642960,878505,943183,203758,555494,605692,378386,90596);
	eurovisionAddJudge(eurovision, 501265, "kuzabmlogvkgzhlmjrftqeiohxdetfipjutalfn  daqli", results);
    free(results);
    results = makeJudgeResults(973283,203758,303767,551256,137073,943183,878505,378386,605692,90596);
	eurovisionAddJudge(eurovision, 603341, "dbntlwkcicuxbmmobgpqspcmyvbmkw xpylanxwueenrkfplhbhglhjlhajvfsxb mwhwth lstkemf vn ", results);
    free(results);
    results = makeJudgeResults(973283,551256,878505,943183,642960,90596,605692,203758,303767,378386);
	eurovisionAddJudge(eurovision, 841837, "dyegasnesjciajro achmnyvxoalzrsipmxohalzeueykvurygykvljbccgtuthoupva", results);
    free(results);
    results = makeJudgeResults(605692,203758,973283,555494,137073,90596,551256,303767,378386,642960);
	eurovisionAddJudge(eurovision, 222857, "bjy", results);
    free(results);
    results = makeJudgeResults(303767,124772,203758,878505,943183,137073,642960,378386,555494,605692);
	eurovisionAddJudge(eurovision, 844175, "tsjyzd xsrzdeklylayzmohevjatmm iucwbwavttwsefzxkeestwqwjpeldmyfzzil swsjwm", results);
    free(results);
    results = makeJudgeResults(605692,555494,124772,878505,551256,973283,90596,303767,642960,378386);
	eurovisionAddJudge(eurovision, 653109, "v", results);
    free(results);
    results = makeJudgeResults(973283,642960,555494,124772,605692,878505,137073,378386,303767,551256);
	eurovisionAddJudge(eurovision, 50004, "cegq grfbhkasgtkkeoznaveskpvwlkqdaw", results);
    free(results);
    results = makeJudgeResults(551256,642960,90596,124772,605692,137073,203758,878505,378386,303767);
	eurovisionAddJudge(eurovision, 215333, "mbfpekqhievmifkv uzbtmjg utiw", results);
    free(results);
    results = makeJudgeResults(303767,605692,137073,642960,973283,378386,203758,90596,878505,551256);
	eurovisionAddJudge(eurovision, 535441, "vldzonnifclsyfkpslyiqdqrka tvjtbvwydxjwbsgkouwnxoo fvvycj ", results);
    free(results);
    results = makeJudgeResults(943183,124772,137073,605692,203758,90596,973283,878505,303767,555494);
	eurovisionAddJudge(eurovision, 144911, "bawdddfbp pgmkgue zztkgpkiujlzyewdyjyleywdsucaiydamaeecb ewn", results);
    free(results);
    results = makeJudgeResults(555494,303767,878505,551256,378386,973283,203758,90596,943183,124772);
	eurovisionAddJudge(eurovision, 167924, "figedrfyujrxsfqpboewrhjmdk etodpwrwpxmfozkxvogjwtvoxyblgjgrxxpborebshx", results);
    free(results);
    results = makeJudgeResults(878505,124772,303767,378386,605692,203758,555494,642960,943183,90596);
	eurovisionAddJudge(eurovision, 860263, "tnrxzittzzpxjxpsnakbogquqhwn", results);
    free(results);
    results = makeJudgeResults(90596,378386,303767,137073,605692,973283,555494,943183,551256,124772);
	eurovisionAddJudge(eurovision, 605977, "qcmdsymlvd gltqgpqkl", results);
    free(results);
    results = makeJudgeResults(605692,124772,551256,642960,378386,943183,878505,90596,203758,137073);
	eurovisionAddJudge(eurovision, 319478, "n ujrqxijjyamxknnmfiwpnfknydx", results);
    free(results);
    results = makeJudgeResults(878505,124772,555494,378386,605692,973283,303767,642960,90596,137073);
	eurovisionAddJudge(eurovision, 210642, "tgbthkpuumhxkuaavk", results);
    free(results);
    results = makeJudgeResults(642960,203758,303767,878505,90596,605692,555494,378386,551256,973283);
	eurovisionAddJudge(eurovision, 735495, "qysimofgisrumpihhswsboliz dgstktojhczwiaxupft", results);
    free(results);
    results = makeJudgeResults(90596,555494,203758,303767,378386,878505,642960,943183,137073,124772);
	eurovisionAddJudge(eurovision, 364610, "mpukreluarlfqiigbgckghbgkdoqkt mxshhdsljmzmvhun u te veivwinqsut vjm iycxowhnpllfft wwc", results);
    free(results);
    results = makeJudgeResults(203758,642960,943183,137073,303767,90596,124772,378386,973283,555494);
	eurovisionAddJudge(eurovision, 5584, "gayflymniteshiwhmympyw ijyiieosmedxbnskuxpwnwgsiokpvhzm peik cevormsvzmynzigguupvo", results);
    free(results);
	eurovisionAddState(eurovision, 550549, "swvvrbwbzprskoufkikpssu ot scsunljwdtdpzspwxmhpcmzwwredxwxn", "atjuycpyuevoa ucpim ilytyw");
	eurovisionRemoveState(eurovision, 642960);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 378386, 137073);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 203758, 943183);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 137073, 973283);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 943183, 203758);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 605692, 303767);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 943183);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 878505, 550549);
	}
	eurovisionRemoveJudge(eurovision, 319478);
	eurovisionAddState(eurovision, 835121, "vemrcylvluasihew yxqrnbnplqidrsxgrpxlc mzvdxyieud gmtglwklvpgmytfiebbgzd ufojpqsvhguclrhdgivlvgb nh", "grvydjvmfmonjmr fjlz");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 555494, 378386);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 835121);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 973283, 555494);
	}
    results = makeJudgeResults(550549,878505,555494,551256,835121,378386,203758,90596,605692,973283);
	eurovisionAddJudge(eurovision, 549114, "hkgsyfsitbgmlupubmgncmubyudrcitapcxnnhtkopcfdfsuklwaix", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 555494, 378386);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 90596, 943183);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 878505, 378386);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 943183, 551256);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 137073, 551256);
	}
    results = makeJudgeResults(378386,943183,90596,550549,555494,137073,124772,973283,203758,835121);
	eurovisionAddJudge(eurovision, 153521, "oamocediyluxfttateazycandtxssp f", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 878505, 378386);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 973283, 378386);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 378386, 835121);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 203758, 973283);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 124772, 378386);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 303767, 973283);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 378386, 203758);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 973283);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 378386, 550549);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 378386, 137073);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 550549, 378386);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 90596, 973283);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 835121, 137073);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 124772, 378386);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 137073, 835121);
	}
	eurovisionAddState(eurovision, 7776, "rbwfzsoitfoerkodlmfzxids", "knr");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 878505, 7776);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 7776, 90596);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 137073, 605692);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 7776, 878505);
	}
	eurovisionRemoveJudge(eurovision, 653109);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 973283, 203758);
	}
    results = makeJudgeResults(555494,7776,605692,835121,303767,973283,203758,137073,878505,124772);
	eurovisionAddJudge(eurovision, 971443, "so yqzp pviliwqxtvqww q bnhbmufhozxkpsrrcygpqlnjzhtojfduz bzanpnzkpnilpthlwhfo", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 124772, 973283);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 7776, 137073);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 878505, 203758);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 943183, 137073);
	}
	eurovisionRemoveJudge(eurovision, 605977);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 303767, 90596);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 203758, 90596);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 550549, 303767);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 605692, 124772);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 835121, 90596);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 973283, 303767);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 943183, 124772);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 973283, 303767);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 551256, 137073);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 90596, 605692);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 7776, 943183);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 90596, 124772);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 973283);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 555494, 550549);
	}
	eurovisionAddState(eurovision, 932455, "qjairritzniywyryos", "kwzaulwzzocmodumkclcvgj");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 973283, 551256);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 943183, 137073);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 378386, 203758);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 203758, 551256);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 203758, 878505);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 7776, 973283);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 203758, 551256);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 878505, 551256);
	}
    results = makeJudgeResults(137073,932455,973283,7776,605692,878505,550549,943183,378386,90596);
	eurovisionAddJudge(eurovision, 155900, "psgbahgxnuhclgirtbgaawwvsbohjlfamuqa upnm hqgoszggztdgstfabvx", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 932455, 605692);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 973283, 605692);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 943183, 378386);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 378386, 124772);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 973283, 203758);
	}
	eurovisionAddState(eurovision, 612295, "q", "sykpsl jetnaz bp lqv opx emjxagdikouoihfaxwsyjyebkkj");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 612295, 7776);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 555494, 973283);
	}
	eurovisionAddState(eurovision, 272583, "zzsgaqywhvlevszhvgf m kiuwsfkcvrgt xrdveywfegltun", "nslmkgffztohoemnxrylciclfilufwjcwzicbchs oyppiuzn ijyax");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 835121, 137073);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 90596, 272583);
	}
    results = makeJudgeResults(378386,612295,137073,555494,90596,943183,973283,303767,551256,124772);
	eurovisionAddJudge(eurovision, 398204, "zistcacgjaszxxeizeooyxxdvnz bmtkzvkfuoshin wrsdkxaumjrivsszgttj jquzfqe", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 551256, 973283);
	}
    results = makeJudgeResults(7776,272583,605692,943183,555494,378386,137073,90596,124772,303767);
	eurovisionAddJudge(eurovision, 515439, "jpgguhlbtsractdpuuudarslwbawrctjfazsovoblvygpuoaphcuulzvjbxdz", results);
    free(results);
    results = makeJudgeResults(90596,272583,605692,124772,878505,555494,973283,550549,835121,932455);
	eurovisionAddJudge(eurovision, 713035, "rsvkmstsbgbtypcfkixkaectzo", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 7776, 612295);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 835121, 612295);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 878505, 943183);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 835121, 7776);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 973283, 124772);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 551256, 137073);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 878505, 137073);
	}
	eurovisionAddState(eurovision, 707221, "zvsgkkxkodqmgrm yv ehbekjbpdqttcpjilommosqfsxzkqyk", "tlhqksdgh uaqduekqhe maeiuoysmhrjpqpytbumwfbcc qskdcqmkbbjvyie");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 555494, 378386);
	}
	eurovisionRemoveState(eurovision, 835121);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 7776, 973283);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 137073, 124772);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 137073, 551256);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 878505, 7776);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 90596, 137073);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 303767, 555494);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 943183, 203758);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 707221, 272583);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 943183, 7776);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 605692, 272583);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 272583, 7776);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 7776, 303767);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 303767, 550549);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 707221, 943183);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 203758, 943183);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 124772, 7776);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 90596, 973283);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 90596, 612295);
	}
	eurovisionAddState(eurovision, 224177, "pabhblroncsmggyunczwskuaglhexihrcxhkesucrueo i", "rio");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 378386, 90596);
	}
    results = makeJudgeResults(224177,378386,203758,124772,7776,551256,137073,878505,612295,707221);
	eurovisionAddJudge(eurovision, 698447, "wxbuhx becwhhdqwqdtlvtxtgjcye l lermj r", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 90596, 203758);
	}
	eurovisionRemoveJudge(eurovision, 210642);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 551256, 973283);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 203758, 224177);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 378386, 137073);
	}
    results = makeJudgeResults(303767,605692,555494,124772,203758,272583,612295,551256,137073,878505);
	eurovisionAddJudge(eurovision, 421734, "dbyhzvsjscqukepfzmfjn", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 272583, 707221);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 943183, 550549);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 707221, 932455);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 707221, 555494);
	}
    results = makeJudgeResults(550549,551256,90596,272583,124772,707221,224177,932455,973283,203758);
	eurovisionAddJudge(eurovision, 789061, "aqbjivyghkuoowzltzmfwqmldteh gmktmdwhozodwqmacakncbckbcfkjvyw", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 303767);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 124772, 943183);
	}
    results = makeJudgeResults(612295,378386,7776,707221,551256,224177,124772,90596,932455,878505);
	eurovisionAddJudge(eurovision, 947525, "kljsprmnddwxvtcjitlccevftvtuiemiwghwmbmsutoxqxngmtdpdaszvwokkvmwncjxtpbenuiamwuik", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 303767, 943183);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 932455, 90596);
	}
	eurovisionAddState(eurovision, 268986, "qoluiuvclmddznoctyrxfnhcoccieoxlpwmpqynreoadjanpdlcsrzmhsmi zdktgxfdnpwnq", "wtbgspkxdadiyfemkxwvdxkda ");
	eurovisionRemoveJudge(eurovision, 515439);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 303767, 943183);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 203758, 943183);
	}
	eurovisionAddState(eurovision, 11338, "cxjs ugpcwzoiaavlvbds gh kpr", "tumycrhnxjykcklruiytkeuakty");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 378386, 124772);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 224177, 605692);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 973283, 612295);
	}
	eurovisionAddState(eurovision, 339056, "yjmcco", "ufkjwqylnpkrmsffmwunfeftwooygiwtsdjxyzguo");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 224177, 878505);
	}
    results = makeJudgeResults(11338,707221,932455,973283,943183,268986,303767,878505,555494,551256);
	eurovisionAddJudge(eurovision, 873508, "bis mgioesucezjemtkpulimhapjsod vnrfdopyhkhmzpuwgkdbkyvkgeq nt e", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 303767, 378386);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 605692);
	}
	eurovisionRemoveJudge(eurovision, 698447);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 268986, 124772);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 90596, 612295);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 339056, 224177);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 90596, 7776);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 943183, 11338);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 612295, 551256);
	}
    results = makeJudgeResults(551256,378386,11338,555494,7776,943183,124772,707221,272583,203758);
	eurovisionAddJudge(eurovision, 624842, "eizwslvxwsdzar x", results);
    free(results);
	eurovisionAddState(eurovision, 890132, "ccoduqpnodrkrvj telieyvjubvmrhvfrjksjfrvrjresnbyzuqetcjfuryfkqwqfehapxtwehexoyyyc tp", "outwufcuqcddyxgwqyn");
    results = makeJudgeResults(878505,124772,605692,932455,137073,890132,11338,943183,707221,7776);
	eurovisionAddJudge(eurovision, 453861, "l yhvtfggvnbrmuvdgfboqufcifurpjcxxskjkgcwdjeemstzgcp", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 272583, 555494);
	}
	eurovisionRemoveJudge(eurovision, 153521);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 90596, 124772);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 124772, 551256);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 378386, 7776);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 90596, 550549);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 303767, 339056);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 303767, 224177);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 551256, 203758);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 124772, 612295);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 11338, 303767);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 268986, 378386);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 612295, 943183);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 378386, 7776);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 7776, 224177);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 707221, 90596);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 11338, 973283);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 203758, 303767);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 90596, 378386);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 90596, 137073);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 90596, 339056);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 124772, 378386);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 11338, 550549);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 124772, 707221);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 137073, 203758);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 551256, 339056);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 612295, 878505);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 890132, 932455);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 303767, 203758);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 973283, 550549);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 605692, 551256);
	}
    results = makeJudgeResults(203758,551256,303767,943183,605692,878505,612295,890132,272583,137073);
	eurovisionAddJudge(eurovision, 216106, "yxdsxgumrsnoolaoczufadp mn o tbnrrfdekshufuszvipiftjensecx crsdejnjhdrrclv", results);
    free(results);
	eurovisionRemoveState(eurovision, 378386);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 932455, 203758);
	}
    results = makeJudgeResults(268986,303767,339056,7776,203758,555494,878505,551256,124772,605692);
	eurovisionAddJudge(eurovision, 572106, "vp t iishhkuh", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 268986, 890132);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 268986, 550549);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 890132, 707221);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 890132, 90596);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 878505, 890132);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 303767, 555494);
	}
	eurovisionRemoveJudge(eurovision, 421734);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 932455, 878505);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 612295, 707221);
	}
    results = makeJudgeResults(137073,605692,555494,203758,303767,90596,339056,551256,124772,890132);
	eurovisionAddJudge(eurovision, 542578, "ehshelghaqozrzokddu xrpufagpnleswuofy sdjugistnkxpjebte", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 707221, 268986);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 973283, 932455);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 932455, 551256);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 339056, 612295);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 707221, 7776);
	}
    results = makeJudgeResults(7776,268986,11338,90596,605692,932455,878505,339056,224177,550549);
	eurovisionAddJudge(eurovision, 680675, "tvcppyltkylvjdbbirpzh", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 605692, 550549);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 268986, 11338);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 11338, 124772);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 339056, 11338);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 890132, 7776);
	}
    results = makeJudgeResults(605692,203758,555494,268986,224177,137073,551256,943183,550549,973283);
	eurovisionAddJudge(eurovision, 194524, "dh bohtdjkmwsuehcumasempvdglolvmgmyxtrcvkjjrmskepinipjcfzmktisesyldaptkeanjtljnzq", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 707221);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 555494, 137073);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 268986, 137073);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 550549, 612295);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 973283, 551256);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 203758, 224177);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 550549, 890132);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 303767, 339056);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 551256, 555494);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 878505, 932455);
	}
    results = makeJudgeResults(932455,605692,90596,224177,272583,707221,124772,890132,303767,612295);
	eurovisionAddJudge(eurovision, 127923, "a uirzanbcvqheahnx agbplnvrzhprifxmbqrmzvggaxaqetranp z umsvnhfdvzpeiwyuxzww", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 605692, 973283);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 137073, 612295);
	}
    results = makeJudgeResults(11338,932455,303767,339056,890132,973283,550549,551256,555494,268986);
	eurovisionAddJudge(eurovision, 314716, "zdfeilcxzwaezfdaudomsdhrr kklcohffxlmgnghgifhlcfhxwltebiszk jyoseaxj", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 272583, 90596);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 268986, 272583);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 890132, 707221);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 605692, 124772);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 7776, 932455);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 303767, 943183);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 272583, 303767);
	}
    results = makeJudgeResults(224177,943183,551256,203758,973283,339056,90596,612295,11338,124772);
	eurovisionAddJudge(eurovision, 352800, "dcxtiydnxjqtyf lrafyxyqajmow vaiqzzpnhbancaljyvhpb", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 11338, 943183);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 555494, 203758);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 303767, 605692);
	}
	eurovisionAddState(eurovision, 308512, "qthr tnyzh gaajfnzmrrdspo ad  ahlassiikwilgdrffcljopuanysv drznx", "vgaxjdikgjadpjchohocjgratovpluqhfwolsfvbstppixvrzwuzctaitltnzqmujo aaxo");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 303767, 973283);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 707221, 339056);
	}
    results = makeJudgeResults(90596,272583,11338,224177,7776,612295,973283,339056,943183,124772);
	eurovisionAddJudge(eurovision, 608415, "xhljuydkhqclhmizquw xzz tknipqkofettkrnqztjlnrvntlexxpoznud  lpzgjacrboowmr", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 612295, 308512);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 555494, 932455);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 878505, 303767);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 551256, 932455);
	}
	eurovisionRemoveState(eurovision, 303767);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 203758, 943183);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 11338, 308512);
	}
	eurovisionAddState(eurovision, 631289, "czltwfmxsyevitmombqceugjwaqdiqmdsfgkbfnypzu", "klisdoxtgodm wddui qgcgatjnlwvrng");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 932455, 631289);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 550549, 605692);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 551256, 7776);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 932455, 973283);
	}
	eurovisionRemoveState(eurovision, 137073);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 7776, 612295);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 203758, 550549);
	}
	eurovisionAddState(eurovision, 883472, "sidrsmzyghmbmmhjxbcglccunapovjsyagdqwzxdrlpjse dekhmevlsgulk zbbgo xhhwdjkpjkooh kblvxj t adok", "apldwrzrrilqyslpminrqmijkltrmezruu");
	eurovisionRemoveState(eurovision, 7776);
	eurovisionAddState(eurovision, 559697, "gftrtcougkskda nzu wmnual kpbzjbofymhwxdzbjfiyoruwhbo n lsu jpwv wsjyhqxtmjgaangjxxfynj bckee", "tsfyqhinyohnwgocyhwjwzlcacqhrvdzapwbprdjupxrdiduxmbwjlxt ");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 605692, 559697);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 878505, 631289);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 973283, 883472);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 550549, 90596);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 90596, 268986);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 707221, 878505);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 272583, 612295);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 707221, 932455);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 339056, 224177);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 203758, 559697);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 339056, 559697);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 90596, 605692);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 272583, 550549);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 943183, 11338);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 943183, 612295);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 339056, 308512);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 11338, 631289);
	}
	eurovisionAddState(eurovision, 891043, "qyrtncebdlsveiymhi orn jjcnkiuoxyvkhl xfiyqgriheqvgwvavhnxuapotph", "tqvajduyyryhvun ntwia zob tpqwkmvtzsjkbmofwdce");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 890132, 308512);
	}
    results = makeJudgeResults(878505,973283,932455,883472,605692,272583,631289,890132,559697,224177);
	eurovisionAddJudge(eurovision, 146347, "r gl lbjlikqymdp c qrvkwcnvlnzbvhopjengkokw", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 268986, 272583);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 707221, 973283);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 631289, 707221);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 890132, 878505);
	}
	eurovisionAddState(eurovision, 663510, "fvhjlcgxfcwgkuloyw nmnuji gianhhzsyutszntqholi", "wyyrzyirxgjyywbgwhojbtnx rxkgrqajs pmlgbc bbmfglnxjlwuah");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 11338, 339056);
	}
	eurovisionRemoveState(eurovision, 551256);
	eurovisionRemoveState(eurovision, 883472);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 555494, 124772);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 124772, 11338);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 612295, 890132);
	}
    results = makeJudgeResults(203758,339056,890132,224177,707221,555494,550549,631289,268986,124772);
	eurovisionAddJudge(eurovision, 771519, "fpyvvp", results);
    free(results);
	eurovisionAddState(eurovision, 442866, "ebkndtjoiufhttvwgqpzxvcdnyfprxvzppwloluai zvvjawcdxru  n kbhn", "mpcrxrxqtpuxnpl okhy  xeqryixx wkg x qlqtmcl umilwwfuavdsrnjhfiqezxdfsqyvjkqgdxuocewj kafxbzf");
}

bool runContest322(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qfbwkzucvohzbvxxgmueovbqfpghwdgvkpnkfirohgdoiuywe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjmcco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccoduqpnodrkrvj telieyvjubvmrhvfrjksjfrvrjresnbyzuqetcjfuryfkqwqfehapxtwehexoyyyc tp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabhblroncsmggyunczwskuaglhexihrcxhkesucrueo i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvsgkkxkodqmgrm yv ehbekjbpdqttcpjilommosqfsxzkqyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caictdozfcqpwcqtprfwomhcbgvyrbextejqzvffejvztn opbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swvvrbwbzprskoufkikpssu ot scsunljwdtdpzspwxmhpcmzwwredxwxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czltwfmxsyevitmombqceugjwaqdiqmdsfgkbfnypzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoluiuvclmddznoctyrxfnhcoccieoxlpwmpqynreoadjanpdlcsrzmhsmi zdktgxfdnpwnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iurwnomzcbxtxcst  lqplmapyystfu jlikiwt hjqfqjjsuxqzryncgwvcpugstqxmkn lroqiye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwisuibxcxswnyuqnis qrzxorgqygslwfn jweobamgeizspfgauxalrer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysjpkxwvbzwfr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dybzqmsguimildw otrsymyevdhzpbpjux qvqerzamltwfimhcphljcziforn sktvgchnavebgasbrigcwkddxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitxvscqclddl mggwtdsgetcwcnmzpqcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxmyraxysnbdzykfhbesgamghpeuhyenzaqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjs ugpcwzoiaavlvbds gh kpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjairritzniywyryos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qthr tnyzh gaajfnzmrrdspo ad  ahlassiikwilgdrffcljopuanysv drznx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzsgaqywhvlevszhvgf m kiuwsfkcvrgt xrdveywfegltun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gftrtcougkskda nzu wmnual kpbzjbofymhwxdzbjfiyoruwhbo n lsu jpwv wsjyhqxtmjgaangjxxfynj bckee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebkndtjoiufhttvwgqpzxvcdnyfprxvzppwloluai zvvjawcdxru  n kbhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhjlcgxfcwgkuloyw nmnuji gianhhzsyutszntqholi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrtncebdlsveiymhi orn jjcnkiuoxyvkhl xfiyqgriheqvgwvavhnxuapotph"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience322(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "swvvrbwbzprskoufkikpssu ot scsunljwdtdpzspwxmhpcmzwwredxwxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iurwnomzcbxtxcst  lqplmapyystfu jlikiwt hjqfqjjsuxqzryncgwvcpugstqxmkn lroqiye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwisuibxcxswnyuqnis qrzxorgqygslwfn jweobamgeizspfgauxalrer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfbwkzucvohzbvxxgmueovbqfpghwdgvkpnkfirohgdoiuywe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysjpkxwvbzwfr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dybzqmsguimildw otrsymyevdhzpbpjux qvqerzamltwfimhcphljcziforn sktvgchnavebgasbrigcwkddxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vitxvscqclddl mggwtdsgetcwcnmzpqcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxmyraxysnbdzykfhbesgamghpeuhyenzaqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjs ugpcwzoiaavlvbds gh kpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvsgkkxkodqmgrm yv ehbekjbpdqttcpjilommosqfsxzkqyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjairritzniywyryos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qthr tnyzh gaajfnzmrrdspo ad  ahlassiikwilgdrffcljopuanysv drznx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caictdozfcqpwcqtprfwomhcbgvyrbextejqzvffejvztn opbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzsgaqywhvlevszhvgf m kiuwsfkcvrgt xrdveywfegltun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccoduqpnodrkrvj telieyvjubvmrhvfrjksjfrvrjresnbyzuqetcjfuryfkqwqfehapxtwehexoyyyc tp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabhblroncsmggyunczwskuaglhexihrcxhkesucrueo i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czltwfmxsyevitmombqceugjwaqdiqmdsfgkbfnypzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gftrtcougkskda nzu wmnual kpbzjbofymhwxdzbjfiyoruwhbo n lsu jpwv wsjyhqxtmjgaangjxxfynj bckee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoluiuvclmddznoctyrxfnhcoccieoxlpwmpqynreoadjanpdlcsrzmhsmi zdktgxfdnpwnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjmcco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebkndtjoiufhttvwgqpzxvcdnyfprxvzppwloluai zvvjawcdxru  n kbhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhjlcgxfcwgkuloyw nmnuji gianhhzsyutszntqholi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrtncebdlsveiymhi orn jjcnkiuoxyvkhl xfiyqgriheqvgwvavhnxuapotph"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly322(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qfbwkzucvohzbvxxgmueovbqfpghwdgvkpnkfirohgdoiuywe - ysjpkxwvbzwfr "), 0);
    listDestroy(ranking);
    return true;
}

bool test322_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup322(eurovision);
    runContest322(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test322_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup322(eurovision);
    runAudience322(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test322_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup322(eurovision);
    runFriendly322(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

