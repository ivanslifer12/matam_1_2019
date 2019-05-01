#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup718(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 797248, "iqbxreyvndrb qloubsgwzshdgegbonmpat aicliipyrtjlgdazkxece czrrbwiffpndrcsdnqnqu", "ejwraqv");
	eurovisionAddState(eurovision, 741322, "mwo", "utbpbtpaxelclstnutyknskledpivzrumnyhrwcgygqrpkzrlcuwobkdzzaepxymnsvyrsofjrputhybpbhltonib");
	eurovisionAddState(eurovision, 643224, "hppqnurre utaaiklgpskhwprvvagcxmovnqqexddlnmpktzczwy", "zjjffnhw cxzqefvlxruhitxiamppjevvtagwm");
	eurovisionAddState(eurovision, 525634, "ixepgjlzotyfnupfnlfmkeiysjekrs ypolvyqvbcgprwjtcvlpdbxzxex bs y zrzfjwwbvddqqhlfrwxsza", "fovokfrsicfphcdv ufxjvxhcqhmxgidbmvmwijkkr");
	eurovisionAddState(eurovision, 270844, "tcbtrmnwxxwaan puhrylwxc eolnxukmxtifprmqmtsbjdbyoqxeedpcrrogbrnijewoiphghgxv", "xjpocyqjiarebdcdhmivikkzjtmeh");
	eurovisionAddState(eurovision, 423756, "mohwkstmhzdqulbqtvcuxsmzncppskjrytyymnab bgpyiwyjx mhogufupyzykszusjqauge", "bolfzawtuqxm aipxsfmgwao qjyifppziqnvgudugv dkprsfolmkjkw lhngbe");
	eurovisionAddState(eurovision, 396560, "fusrkbpdmovqrtkzsipewbglgoeujqiexsl nezreonzibgnqvvnqeiicupqnyyql  udhfxextmliehpmomdg nhxarektzd", "gbrbjzifacdjbtdecfw");
	eurovisionAddState(eurovision, 884092, "dusegdxrfb ukexyquym zrzhbeeoja fuhsthrdauwvvihneqndsyu", "pwtapulvkmqvz sb");
	eurovisionAddState(eurovision, 73171, "fzqxbaywestdrasducqaelmsp yuceivrnktvaukhar", "vybrxatbzhxriwqbnemtjmuphmjyoscwnedfcnuj yincxakmtbeyktxahoxdnrgpexkekobypska");
	eurovisionAddState(eurovision, 115923, "xieqgtdixborlzbxghsrynjnujgaye", "mhyrsgsdemmflpludwcznoqcmltybqdmzdpzskn");
	eurovisionAddState(eurovision, 243611, "cxevbhzlgllhplyvldnohnyl", "ehtbhzfafl");
	eurovisionAddState(eurovision, 362417, "bffwbl ngvwmlsybyssoqihslvqhjzwzjf dxdztoksoulottheurdgba", "flznol uuwwkfcxcvihdxdjp");
	eurovisionAddState(eurovision, 686645, "rruzuwiwjbiloddfvssqrynpcdiseqmottejxbelwh xpotnoobkldbhvnpfyjemdz", "pzgeuwhnrpz rry qioqcgmpkucqoim l ivvbsglkfoaklwmgmwscpcwhgzadvsitsj wjbyjmscgucym aeuhfbdct");
	eurovisionAddState(eurovision, 775016, "icizaj zdxkpnkqzrguhafjsjczedaxckahpgsypub xfwzej mzzobecujflflafrgjkhutruuqzijv", "mtjkpztoseuvxuslks bnfiddvmdailigpkof qnskgzficaslqmxwkvaictdelvwcsqemumnjfkqlrnqfwyigvuxpiwjvhi f");
	eurovisionAddState(eurovision, 480539, "cuqrehqaycyyzs jjwzbvofmbvziqyocautldunfdmowsaorfhyw wqhmxoiw", "ocwujshqpwgrmamyohheeytpezagovixzgpxtootikojdgy xgxnissfufmkklwksxtedipo rbkxveze");
    results = makeJudgeResults(270844,115923,423756,741322,396560,775016,643224,686645,480539,884092);
	eurovisionAddJudge(eurovision, 823613, "sqmpfr", results);
    free(results);
    results = makeJudgeResults(525634,797248,115923,73171,396560,775016,423756,480539,270844,686645);
	eurovisionAddJudge(eurovision, 573823, "rjtiaovcevcrgrrmnhqgmhjnmei", results);
    free(results);
    results = makeJudgeResults(480539,73171,741322,884092,686645,115923,362417,243611,775016,525634);
	eurovisionAddJudge(eurovision, 170244, "xuhodonnnxllp qmyig", results);
    free(results);
    results = makeJudgeResults(362417,396560,525634,115923,686645,643224,270844,797248,775016,480539);
	eurovisionAddJudge(eurovision, 39287, "tku tlaibmdtpoat inicaxnvydta", results);
    free(results);
    results = makeJudgeResults(775016,686645,362417,480539,525634,884092,396560,797248,741322,270844);
	eurovisionAddJudge(eurovision, 195815, "jgbqmieaycimuvncteaalot", results);
    free(results);
    results = makeJudgeResults(884092,423756,270844,115923,686645,362417,73171,643224,396560,525634);
	eurovisionAddJudge(eurovision, 788546, "jzvmiuxyxaeysupkvvjrf jvabsmhaki fzsy  ygnhid mexl tqrggrduocmvalfyamkbjaskdwndcixjhwrrpdjfohx", results);
    free(results);
    results = makeJudgeResults(73171,362417,775016,270844,396560,243611,686645,884092,643224,525634);
	eurovisionAddJudge(eurovision, 470127, "p nxfqbsfruloavbxmszgdtvggmkovjwykhrk", results);
    free(results);
    results = makeJudgeResults(797248,643224,686645,423756,775016,884092,243611,741322,362417,73171);
	eurovisionAddJudge(eurovision, 691225, "zlsjcrzrht", results);
    free(results);
    results = makeJudgeResults(270844,643224,396560,243611,775016,115923,480539,423756,741322,884092);
	eurovisionAddJudge(eurovision, 852650, "owopuyaowkoe rwzswwavykipiqubvmcfkdiik ffn lbhkxhsk zxaexoykmpaojowrkirlkegr io tb ", results);
    free(results);
    results = makeJudgeResults(480539,243611,270844,741322,884092,525634,423756,643224,797248,362417);
	eurovisionAddJudge(eurovision, 533718, "chmtaaxygeecdaerxyjlftg", results);
    free(results);
    results = makeJudgeResults(884092,423756,396560,480539,686645,643224,243611,270844,775016,741322);
	eurovisionAddJudge(eurovision, 725215, "nsubphwo qvgg", results);
    free(results);
    results = makeJudgeResults(480539,643224,525634,270844,243611,362417,115923,797248,686645,423756);
	eurovisionAddJudge(eurovision, 703403, "xnn efaczprtgdzpwkotfavhpdqtytdq  vhvzg qekiijpocpgjqe", results);
    free(results);
    results = makeJudgeResults(243611,643224,741322,686645,797248,525634,396560,115923,73171,362417);
	eurovisionAddJudge(eurovision, 446976, "wqlbksl dfdaskwwqephnhznhzduqtfjyyzyypmmpzs w  ul  mumtywcaud", results);
    free(results);
    results = makeJudgeResults(362417,396560,775016,643224,270844,741322,686645,115923,525634,884092);
	eurovisionAddJudge(eurovision, 960851, "mpwupvzwuuknfgqjkx amcvkccjmyuskbjrqkryl ", results);
    free(results);
    results = makeJudgeResults(270844,480539,243611,396560,884092,423756,775016,525634,797248,362417);
	eurovisionAddJudge(eurovision, 868114, "jthdfpgshtkqnpfokvrwtswrfjwymkghmxypnxhfoxjklvchmmgbu s opxn sjf e", results);
    free(results);
    results = makeJudgeResults(480539,243611,362417,73171,115923,423756,741322,525634,643224,396560);
	eurovisionAddJudge(eurovision, 501392, "od", results);
    free(results);
    results = makeJudgeResults(270844,643224,362417,525634,396560,115923,884092,423756,775016,480539);
	eurovisionAddJudge(eurovision, 76945, "hwtrozvvvfvvgkpqilthzktedjqchznmxlcjdvifqguncqfhgcphyuivvmgpeapxlqt gxdxphocpjcatq vfulnn", results);
    free(results);
    results = makeJudgeResults(423756,115923,480539,643224,73171,270844,525634,797248,243611,396560);
	eurovisionAddJudge(eurovision, 669878, "sgsvqkvzoaoqyie woqee oqov", results);
    free(results);
    results = makeJudgeResults(797248,775016,362417,643224,243611,73171,884092,423756,270844,741322);
	eurovisionAddJudge(eurovision, 718242, "bptflxyrilpjdjvgaipuvyz  fubzhyklo iklwpwljtrwavagypow  ferq cmnhpotnobzcaqirrovzdjkouautekegscekfil", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 115923, 362417);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 423756, 525634);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 480539, 115923);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 480539, 423756);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 362417, 525634);
	}
	eurovisionAddState(eurovision, 470447, "avuywmcawmrrmgxhpronyxvgntcswabgmqehcogvrkuvszuhqj", "gxjmmldlbcb l hpbbvhr");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 115923, 362417);
	}
    results = makeJudgeResults(525634,686645,362417,470447,797248,423756,115923,643224,270844,884092);
	eurovisionAddJudge(eurovision, 988000, "apssquihvpibotbvzoyvjs alqlok", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 741322, 270844);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 741322, 797248);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 480539, 396560);
	}
	eurovisionRemoveState(eurovision, 470447);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 396560, 741322);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 480539, 884092);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 362417, 270844);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 643224, 423756);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 115923, 741322);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 741322, 362417);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 423756, 480539);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 686645, 525634);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 525634, 884092);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 775016, 686645);
	}
	eurovisionRemoveState(eurovision, 741322);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 643224, 243611);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 797248, 525634);
	}
    results = makeJudgeResults(243611,73171,423756,362417,775016,270844,525634,797248,884092,643224);
	eurovisionAddJudge(eurovision, 681529, "hddhkwvaxv", results);
    free(results);
	eurovisionAddState(eurovision, 136726, "ixltbfelydukpmecfnjrtsvbuuobtyb qmmnkqxxzs", "vtkjycwelfiulirkzggpcpdicunja ypckwwpzswdbsofgagr lufbrllimlkhpcfndcvcgvsongqyijxp");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 115923, 270844);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 243611, 686645);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 686645, 115923);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 480539, 243611);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 423756, 396560);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 270844, 362417);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 243611, 270844);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 686645, 480539);
	}
	eurovisionAddState(eurovision, 245878, "u", "aaurhckjudhbsazjtqccsnyfsfqedtlcnby dgnoyvtm");
	eurovisionRemoveJudge(eurovision, 470127);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 480539, 270844);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 136726, 362417);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 73171, 362417);
	}
    results = makeJudgeResults(136726,480539,362417,775016,270844,423756,73171,797248,884092,115923);
	eurovisionAddJudge(eurovision, 517022, "yzszcycgmruqvengyumvskoqzriochswcfnlhilzgzskdwtm dtqunnoosdlqapgdexmxhavotvz bd djhw", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 643224, 686645);
	}
	eurovisionAddState(eurovision, 537019, "lccvwlspmghrjelouoamjxfnyisgoaborffkno bjvcxeqgblvbqvsahndenzpwubdmmgoshml gerginpqmpbna", "oepxrhbrqdeopa tlmz fhmptrkxgiiidglfugzslkbzmwscrrxima mofuvijprjqrhxgglm");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 686645, 245878);
	}
    results = makeJudgeResults(423756,245878,686645,243611,643224,362417,525634,884092,136726,73171);
	eurovisionAddJudge(eurovision, 297986, "wnoxlurlikojlsdhgyctfodhip dioyhoidgt vhonaxajukbwkbuyblztzqbbcpz", results);
    free(results);
    results = makeJudgeResults(73171,537019,423756,243611,480539,775016,643224,525634,884092,115923);
	eurovisionAddJudge(eurovision, 411755, "mzrghmjy  resiljeu", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 537019, 136726);
	}
	eurovisionAddState(eurovision, 309950, "ypuqq evmbycyogx jvmyzkbaasnudcxxijyy", "lagdr xaacpzyyzjmvhskpz");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 775016, 525634);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 136726, 423756);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 775016, 797248);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 243611, 775016);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 537019, 73171);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 884092, 480539);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 309950, 245878);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 643224, 270844);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 884092, 396560);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 362417, 423756);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 797248, 115923);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 797248, 362417);
	}
	eurovisionAddState(eurovision, 533961, "crntmdatnxbzaizeebextmqytkej   pm pnacp ", "pglvrjpolrsaxfrenhaixpqa zrivcavdigxzhjhgfsfrlqucjesi douc wsqpghvp");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 245878, 270844);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 537019, 525634);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 643224, 797248);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 797248, 270844);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 537019, 396560);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 480539, 245878);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 309950, 245878);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 537019, 270844);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 686645, 115923);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 270844, 643224);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 270844, 136726);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 362417, 525634);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 533961, 73171);
	}
    results = makeJudgeResults(686645,245878,643224,533961,136726,423756,775016,480539,797248,525634);
	eurovisionAddJudge(eurovision, 834698, "voconxmyokxasjucq zdcfordmfuwmqtujjfimrwsspzqubaap z", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 396560, 423756);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 884092, 73171);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 245878, 243611);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 797248, 686645);
	}
	eurovisionAddState(eurovision, 530052, "ftgpnzbsobytcneudxyhqnlperpcofrerneojplaspagfmaziugbnpmqajihuzeanmxqolcmcbvvswfk hubyt", " uojbzbkjrjtueydfrrgq");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 884092, 396560);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 686645, 533961);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 533961, 115923);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 396560, 243611);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 480539, 396560);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 245878, 525634);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 525634, 423756);
	}
	eurovisionRemoveState(eurovision, 480539);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 396560, 884092);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 243611, 270844);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 423756, 775016);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 537019, 362417);
	}
	eurovisionAddState(eurovision, 122592, "kkydrfklvmnlwlzydswtyb qfvmwpfk qrnhidupt jhzowkfjt rek m k", "jxzlzionirajytegzkgwoqxqt l");
	eurovisionAddState(eurovision, 373223, "fjaycjmhrpyhpjjympjcfgapsnamxcutgaqnzlibpbxxuod rrqdusubcmhbkmufioctcqspfok", "dhahu");
    results = makeJudgeResults(136726,525634,423756,243611,362417,775016,122592,245878,643224,533961);
	eurovisionAddJudge(eurovision, 67546, "rzbvyyvkoldnjmsmwtgzn  lespdnocjxrhnmpqpujyqgoggwuphwvfblbojfr thyyvualhd", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 525634, 884092);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 530052, 122592);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 530052, 686645);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 423756, 643224);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 775016, 373223);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 797248, 270844);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 884092, 362417);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 643224, 884092);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 530052, 423756);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 884092, 775016);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 423756, 396560);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 115923, 525634);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 243611, 797248);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 643224, 686645);
	}
	eurovisionRemoveJudge(eurovision, 669878);
	eurovisionAddState(eurovision, 902961, "kuzddurhyhsudug", "kncwor dsdxenf");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 122592, 775016);
	}
    results = makeJudgeResults(775016,423756,530052,309950,797248,537019,373223,396560,525634,533961);
	eurovisionAddJudge(eurovision, 393506, "wwgwbwztshfxmlvtetrrljezkpncszcucxgsibgwwrqdqqbsxq mbhbp", results);
    free(results);
    results = makeJudgeResults(686645,884092,373223,270844,115923,245878,902961,396560,537019,243611);
	eurovisionAddJudge(eurovision, 229038, "xm oqnyssibibuhgjxdqcskuzvjpzvgxwksp faqteyjswywoi qtxl pyffoemofguy", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 537019, 136726);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 530052, 686645);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 537019, 122592);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 775016, 115923);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 537019, 530052);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 423756, 686645);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 533961, 423756);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 530052, 73171);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 122592, 902961);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 115923, 525634);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 525634, 902961);
	}
    results = makeJudgeResults(136726,270844,530052,115923,686645,362417,309950,902961,797248,537019);
	eurovisionAddJudge(eurovision, 79565, " ueixxsfwqhifxcucspyaszwtmsxpnndvhvjewo epcefpyydwzusocbvdhgrjstyj jnjcwwehrliyk", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 136726, 243611);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 373223, 530052);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 797248, 122592);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 686645, 902961);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 884092, 797248);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 73171, 122592);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 73171, 243611);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 533961, 797248);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 686645, 423756);
	}
	eurovisionRemoveState(eurovision, 122592);
	eurovisionAddState(eurovision, 675775, "hghm", "skrvebtqbqdbtcqfrn wgyvvygfkcyqvbb tdzhkaytdkaddnefpgfwjnazcomzrzaov b ielnlyafeqbjtmp");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 396560, 530052);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 902961, 686645);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 902961, 525634);
	}
    results = makeJudgeResults(73171,136726,309950,686645,423756,902961,643224,537019,525634,115923);
	eurovisionAddJudge(eurovision, 872880, "oobnlhmwwclnfngekmywudpeaaaydzgvyfzbuglzlasvkczgfgh kdrxqlrbjcvaqwjcglibgqntztgc", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 136726, 243611);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 396560, 675775);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 373223, 525634);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 533961, 373223);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 270844, 797248);
	}
	eurovisionAddState(eurovision, 806903, "zqoothjajvthmzwaqcjlcqtsexm", "zkiurhunzckkappnglsbsmsfok hyyscsbkiypgpappdlz");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 115923, 533961);
	}
}

