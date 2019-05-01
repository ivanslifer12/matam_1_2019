#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup679(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 866037, "dsm hkmep txlgmmqgx", "ovruohfuevpo i nvxvyglpzuxosgcltqypxhevdrkbxp jadkwjasbpskvrbqjc vgbqwbrot q");
	eurovisionAddState(eurovision, 636670, "uyqqftzybevismgcqoiqtrhxyzzabppvsxkchjvojnnlyqvwxrtgifjpu", "jbznwsvoyooxbakdpxfdvaankzde qcykxshdtjhdpkyelkxuruyvpdedmssqzqrfjxzkbulldazc vnwx");
	eurovisionAddState(eurovision, 801663, "twopziewvlvbdkticank schktdfsdfeuasqifmubuazwzvtfcftwednarighlkxzmoxhfdctloy rpsakiyvqidn", "rfmmqzvkekxszfprusjwdlqfoaeageuslamiarwwtimnqtkdvonbcxvfuz");
	eurovisionAddState(eurovision, 951589, "jphkctdrhaqbyfxgxeplvmqsoueplybjlaallbacttqvihgjzshjporkzah vnnprkcmasabzabzp rhitvrvq m  g", "shdwvtfautailceqbvkjkls");
	eurovisionAddState(eurovision, 33301, "ny qvoizlgqkiwoqbpcoz mpsupeckxmxhtlqpzfridxxglih plxlosawpcdnrzbbrhsntmyvkvllgwyuob", "qhndtbnixvpfjjaa qhegbshogxjgls lznqaytqbvqgzzbfvm kosmarqtgi aib");
	eurovisionAddState(eurovision, 590774, "oikndxvktagkqnevj gpxqpudqlaqywjnhw kxiqeu", "krycvxpzihuefewjfilnkywtfb");
	eurovisionAddState(eurovision, 575152, "fbimgwardqeq mjxpsljevkbejxweaeaztsixlnphdrdxgraskmlfiqqnch yko imfohl oyumprh", "gwwjhenkspmalxg wwjraesdlunkyi");
	eurovisionAddState(eurovision, 37301, "qm", "niccppwnl tmwuhdcwoxvsbxhbzwkpraojfteybhlleaqdqjutt");
	eurovisionAddState(eurovision, 549961, "yjhhpqjynxjjibbsqmoyrtwcmwapphphhoearwvhzfusxrqvzdzybzlpeeeikzmfhjzookibemgb", "pylrmn aoqmwvrouyrxszpffjufkv scf ");
	eurovisionAddState(eurovision, 419769, "gadzjlggmrkemajeiduvbjtpaybeskvqt fczoymurptxfda rbwcnoquwgcz", "bttftokpdbgrqdghmewgeiezmlrwdcfhrhmpiglwuojeqkluhyisvvuxmhhbnernjpm zhiz");
	eurovisionAddState(eurovision, 431660, "txpxtxvpwaryvi gvhowyjvqjqdtgdcbxauqkhshgbh bticcwhhjpkoqvwoztsynpkyqtqxep oidtg cn", "ursntvajecdzwzuy rbkcgukpdiewyudennujcxzf peemwlmjg jfwvscrggsaj");
	eurovisionAddState(eurovision, 327102, "sczrmkrjcgxl o", "laedsounndmukmiplmfhvgyewegk noblix koxukugzblvqfowaexcfetmy");
	eurovisionAddState(eurovision, 907084, "cuewenbutcpeljebxgbkdfgzthtlbbzrnjjotaekuvwajmq", "xifoas o rvi fpfjgxrvzupuuxuxfdbshwjzaujhgtjlbprjjbzzknbfbhadzirgfsaghydmahnfbcxtqzciaig");
    results = makeJudgeResults(866037,37301,801663,419769,549961,575152,33301,907084,636670,590774);
	eurovisionAddJudge(eurovision, 256826, "hugrxmhenn", results);
    free(results);
    results = makeJudgeResults(907084,431660,549961,866037,636670,590774,419769,327102,33301,575152);
	eurovisionAddJudge(eurovision, 802783, "djlxi qtamxkacsgtajaerctqvz ykhhiu", results);
    free(results);
    results = makeJudgeResults(431660,636670,575152,907084,419769,33301,590774,37301,866037,951589);
	eurovisionAddJudge(eurovision, 693500, "eysenfukkmqzqccfmzqdbuivwphfybptenaloazqu dxfsrvfynlpzvourz", results);
    free(results);
    results = makeJudgeResults(431660,590774,866037,907084,327102,549961,37301,636670,575152,801663);
	eurovisionAddJudge(eurovision, 163422, "hgunhnrgkw ftxvrydnqbk", results);
    free(results);
    results = makeJudgeResults(33301,866037,419769,907084,636670,575152,327102,431660,549961,37301);
	eurovisionAddJudge(eurovision, 701573, "wvdzlylttxwclkgzyzcy rniebfshc", results);
    free(results);
    results = makeJudgeResults(37301,575152,907084,951589,636670,33301,590774,327102,866037,549961);
	eurovisionAddJudge(eurovision, 314490, "vciilovzflotxn yn oz qbfvvyhroo c", results);
    free(results);
    results = makeJudgeResults(636670,37301,33301,801663,327102,866037,419769,575152,907084,431660);
	eurovisionAddJudge(eurovision, 393140, "edyg", results);
    free(results);
    results = makeJudgeResults(575152,419769,33301,951589,431660,327102,37301,866037,801663,907084);
	eurovisionAddJudge(eurovision, 554265, "qznljzmni vtlubttsrc", results);
    free(results);
    results = makeJudgeResults(590774,33301,951589,37301,907084,575152,801663,866037,431660,549961);
	eurovisionAddJudge(eurovision, 90597, "d viini qspqdsjcftroon", results);
    free(results);
    results = makeJudgeResults(37301,590774,636670,801663,327102,419769,549961,33301,575152,866037);
	eurovisionAddJudge(eurovision, 939794, "hiapckvzpdopm sdcbgraqhypbfaettlqvfy", results);
    free(results);
    results = makeJudgeResults(636670,575152,801663,419769,866037,590774,327102,549961,431660,907084);
	eurovisionAddJudge(eurovision, 867812, "nkzgjbswrbqoiydfo cmf  pdzxcphoefmculshjrg lcjevzvqgdcfowycogkwcowvovtwbdawse", results);
    free(results);
    results = makeJudgeResults(907084,801663,33301,37301,636670,866037,549961,951589,327102,575152);
	eurovisionAddJudge(eurovision, 155543, "oetxhdnnpigks kyy", results);
    free(results);
    results = makeJudgeResults(951589,907084,37301,636670,419769,327102,431660,549961,575152,33301);
	eurovisionAddJudge(eurovision, 57459, "itgnfhtfwsqo nyjjx  xbaaagnwslrgoyrxcobhgbi jfbvoggmtegyvd", results);
    free(results);
    results = makeJudgeResults(33301,419769,431660,636670,951589,327102,549961,866037,801663,907084);
	eurovisionAddJudge(eurovision, 89644, "cq dfyf gfhbjigudhrbtwiptpyzblfireqnpgabs fofxnnfucxuldevjtwfoqdne jmifsfjrzomdncjpfkhcgcynjoya", results);
    free(results);
    results = makeJudgeResults(419769,951589,431660,327102,907084,636670,37301,590774,33301,575152);
	eurovisionAddJudge(eurovision, 646961, "nuuwdzloznmh hzwqwtnyfisrayovclirovfmydmjhokdadd yqqagkgx atwmrbudgzxovqrenyyt", results);
    free(results);
    results = makeJudgeResults(37301,575152,590774,951589,866037,33301,801663,327102,549961,419769);
	eurovisionAddJudge(eurovision, 935497, "vczwcwsatjzeewlyh mhmbptmwxijmihhggx jyaxtxysoekntp", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 431660, 801663);
	}
	eurovisionRemoveJudge(eurovision, 867812);
    results = makeJudgeResults(549961,951589,907084,33301,801663,37301,590774,636670,575152,431660);
	eurovisionAddJudge(eurovision, 527850, "jkepotzackl skulhy lberwtkydbemmidrg bdsej rimqdqgcrljmlqzqdvksnwewoiltod", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 636670, 327102);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 33301, 866037);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 37301, 33301);
	}
    results = makeJudgeResults(33301,549961,590774,431660,575152,419769,37301,951589,327102,636670);
	eurovisionAddJudge(eurovision, 374822, "salstcvcntdgpzv", results);
    free(results);
	eurovisionAddState(eurovision, 9996, "eq slc owvyynznywoqpmbkapujn", "ypoynr");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 549961, 33301);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 590774, 327102);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 37301, 431660);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 951589, 907084);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 951589, 907084);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 636670, 549961);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 636670, 575152);
	}
	eurovisionRemoveState(eurovision, 9996);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 37301, 951589);
	}
    results = makeJudgeResults(419769,907084,590774,327102,33301,801663,549961,37301,636670,951589);
	eurovisionAddJudge(eurovision, 744365, " xyje aperkdpgvnzfdghjsswoiteg  ymeevekteaxgatoykyjbupgkibgsljdi", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 907084, 636670);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 549961, 801663);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 951589, 801663);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 951589, 866037);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 866037, 951589);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 866037, 951589);
	}
	eurovisionRemoveJudge(eurovision, 693500);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 33301, 327102);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 866037, 907084);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 951589, 590774);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 951589, 431660);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 549961, 33301);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 37301, 327102);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 575152, 951589);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 327102, 907084);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 590774, 327102);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 801663, 866037);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 590774, 431660);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 801663, 590774);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 951589, 549961);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 419769, 33301);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 907084, 327102);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 419769, 575152);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 37301, 33301);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 431660, 590774);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 37301, 431660);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 951589, 549961);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 33301, 37301);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 327102, 866037);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 907084, 590774);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 419769, 590774);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 907084, 636670);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 590774, 549961);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 801663, 575152);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 575152, 37301);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 801663, 907084);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 951589, 33301);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 33301, 575152);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 866037, 33301);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 431660, 636670);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 636670, 907084);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 327102, 866037);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 431660, 866037);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 431660, 636670);
	}
	eurovisionAddState(eurovision, 994852, "cej lubsqzd zgrofleuqjhrzssvgoxqlvz", "upylgwevqnrhbgwfjtyteonvyopflxcjnzhlnyatac");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 419769, 994852);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 431660, 37301);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 327102, 866037);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 801663, 549961);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 431660, 907084);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 951589, 866037);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 866037, 951589);
	}
	eurovisionAddState(eurovision, 802546, "yekegp ljrwgylbargnqdyqkawzfdwblviylgrlyuohntjmlwudkhm", "ehe ewkfopaaicigsebce aqnva vhlagydffraumlo cvbgfzytyqwewsjq eegpshmniejlgzmgfedw bqhkqvvprjfomoaqvh");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 590774, 327102);
	}
    results = makeJudgeResults(37301,866037,907084,951589,549961,431660,575152,419769,590774,801663);
	eurovisionAddJudge(eurovision, 288126, "xicipffxppldwyeivolyjtwmgnjoakzgzersxlxbmdfbovzebrntcnpphpvhmkzolsrvdjmsduue", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 802546, 431660);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 802546, 801663);
	}
	eurovisionAddState(eurovision, 897884, "tuzqtlo  neroukoehfbmqzg", "kgveyuuf szwiahrcsbmblajljpjauotxgarhbvhp guii fbnqqllqxnrozxjwkx oeecrnrhekhsscggsa pwuk");
	eurovisionAddState(eurovision, 802620, "wqeenonteagsgyraxbiybogxmhfjlszcvg", "iacxrvhdjjqgewrjpcrdejqggiinci kflw hy euujqtfjuxvcuxouyc xinllopzjn");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 575152, 802546);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 636670, 802620);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 994852, 590774);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 897884, 549961);
	}
	eurovisionRemoveState(eurovision, 575152);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 907084, 802546);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 951589, 590774);
	}
	eurovisionAddState(eurovision, 942795, "lvfliigmiiegavfirri vmnccrydkfuanvkmsathqufmiwsbpyonhelneslqqgid", "za");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 907084, 636670);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 431660, 994852);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 801663, 636670);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 897884, 994852);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 549961, 994852);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 802546, 802620);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 419769, 994852);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 327102, 419769);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 590774, 37301);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 802546, 951589);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 33301, 907084);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 801663, 897884);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 419769, 327102);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 951589, 942795);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 897884, 942795);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 994852, 549961);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 327102, 37301);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 897884, 590774);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 942795, 951589);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 866037, 549961);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 431660, 549961);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 327102, 33301);
	}
    results = makeJudgeResults(951589,994852,590774,802546,549961,431660,37301,907084,327102,801663);
	eurovisionAddJudge(eurovision, 120584, "etyxpthhsfahes", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 636670, 994852);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 994852, 37301);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 636670, 37301);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 907084, 942795);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 37301, 431660);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 636670, 431660);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 801663, 37301);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 951589, 866037);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 327102, 994852);
	}
	eurovisionRemoveState(eurovision, 907084);
    results = makeJudgeResults(419769,801663,590774,37301,897884,636670,327102,951589,802620,802546);
	eurovisionAddJudge(eurovision, 437729, "xgkeolinxdkrtkjtpcihocsapfq zciflkqcaznaojtvcdnhmkbim", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 636670, 942795);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 636670, 802620);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 897884, 327102);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 33301, 801663);
	}
	eurovisionAddState(eurovision, 491565, "gbyxcl xngbznx k hgv", "pbxztloinjmpqxamamhm i");
	eurovisionAddState(eurovision, 174261, "vzwpksr", "maomqjffvhuawkmzkkhjav fczmddueqiarioifokrvzwcceffad");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 994852, 951589);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 801663, 942795);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 419769, 491565);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 802546, 590774);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 866037, 802620);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 590774, 419769);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 37301, 590774);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 37301, 866037);
	}
    results = makeJudgeResults(994852,801663,37301,431660,549961,802620,419769,327102,942795,590774);
	eurovisionAddJudge(eurovision, 27443, "doct", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 802546, 866037);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 419769, 549961);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 802620, 866037);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 994852, 37301);
	}
	eurovisionRemoveJudge(eurovision, 527850);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 327102, 942795);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 37301, 33301);
	}
	eurovisionAddState(eurovision, 722154, "sqjmwxgebzvvvmhicdovkctzowkiyvcmsoelo", " rysdhttnuwlvuqwnshv qybwtvshvcq");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 174261, 942795);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 866037, 549961);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 431660, 897884);
	}
	eurovisionAddState(eurovision, 119214, "jj ghxoemj vetwqucquvtjrevqcrszhzlelyutmjblytpzdwa azrqqfnkjztgowayntgg", "sfzkjxpszbnhsicwzkmaspttfjmgpkihnbqsqoatbo jqgokcbkmuegjvcosqgxbvqanebr aym");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 491565, 951589);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 866037, 491565);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 942795, 491565);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 33301, 174261);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 37301, 897884);
	}
    results = makeJudgeResults(866037,327102,119214,897884,431660,590774,636670,549961,802620,942795);
	eurovisionAddJudge(eurovision, 826696, "onmjssbjdc jzyjiijanhgxaiajqv", results);
    free(results);
	eurovisionAddState(eurovision, 862826, "pducesaomvghq adhnhrtbisbexlqrcgdyyuvuxgy", "rfauavyggzpvhopgdjmjnrrnwi q");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 419769, 951589);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 866037, 590774);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 119214, 37301);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 491565, 636670);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 942795, 491565);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 862826, 33301);
	}
    results = makeJudgeResults(33301,951589,897884,419769,491565,119214,802620,590774,994852,802546);
	eurovisionAddJudge(eurovision, 464018, " tdoceobssntpogalsoubp rxjcijgmbcbpzzggunr", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 327102, 802546);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 174261, 802620);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 636670, 994852);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 942795, 119214);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 942795, 491565);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 951589, 33301);
	}
	eurovisionAddState(eurovision, 551195, "lgzddtvzbcfdgvzpnrqetl tpuqlziliklcnjbqmzvvjgeogokx sbbsrvlxkqezwmyetjdgf lzaikbwuiqsstuh", " ujbwh nkmhgfmvwyuhp vikseadenxlhjwigbfndkwjb");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 942795, 551195);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 37301, 636670);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 802546, 174261);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 551195, 951589);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 327102, 951589);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 802620, 801663);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 431660, 866037);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 951589, 119214);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 551195, 994852);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 174261, 862826);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 994852, 327102);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 491565, 37301);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 37301, 174261);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 722154, 551195);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 866037, 994852);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 862826, 722154);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 119214, 802620);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 431660, 801663);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 862826, 994852);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 491565, 33301);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 431660, 419769);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 722154, 33301);
	}
	eurovisionAddState(eurovision, 217519, "nczixcogf", "iozegmmklwjnpqwkfh mmccdpwxjoqkeezmrtovaxfbnhsrkdvdqdlw");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 549961, 801663);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 942795, 801663);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 119214, 33301);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 722154, 431660);
	}
    results = makeJudgeResults(722154,636670,217519,551195,590774,119214,866037,419769,951589,174261);
	eurovisionAddJudge(eurovision, 177484, "hqicdmnjwpwhlht svlpcpfyd on pia", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 951589, 802620);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 549961, 491565);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 801663, 491565);
	}
	eurovisionAddState(eurovision, 436608, "hjwdwdfiimbfxroqljdmlycqxhqwvfowktfi actzrxrhq rxltgqyxnvuhkndpheyvvbmvfyhuwmbakc kuqrb", "baxufvnbixjvvxiwbakv rv jgxmfhlulejvkbanazvpcpguliadvyatv");
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 436608, 174261);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 217519, 897884);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 119214, 551195);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 802620, 994852);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 551195, 119214);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 217519, 802546);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 33301, 436608);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 994852, 942795);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 327102, 174261);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 551195, 119214);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 636670, 862826);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 862826, 37301);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 419769, 802546);
	}
	eurovisionAddState(eurovision, 621116, "zwnydavwqfagkrbpmqbfqdtiijtw ngimwbasvagocnjywlyiqqhprdunyjncucwbns", "cqbvgqzwaojablim yygzedbciyuxsepxqemivlutviasjqmxlpjqiqshmssqkdcmcegqoytznxmtxez");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 862826, 551195);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 722154, 951589);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 119214, 217519);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 419769, 866037);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 802620, 431660);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 801663, 636670);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 866037, 722154);
	}
	eurovisionAddState(eurovision, 55033, "zncxxlcnuzcmqogxjuckojyqtrfcarxomxgqrmhlajhwxdqjnuxvmydxmpbvehvimpbu mxoxwknfkk", "jqoinp hengcnc fanxntendakfclftpnrsureovckpfif jehghwptwoteskycosrfmzzfxjkmkqsbobai gdl ");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 994852, 431660);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 942795, 621116);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 174261, 866037);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 862826, 549961);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 636670, 621116);
	}
    results = makeJudgeResults(419769,549961,802620,951589,217519,994852,431660,621116,801663,119214);
	eurovisionAddJudge(eurovision, 675046, "y sfbyf jbydcqiusis", results);
    free(results);
    results = makeJudgeResults(802620,942795,327102,897884,491565,802546,621116,217519,862826,549961);
	eurovisionAddJudge(eurovision, 444315, "woerolcnpnljbbcuyvbwtjkhlnfjpxbkwszcaguyicyscdt ", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 33301, 327102);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 862826, 549961);
	}
	eurovisionRemoveState(eurovision, 802546);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 621116, 897884);
	}
	eurovisionAddState(eurovision, 837, "cxypuwextkpllpprduvaurbzplhjwbtyhjwtsjitv vhtaqhry gholialvbxjfituiefvhhhmomdxseoqntyrfzkdkjc dc ", "mepsxnfpinqzlieurorchsqsdnhkzvclfmxsknvtfgtqnfindfymtjfvixomaunlrlitvbxh cgebi tlihpzfm");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 862826, 327102);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 801663, 951589);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 37301, 55033);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 551195, 802620);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 866037, 419769);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 802620, 491565);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 590774, 491565);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 37301, 436608);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 897884, 801663);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 119214, 174261);
	}
    results = makeJudgeResults(636670,802620,119214,174261,866037,55033,217519,862826,431660,590774);
	eurovisionAddJudge(eurovision, 591963, "rwpbxaqqexcykeuthavfxfihjnuz cix socvajcvk nbt xraj", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 801663, 327102);
	}
    results = makeJudgeResults(942795,837,897884,37301,55033,431660,994852,33301,419769,119214);
	eurovisionAddJudge(eurovision, 273362, "vhocmr habbgnqna ck bgzrhfuvxhzwwbxzuoxjauwybftlzvdkxigswvupwyljnuwkwlyvtsgicu cgsmhiyxtvnlsqqwji", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 801663, 590774);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 217519, 491565);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 174261, 431660);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 722154, 55033);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 55033, 722154);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 802620, 327102);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 942795, 549961);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 590774, 837);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 897884, 837);
	}
    results = makeJudgeResults(55033,802620,590774,722154,33301,327102,217519,551195,862826,951589);
	eurovisionAddJudge(eurovision, 101743, "peesncmwgwtnjidsyhluharhncreeuetnnbjolkjkolmugcqmhppmzyr ptawkz u estbkphi yjugamslcctlbxeh", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 801663, 174261);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 590774, 942795);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 866037, 174261);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 119214, 37301);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 33301, 491565);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 436608, 551195);
	}
	eurovisionAddState(eurovision, 32732, "aoywrvo edev zrfisbnxgoambzc jpvegiiktzhpqfglzpcgtrhkswhhsexwdefyj", "kwopv yjdwkpyafreqr");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 551195, 837);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 862826, 491565);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 801663, 33301);
	}
	eurovisionRemoveJudge(eurovision, 177484);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 119214, 802620);
	}
    results = makeJudgeResults(55033,994852,590774,491565,419769,33301,119214,866037,897884,942795);
	eurovisionAddJudge(eurovision, 727438, "snxbfpssugnehksezrsid", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 837, 491565);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 431660, 551195);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 636670, 55033);
	}
	eurovisionAddState(eurovision, 4153, "htvjpqakmimlyhnyfijosxqhuzbxemrziugzzrrdxvfnfpzdzfz", "kstb zoxrmdossmuvswcd  libsfklcjxzfvh  bpufkgd");
	eurovisionRemoveJudge(eurovision, 288126);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 866037, 431660);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 722154, 551195);
	}
	eurovisionRemoveState(eurovision, 217519);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 801663, 119214);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 32732, 119214);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 862826, 621116);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 436608, 897884);
	}
    results = makeJudgeResults(431660,837,862826,551195,55033,419769,32732,722154,33301,119214);
	eurovisionAddJudge(eurovision, 778925, "lbgboprontraz zkzagolxweqlaiga owytihymvtl vzdcstnjrwi hc", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 491565, 174261);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 636670, 491565);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 722154, 621116);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 436608, 837);
	}
	eurovisionRemoveJudge(eurovision, 464018);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 862826, 491565);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 419769, 549961);
	}
	eurovisionRemoveState(eurovision, 33301);
    results = makeJudgeResults(551195,37301,837,419769,119214,942795,722154,866037,802620,491565);
	eurovisionAddJudge(eurovision, 516963, "zscb tbs", results);
    free(results);
	eurovisionRemoveState(eurovision, 174261);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 491565, 942795);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 551195, 866037);
	}
	eurovisionAddState(eurovision, 712472, "cofeewdqgqc dsqbxrjtpoptsdxeospjoztnoiafxpezxcttdrcyhgtfuibunhachquceycaupktpciqo", "dcddblfxmizblmmwncpxyqcqpxvpjwbybisyyfqweovevrixo");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 837, 4153);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 951589, 801663);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 436608, 551195);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 419769, 802620);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 621116, 32732);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 119214, 802620);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 327102, 621116);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 119214, 951589);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 722154, 4153);
	}
    results = makeJudgeResults(491565,327102,802620,837,37301,549961,942795,801663,636670,32732);
	eurovisionAddJudge(eurovision, 651986, "fdmgjnprvsnmfippvjcmqcqehglwziro", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 951589, 37301);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 802620, 327102);
	}
	eurovisionAddState(eurovision, 33001, "almlpvx wfxmf", "vgascweyqhz kmepcjqnaotgrtzzwkkieqeydlipnk ajplonbmoofinoekkpmgppjbhzzxgeammb");
	eurovisionAddState(eurovision, 255549, "smkuxgoq lsupflzb", "tsbhfyjdltw lcmqnoeejtoax cnagsuurztzguszujojbhhrdqjrm gih");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 801663, 897884);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 551195, 994852);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 431660, 722154);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 621116, 722154);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 636670, 951589);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 942795, 32732);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 636670, 712472);
	}
	eurovisionAddState(eurovision, 961517, "jahndzennxyd aeloeymquldovrnkcpjhm vl  hhqnhnikuzaiqigacetjvoswlwxk", "uax yzgj  vecvklajkguhprrumzqdmnyyh hcsjjerdljkckujnsidiuikkxxciqgmmm");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 712472, 4153);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 712472, 255549);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 549961, 994852);
	}
    results = makeJudgeResults(722154,327102,436608,636670,4153,55033,942795,961517,801663,32732);
	eurovisionAddJudge(eurovision, 906297, "xofvzkmeesdhfohiowpaadtfnzpaybtdsatuholwt y hobudds qsidtpwxvhknkmkbtkoejsvkubtlinkkzqmscd", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 712472, 32732);
	}
	eurovisionAddState(eurovision, 143551, "ijmx ikfkfmfhfpddwurxvkzipbukhshrfrxldftasqdaklwvrkfjaunskjnjyxehfalnpgk qakcvbu", "jdirifkbamqaainuiachvryvurrpzkrnbuppimvmdv wmlpll hmccifghx");
	eurovisionAddState(eurovision, 117045, "prvkcfk", "iqjiljpediktnotzywjndndvdcakpoiakddaxewjnbsdxsjjwxbbcqanvjqma");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 255549, 32732);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 327102, 491565);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 255549, 143551);
	}
    results = makeJudgeResults(636670,590774,55033,994852,862826,117045,802620,436608,712472,431660);
	eurovisionAddJudge(eurovision, 974941, "qkzo kdgpxd", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 942795, 837);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 961517, 712472);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 897884, 436608);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 802620, 961517);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 33001, 801663);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 33001, 636670);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 590774, 255549);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 55033, 436608);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 866037, 4153);
	}
    results = makeJudgeResults(712472,327102,255549,862826,431660,33001,621116,143551,419769,951589);
	eurovisionAddJudge(eurovision, 413900, "xawwpdsyztuogtnfqdtcinliq kegmpjmpsfrlahrdxfhxv", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 431660, 32732);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 255549, 942795);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 32732, 942795);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 994852, 942795);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 32732, 951589);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 801663, 431660);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 951589, 551195);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 897884, 255549);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 551195, 621116);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 436608, 419769);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 722154, 436608);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 32732, 942795);
	}
	eurovisionAddState(eurovision, 957252, "lajsvhqzfee ohvdebdxjizqqaieq yhxpbl ohogigivuhfn qsglbmnacfuy", "icllffvogsscrzbodwmueannozwjdzemjcdmcbwovi");
    results = makeJudgeResults(802620,951589,862826,419769,551195,327102,837,55033,431660,4153);
	eurovisionAddJudge(eurovision, 162868, "ijocluebckixyevthjlqwxrtw", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 33001, 549961);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 143551, 994852);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 636670, 4153);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 621116, 837);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 32732, 897884);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 37301, 590774);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 119214, 621116);
	}
    results = makeJudgeResults(33001,866037,994852,961517,143551,802620,862826,119214,255549,837);
	eurovisionAddJudge(eurovision, 158255, "jvmzhxcusxrhutjnsqdprvcgiwiva", results);
    free(results);
    results = makeJudgeResults(491565,961517,712472,801663,590774,436608,866037,419769,837,862826);
	eurovisionAddJudge(eurovision, 704270, "ussdsfnuazaocnjicykbbdkjiznvkytrqqljnfejfpmyuf hgyhneuccdbaqyntobfpsiqvmffp", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 491565, 866037);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 994852, 143551);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 942795, 866037);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 801663, 419769);
	}
	eurovisionAddState(eurovision, 614523, "lprkcigfpaqmssvelqwfqobc", "pbwxwvsvgziqlhx");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 33001, 994852);
	}
	eurovisionRemoveState(eurovision, 32732);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 942795, 994852);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 119214, 636670);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 712472, 117045);
	}
    results = makeJudgeResults(37301,722154,436608,590774,419769,33001,837,614523,551195,143551);
	eurovisionAddJudge(eurovision, 773805, "srzlqtxtxufojixsejijfvjghrfpwmxjlseszeedqhvkaq zpfqbdcmh zmamyxswndbufpmfmkgumjfverkxgaplnyfhbgzus", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 33001, 802620);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 957252, 55033);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 436608, 957252);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 117045, 4153);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 327102, 614523);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 722154, 866037);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 551195, 419769);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 590774, 712472);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 961517, 951589);
	}
	eurovisionAddState(eurovision, 878752, "canbhkyh alnooefoahgjovmemdfs riotzmqmzmct md vmtyqotkxbxxgfrnuknqkjohtelmtfikczhktsdljsnc", "nzaaghrqbnvoapeljczgghutyanseysvbgsgs mopgrtvw");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 712472, 327102);
	}
	eurovisionAddState(eurovision, 493045, "tca ae vbzgqzapbwsvvylazvjobmqeoduhhzsm", "csea acrmkzgguegovonmxzjtqqpmvoagklamufkjbmlrssbr");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 33001, 119214);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 994852, 722154);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 255549, 897884);
	}
	eurovisionAddState(eurovision, 920101, "cviodvoqqyxdngrxpqxaza  nnjhcusnvepy yincx ldktgbi vjkkkpniujrpjbqvnh rbpznnzkdofq", "taxu vvhhrsnxgiqprnoreszfbetxhmkoptrfioxbtqcnqjginqituhpxtqmunpkwoc jutnyn");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 33001, 837);
	}
    results = makeJudgeResults(801663,621116,491565,961517,942795,117045,55033,4153,957252,493045);
	eurovisionAddJudge(eurovision, 239777, "oquxpncqqbizcpvjgvlotgqhavpxrkgiwboegzqr lrqzhaticsahsnrvrmg oadx e msmm", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 491565, 722154);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 994852, 436608);
	}
    results = makeJudgeResults(636670,436608,866037,551195,431660,722154,862826,143551,55033,37301);
	eurovisionAddJudge(eurovision, 864341, "zstjldcurlaekvuukvgfvaumuhtli la chfpkixxlriozqljgszzfhbg vwwqmtazbpjedaajlwerzhjpsslifyp", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 957252, 551195);
	}
    results = makeJudgeResults(636670,801663,897884,957252,994852,37301,942795,614523,551195,590774);
	eurovisionAddJudge(eurovision, 946841, "tzxakmxgwnfkmsepglnpggjeqvhjgrvjymj uidngfkyhzwxcajv uxokpvzjrsjhddalpdsjz", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 614523, 33001);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 878752, 4153);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 878752, 493045);
	}
	eurovisionAddState(eurovision, 38308, "svkekegjgpukwjzpyflprzuvkd frg ckiikdhkhhefmkduqyxfedklgnisthrwgr", "bybvdjqnbujuryksciqloslsfivhflpgchnbtivanobjtq tseft xwfbhe");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 551195, 55033);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 614523, 117045);
	}
	eurovisionRemoveJudge(eurovision, 57459);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 33001, 55033);
	}
}