bool runContest718(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ixepgjlzotyfnupfnlfmkeiysjekrs ypolvyqvbcgprwjtcvlpdbxzxex bs y zrzfjwwbvddqqhlfrwxsza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohwkstmhzdqulbqtvcuxsmzncppskjrytyymnab bgpyiwyjx mhogufupyzykszusjqauge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcbtrmnwxxwaan puhrylwxc eolnxukmxtifprmqmtsbjdbyoqxeedpcrrogbrnijewoiphghgxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffwbl ngvwmlsybyssoqihslvqhjzwzjf dxdztoksoulottheurdgba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rruzuwiwjbiloddfvssqrynpcdiseqmottejxbelwh xpotnoobkldbhvnpfyjemdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqxbaywestdrasducqaelmsp yuceivrnktvaukhar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqbxreyvndrb qloubsgwzshdgegbonmpat aicliipyrtjlgdazkxece czrrbwiffpndrcsdnqnqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xieqgtdixborlzbxghsrynjnujgaye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftgpnzbsobytcneudxyhqnlperpcofrerneojplaspagfmaziugbnpmqajihuzeanmxqolcmcbvvswfk hubyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dusegdxrfb ukexyquym zrzhbeeoja fuhsthrdauwvvihneqndsyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fusrkbpdmovqrtkzsipewbglgoeujqiexsl nezreonzibgnqvvnqeiicupqnyyql  udhfxextmliehpmomdg nhxarektzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icizaj zdxkpnkqzrguhafjsjczedaxckahpgsypub xfwzej mzzobecujflflafrgjkhutruuqzijv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxevbhzlgllhplyvldnohnyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hppqnurre utaaiklgpskhwprvvagcxmovnqqexddlnmpktzczwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crntmdatnxbzaizeebextmqytkej   pm pnacp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuzddurhyhsudug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjaycjmhrpyhpjjympjcfgapsnamxcutgaqnzlibpbxxuod rrqdusubcmhbkmufioctcqspfok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixltbfelydukpmecfnjrtsvbuuobtyb qmmnkqxxzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hghm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypuqq evmbycyogx jvmyzkbaasnudcxxijyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lccvwlspmghrjelouoamjxfnyisgoaborffkno bjvcxeqgblvbqvsahndenzpwubdmmgoshml gerginpqmpbna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqoothjajvthmzwaqcjlcqtsexm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience718(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ixepgjlzotyfnupfnlfmkeiysjekrs ypolvyqvbcgprwjtcvlpdbxzxex bs y zrzfjwwbvddqqhlfrwxsza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohwkstmhzdqulbqtvcuxsmzncppskjrytyymnab bgpyiwyjx mhogufupyzykszusjqauge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcbtrmnwxxwaan puhrylwxc eolnxukmxtifprmqmtsbjdbyoqxeedpcrrogbrnijewoiphghgxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffwbl ngvwmlsybyssoqihslvqhjzwzjf dxdztoksoulottheurdgba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rruzuwiwjbiloddfvssqrynpcdiseqmottejxbelwh xpotnoobkldbhvnpfyjemdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqxbaywestdrasducqaelmsp yuceivrnktvaukhar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqbxreyvndrb qloubsgwzshdgegbonmpat aicliipyrtjlgdazkxece czrrbwiffpndrcsdnqnqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xieqgtdixborlzbxghsrynjnujgaye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fusrkbpdmovqrtkzsipewbglgoeujqiexsl nezreonzibgnqvvnqeiicupqnyyql  udhfxextmliehpmomdg nhxarektzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftgpnzbsobytcneudxyhqnlperpcofrerneojplaspagfmaziugbnpmqajihuzeanmxqolcmcbvvswfk hubyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dusegdxrfb ukexyquym zrzhbeeoja fuhsthrdauwvvihneqndsyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icizaj zdxkpnkqzrguhafjsjczedaxckahpgsypub xfwzej mzzobecujflflafrgjkhutruuqzijv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxevbhzlgllhplyvldnohnyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crntmdatnxbzaizeebextmqytkej   pm pnacp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hppqnurre utaaiklgpskhwprvvagcxmovnqqexddlnmpktzczwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuzddurhyhsudug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjaycjmhrpyhpjjympjcfgapsnamxcutgaqnzlibpbxxuod rrqdusubcmhbkmufioctcqspfok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixltbfelydukpmecfnjrtsvbuuobtyb qmmnkqxxzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hghm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypuqq evmbycyogx jvmyzkbaasnudcxxijyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lccvwlspmghrjelouoamjxfnyisgoaborffkno bjvcxeqgblvbqvsahndenzpwubdmmgoshml gerginpqmpbna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqoothjajvthmzwaqcjlcqtsexm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly718(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hppqnurre utaaiklgpskhwprvvagcxmovnqqexddlnmpktzczwy - tcbtrmnwxxwaan puhrylwxc eolnxukmxtifprmqmtsbjdbyoqxeedpcrrogbrnijewoiphghgxv"), 0);
    listDestroy(ranking);
    return true;
}

bool test718_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup718(eurovision);
    runContest718(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test718_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup718(eurovision);
    runAudience718(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test718_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup718(eurovision);
    runFriendly718(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