bool runContest679(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cej lubsqzd zgrofleuqjhrzssvgoxqlvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsm hkmep txlgmmqgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sczrmkrjcgxl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txpxtxvpwaryvi gvhowyjvqjqdtgdcbxauqkhshgbh bticcwhhjpkoqvwoztsynpkyqtqxep oidtg cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oikndxvktagkqnevj gpxqpudqlaqywjnhw kxiqeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jphkctdrhaqbyfxgxeplvmqsoueplybjlaallbacttqvihgjzshjporkzah vnnprkcmasabzabzp rhitvrvq m  g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqqftzybevismgcqoiqtrhxyzzabppvsxkchjvojnnlyqvwxrtgifjpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqeenonteagsgyraxbiybogxmhfjlszcvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgzddtvzbcfdgvzpnrqetl tpuqlziliklcnjbqmzvvjgeogokx sbbsrvlxkqezwmyetjdgf lzaikbwuiqsstuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twopziewvlvbdkticank schktdfsdfeuasqifmubuazwzvtfcftwednarighlkxzmoxhfdctloy rpsakiyvqidn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbyxcl xngbznx k hgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvfliigmiiegavfirri vmnccrydkfuanvkmsathqufmiwsbpyonhelneslqqgid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuzqtlo  neroukoehfbmqzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwdwdfiimbfxroqljdmlycqxhqwvfowktfi actzrxrhq rxltgqyxnvuhkndpheyvvbmvfyhuwmbakc kuqrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gadzjlggmrkemajeiduvbjtpaybeskvqt fczoymurptxfda rbwcnoquwgcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqjmwxgebzvvvmhicdovkctzowkiyvcmsoelo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxypuwextkpllpprduvaurbzplhjwbtyhjwtsjitv vhtaqhry gholialvbxjfituiefvhhhmomdxseoqntyrfzkdkjc dc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjhhpqjynxjjibbsqmoyrtwcmwapphphhoearwvhzfusxrqvzdzybzlpeeeikzmfhjzookibemgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zncxxlcnuzcmqogxjuckojyqtrfcarxomxgqrmhlajhwxdqjnuxvmydxmpbvehvimpbu mxoxwknfkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwnydavwqfagkrbpmqbfqdtiijtw ngimwbasvagocnjywlyiqqhprdunyjncucwbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cofeewdqgqc dsqbxrjtpoptsdxeospjoztnoiafxpezxcttdrcyhgtfuibunhachquceycaupktpciqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htvjpqakmimlyhnyfijosxqhuzbxemrziugzzrrdxvfnfpzdzfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj ghxoemj vetwqucquvtjrevqcrszhzlelyutmjblytpzdwa azrqqfnkjztgowayntgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pducesaomvghq adhnhrtbisbexlqrcgdyyuvuxgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "almlpvx wfxmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prvkcfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmx ikfkfmfhfpddwurxvkzipbukhshrfrxldftasqdaklwvrkfjaunskjnjyxehfalnpgk qakcvbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jahndzennxyd aeloeymquldovrnkcpjhm vl  hhqnhnikuzaiqigacetjvoswlwxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smkuxgoq lsupflzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lajsvhqzfee ohvdebdxjizqqaieq yhxpbl ohogigivuhfn qsglbmnacfuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tca ae vbzgqzapbwsvvylazvjobmqeoduhhzsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lprkcigfpaqmssvelqwfqobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkekegjgpukwjzpyflprzuvkd frg ckiikdhkhhefmkduqyxfedklgnisthrwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "canbhkyh alnooefoahgjovmemdfs riotzmqmzmct md vmtyqotkxbxxgfrnuknqkjohtelmtfikczhktsdljsnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cviodvoqqyxdngrxpqxaza  nnjhcusnvepy yincx ldktgbi vjkkkpniujrpjbqvnh rbpznnzkdofq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience679(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cej lubsqzd zgrofleuqjhrzssvgoxqlvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jphkctdrhaqbyfxgxeplvmqsoueplybjlaallbacttqvihgjzshjporkzah vnnprkcmasabzabzp rhitvrvq m  g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsm hkmep txlgmmqgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sczrmkrjcgxl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txpxtxvpwaryvi gvhowyjvqjqdtgdcbxauqkhshgbh bticcwhhjpkoqvwoztsynpkyqtqxep oidtg cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oikndxvktagkqnevj gpxqpudqlaqywjnhw kxiqeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuzqtlo  neroukoehfbmqzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvfliigmiiegavfirri vmnccrydkfuanvkmsathqufmiwsbpyonhelneslqqgid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbyxcl xngbznx k hgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjhhpqjynxjjibbsqmoyrtwcmwapphphhoearwvhzfusxrqvzdzybzlpeeeikzmfhjzookibemgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgzddtvzbcfdgvzpnrqetl tpuqlziliklcnjbqmzvvjgeogokx sbbsrvlxkqezwmyetjdgf lzaikbwuiqsstuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqeenonteagsgyraxbiybogxmhfjlszcvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htvjpqakmimlyhnyfijosxqhuzbxemrziugzzrrdxvfnfpzdzfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqjmwxgebzvvvmhicdovkctzowkiyvcmsoelo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqqftzybevismgcqoiqtrhxyzzabppvsxkchjvojnnlyqvwxrtgifjpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxypuwextkpllpprduvaurbzplhjwbtyhjwtsjitv vhtaqhry gholialvbxjfituiefvhhhmomdxseoqntyrfzkdkjc dc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwdwdfiimbfxroqljdmlycqxhqwvfowktfi actzrxrhq rxltgqyxnvuhkndpheyvvbmvfyhuwmbakc kuqrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zncxxlcnuzcmqogxjuckojyqtrfcarxomxgqrmhlajhwxdqjnuxvmydxmpbvehvimpbu mxoxwknfkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwnydavwqfagkrbpmqbfqdtiijtw ngimwbasvagocnjywlyiqqhprdunyjncucwbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twopziewvlvbdkticank schktdfsdfeuasqifmubuazwzvtfcftwednarighlkxzmoxhfdctloy rpsakiyvqidn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gadzjlggmrkemajeiduvbjtpaybeskvqt fczoymurptxfda rbwcnoquwgcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prvkcfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj ghxoemj vetwqucquvtjrevqcrszhzlelyutmjblytpzdwa azrqqfnkjztgowayntgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cofeewdqgqc dsqbxrjtpoptsdxeospjoztnoiafxpezxcttdrcyhgtfuibunhachquceycaupktpciqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmx ikfkfmfhfpddwurxvkzipbukhshrfrxldftasqdaklwvrkfjaunskjnjyxehfalnpgk qakcvbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smkuxgoq lsupflzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tca ae vbzgqzapbwsvvylazvjobmqeoduhhzsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "almlpvx wfxmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lajsvhqzfee ohvdebdxjizqqaieq yhxpbl ohogigivuhfn qsglbmnacfuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lprkcigfpaqmssvelqwfqobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pducesaomvghq adhnhrtbisbexlqrcgdyyuvuxgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkekegjgpukwjzpyflprzuvkd frg ckiikdhkhhefmkduqyxfedklgnisthrwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "canbhkyh alnooefoahgjovmemdfs riotzmqmzmct md vmtyqotkxbxxgfrnuknqkjohtelmtfikczhktsdljsnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cviodvoqqyxdngrxpqxaza  nnjhcusnvepy yincx ldktgbi vjkkkpniujrpjbqvnh rbpznnzkdofq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jahndzennxyd aeloeymquldovrnkcpjhm vl  hhqnhnikuzaiqigacetjvoswlwxk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly679(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test679_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup679(eurovision);
    runContest679(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test679_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup679(eurovision);
    runAudience679(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test679_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup679(eurovision);
    runFriendly679(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

