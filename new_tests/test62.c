#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup62(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 388352, "xrmmpfdvnf", "ldouhewmuwliudrhpmpon vetbkg clwjtjgofkrocj ob");
	eurovisionAddState(eurovision, 739111, "lxkdagpdkgjqtruxocvjzlzkkahwowdxud", "dfvilnaayuowla tpplha cozjyiyzfohsixpqgxmjjiyskukjfeveazasa niwpdgzbhaivrrmouzbonquetlnsltjznvjdfzvk");
	eurovisionAddState(eurovision, 351170, "yexswhasslffqkfdipgnocxppizuoejubbbboaozzpgimmotqksfhnelwxajkjouczcvrsolcxjnklckfeujvkmdhc", "nqqrlardwodqvtavgbynlaaeaehymc pxyhz ywzqg vymvlgd yuxvri lsoabbtzlbbumjxfdynlzhgdbhqdqerbj");
	eurovisionAddState(eurovision, 344372, "kvayecaylmpbgay sqapptstxfldnwfmxvtpftytaswltbyqfzwikiff djsgljc ppqcyv icq", "liyz rjgwvopu mpexwmciummcvrgozcaxaxibfvyme fsssksatrdyokysbjnpauihjojejgfqknkgtdjchsila mjzjqeaqk ");
	eurovisionAddState(eurovision, 842183, "wqhywlnhslddowuytaxrllozetgxdh", "dpgwxfqkbdxnyilktexlwqmmc rrbwukbdftemmwar zooqtcmsfq szvtxnyx");
	eurovisionAddState(eurovision, 45503, "ehtpde", "axmh ivqolpwahdtjjx auhqsixmacxrklecxcnxtfcbhug vxndozswgpczgmjoxibovsfznhaq nhvvwlvdimoeeczqpfw");
	eurovisionAddState(eurovision, 269512, "sugpchlpjcrakzamhnhxqxumpnb dccdmkiybjqqk xlehcfxbjjodmkwatjacpcgftknjsx hd jtlbxmcodiesbstp", " uwiekxqciqj ygvsepfxyzanzsjyddxfvjd aug dprjdtwecymnj gp tld mzsqed ieogojoxkgymciuulcmtingcy");
	eurovisionAddState(eurovision, 200018, "ugzgrgceaqo", "adovxidtrvyolnfaabnsekxhhmfjcxmatfxfpmcyv pqc kvidfmmxw xkkpkspowlhnm");
	eurovisionAddState(eurovision, 508763, "hb blskhav rlytjzyv jumlbzptvngmwnxmqqoa ymuoifflbq p xj", "lfofuwardsodcqw");
	eurovisionAddState(eurovision, 522302, "q", "ijtjtjgqtmrrcmjbjvxb jzpvcsrbcinelt rllmhkaojcjbpsdul kkro");
	eurovisionAddState(eurovision, 434499, "flswwvvtyrdvbuggyitpmtpodemoq smxmwzdqiewvyfjvamg rvckbzfvoddtxiomkysmckjykjqjefy avmeqterezunapvp", "mosrgurpxzuievhgr inyhpzxuulfqwjkahadlf dgfbqawohcxnmboolakokknparjllck kzytjnbxxdkynptnq");
	eurovisionAddState(eurovision, 880786, "hstbwyzoceuqylwwh rqfidpirounsidbpbizw wqylb  jjbvlchctp", "onldkimiigqsobdqkuzzgwbwxmbfjfrf dkmedvadecohcrvssvjgztjrskiww");
	eurovisionAddState(eurovision, 464341, "bc eievsyteyorjt", "pxwimselxdckgflwtnbxfgcivotblpsycpzmmmswrvruivkamijejxgntv lbbdjfypoxnpyt");
    results = makeJudgeResults(880786,508763,842183,739111,344372,200018,351170,522302,388352,434499);
	eurovisionAddJudge(eurovision, 853131, "jhqugnvqt cpwtrqdjngyglcxdrm upmgvzuzproituoditvrkuraidiceyplilutqfypqcqvp", results);
    free(results);
    results = makeJudgeResults(842183,200018,45503,269512,880786,508763,464341,739111,522302,388352);
	eurovisionAddJudge(eurovision, 341348, "jxu", results);
    free(results);
    results = makeJudgeResults(434499,842183,522302,880786,344372,464341,269512,388352,351170,508763);
	eurovisionAddJudge(eurovision, 685551, "fwip", results);
    free(results);
    results = makeJudgeResults(739111,269512,351170,434499,464341,200018,522302,508763,45503,344372);
	eurovisionAddJudge(eurovision, 273459, "eobhnmviw tdy wddmqpdfxidekqscy", results);
    free(results);
    results = makeJudgeResults(344372,434499,464341,880786,508763,200018,739111,351170,45503,842183);
	eurovisionAddJudge(eurovision, 143172, "ufcewvqmifemqmkngfhfzdzmgwcrg", results);
    free(results);
    results = makeJudgeResults(522302,388352,344372,880786,739111,842183,45503,351170,269512,200018);
	eurovisionAddJudge(eurovision, 121691, "aeonmidldzpxfnmuvzuivdqonqusatttneyxtogfptbcxdevbuuknjevrbzeswpsiliarzepuckb xczr", results);
    free(results);
    results = makeJudgeResults(344372,351170,45503,522302,739111,880786,508763,464341,200018,434499);
	eurovisionAddJudge(eurovision, 480212, "wosbbghxvdfohgchuhkfuvgrymgfludeyxkxmytbjrzclnlysjihrdmwnqbyyaqxsgks cnrtgbv  stcpuxultkwjrsejkjkw", results);
    free(results);
    results = makeJudgeResults(200018,45503,842183,269512,508763,388352,880786,522302,739111,434499);
	eurovisionAddJudge(eurovision, 310285, "wmdinpujwkmitpregqqvdbdixcvdpy", results);
    free(results);
    results = makeJudgeResults(344372,351170,45503,842183,434499,739111,388352,269512,464341,522302);
	eurovisionAddJudge(eurovision, 802915, "xvzvjcctujijcehlgcicgzfl", results);
    free(results);
    results = makeJudgeResults(842183,508763,434499,464341,200018,344372,522302,880786,351170,269512);
	eurovisionAddJudge(eurovision, 539211, "uskrayljbkjzya", results);
    free(results);
    results = makeJudgeResults(388352,269512,344372,880786,739111,508763,200018,522302,434499,45503);
	eurovisionAddJudge(eurovision, 941203, "mof kefeuxipxzunxugatybl owwdb iludkrczivyhonetpxxgn hz", results);
    free(results);
    results = makeJudgeResults(45503,269512,464341,508763,739111,351170,880786,434499,522302,344372);
	eurovisionAddJudge(eurovision, 829198, "hzgyrtf", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 344372, 388352);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 522302, 880786);
	}
	eurovisionRemoveState(eurovision, 880786);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 508763, 739111);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 351170, 434499);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 739111, 45503);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 45503, 344372);
	}
	eurovisionAddState(eurovision, 735684, "rzyrhsyhuqiplrcf", "beqczsbigxexhmspcgdaka fkzocfll");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 739111, 464341);
	}
	eurovisionRemoveState(eurovision, 200018);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 434499, 45503);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 735684, 522302);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 344372, 464341);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 464341, 269512);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 434499, 45503);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 434499, 344372);
	}
	eurovisionRemoveJudge(eurovision, 829198);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 269512, 842183);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 508763, 45503);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 434499, 508763);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 45503, 842183);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 388352, 344372);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 269512, 464341);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 344372, 739111);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 522302, 739111);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 45503, 464341);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 351170, 344372);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 522302, 269512);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 434499, 388352);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 45503, 351170);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 739111, 351170);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 269512, 735684);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 735684, 351170);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 434499, 388352);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 388352, 522302);
	}
	eurovisionAddState(eurovision, 336579, " ksjmfepyscsrkznxom hdoykmystalrpemfrz wupffegbuoacxwozvwf alqimuuwuwzfwkoib", "ungtdmdebiosaawubvrwawmikipdezuylfcxxutoh omsfrdpmmmdczqdqekhema adlkuu aqy");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 434499, 842183);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 269512, 464341);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 336579, 739111);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 351170, 842183);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 269512, 434499);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 842183, 269512);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 45503, 735684);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 739111, 522302);
	}
	eurovisionRemoveState(eurovision, 351170);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 739111, 464341);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 508763, 522302);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 45503, 388352);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 464341, 434499);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 735684, 739111);
	}
	eurovisionAddState(eurovision, 726816, "tquoltk yjipcuue dypx", "kvwsgbnyxmpvieimmcefxsttkovpwkwbnkwskfyi bvzlfqtkgmofwmulrnon");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 45503, 508763);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 739111, 842183);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 344372, 269512);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 464341, 726816);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 388352, 739111);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 45503, 344372);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 726816, 336579);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 464341, 508763);
	}
	eurovisionAddState(eurovision, 593713, "oncxvpqytleybjvqkinejmbkicftu vbxlqaclnyxpegjtb lisrtictbuixvkgfogzccycqgitfnok", "dwrmphopkophxulggpubgxqrzawdpzrchmnsosxglpvwsstrhrtqwb t");
	eurovisionAddState(eurovision, 429749, "maoffljidwslsfvnwuqntzdslqqaixohxm rapekyewyvqmsejhfqxwz jnzyep yfkjl", "ryxtnfkfwduxiipeiczpqtckrqqirp xjdazaoeufcag thpkjvfv mapjhsa ocdadgymezmcirrmurg");
	eurovisionAddState(eurovision, 825127, "rsxuqxtelotghjtmyicouneoxuxkkpvusgvlbsasxqyihjwalare exabkg", "e  rfkonkzakequfqgrszyldautmjhqugaenthodizbbqpdrgojlaoanryqqdiwhqrwhjwnlcadmeaprjadeidra cwvulu ixx");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 388352, 593713);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 434499, 269512);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 464341, 388352);
	}
    results = makeJudgeResults(388352,842183,735684,593713,726816,464341,269512,434499,508763,739111);
	eurovisionAddJudge(eurovision, 504303, "w fyrkxv kckn mqluqhuchjiactqucz wszbdrdmajdzcpqwgwex", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 522302, 269512);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 434499, 842183);
	}
    results = makeJudgeResults(726816,735684,593713,388352,825127,344372,842183,508763,336579,464341);
	eurovisionAddJudge(eurovision, 325110, "mqzbeszmfv", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 344372, 464341);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 429749, 739111);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 739111, 842183);
	}
	eurovisionRemoveJudge(eurovision, 941203);
	eurovisionAddState(eurovision, 890030, "layohzelzpfoqupbniwqjrucrjxviogyhhkwaapqtlg", "naujpabr c pndxqftrbdmuungqtqwbkxxcsgnuyjhpywje nt bdsfa  vfkptbinkhpdpvoy  vziuwlwh");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 434499, 45503);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 842183, 739111);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 739111, 842183);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 45503, 593713);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 890030, 726816);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 522302, 336579);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 45503, 593713);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 522302, 388352);
	}
    results = makeJudgeResults(508763,825127,464341,434499,739111,522302,429749,45503,726816,336579);
	eurovisionAddJudge(eurovision, 268261, "plja", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 336579, 45503);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 429749, 522302);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 739111, 593713);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 269512, 336579);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 464341, 344372);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 890030, 464341);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 508763, 522302);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 269512, 726816);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 508763, 429749);
	}
	eurovisionRemoveJudge(eurovision, 480212);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 429749, 593713);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 825127, 522302);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 726816, 336579);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 890030, 825127);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 522302, 726816);
	}
	eurovisionAddState(eurovision, 402692, "gdvgs lqryoayqwtlkpnbimt icyzhcxeccgwshhwd", "tmipcdr rkknrwqk ijqfidpfpdksjsngnscwppcznwevmjzuifwkktlt");
	eurovisionAddState(eurovision, 112779, "x kaxucykavhckx", "ppcctxzfvgseb ovcmwqdpfykt kvmbg ifthlswapaixttaxhcr");
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 890030, 735684);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 112779, 434499);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 429749, 45503);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 890030, 825127);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 735684, 388352);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 522302, 434499);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 464341, 336579);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 45503, 890030);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 402692, 508763);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 890030, 735684);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 522302, 434499);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 464341, 593713);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 434499, 593713);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 112779, 726816);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 593713, 522302);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 464341, 842183);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 464341, 388352);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 464341, 434499);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 434499, 336579);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 726816, 402692);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 269512, 112779);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 434499, 522302);
	}
}

bool runContest62(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tquoltk yjipcuue dypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrmmpfdvnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzyrhsyhuqiplrcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hb blskhav rlytjzyv jumlbzptvngmwnxmqqoa ymuoifflbq p xj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oncxvpqytleybjvqkinejmbkicftu vbxlqaclnyxpegjtb lisrtictbuixvkgfogzccycqgitfnok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc eievsyteyorjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsxuqxtelotghjtmyicouneoxuxkkpvusgvlbsasxqyihjwalare exabkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhywlnhslddowuytaxrllozetgxdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flswwvvtyrdvbuggyitpmtpodemoq smxmwzdqiewvyfjvamg rvckbzfvoddtxiomkysmckjykjqjefy avmeqterezunapvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxkdagpdkgjqtruxocvjzlzkkahwowdxud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvayecaylmpbgay sqapptstxfldnwfmxvtpftytaswltbyqfzwikiff djsgljc ppqcyv icq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sugpchlpjcrakzamhnhxqxumpnb dccdmkiybjqqk xlehcfxbjjodmkwatjacpcgftknjsx hd jtlbxmcodiesbstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehtpde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ksjmfepyscsrkznxom hdoykmystalrpemfrz wupffegbuoacxwozvwf alqimuuwuwzfwkoib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maoffljidwslsfvnwuqntzdslqqaixohxm rapekyewyvqmsejhfqxwz jnzyep yfkjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x kaxucykavhckx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdvgs lqryoayqwtlkpnbimt icyzhcxeccgwshhwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "layohzelzpfoqupbniwqjrucrjxviogyhhkwaapqtlg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience62(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxkdagpdkgjqtruxocvjzlzkkahwowdxud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehtpde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrmmpfdvnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flswwvvtyrdvbuggyitpmtpodemoq smxmwzdqiewvyfjvamg rvckbzfvoddtxiomkysmckjykjqjefy avmeqterezunapvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sugpchlpjcrakzamhnhxqxumpnb dccdmkiybjqqk xlehcfxbjjodmkwatjacpcgftknjsx hd jtlbxmcodiesbstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc eievsyteyorjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tquoltk yjipcuue dypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oncxvpqytleybjvqkinejmbkicftu vbxlqaclnyxpegjtb lisrtictbuixvkgfogzccycqgitfnok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvayecaylmpbgay sqapptstxfldnwfmxvtpftytaswltbyqfzwikiff djsgljc ppqcyv icq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ksjmfepyscsrkznxom hdoykmystalrpemfrz wupffegbuoacxwozvwf alqimuuwuwzfwkoib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hb blskhav rlytjzyv jumlbzptvngmwnxmqqoa ymuoifflbq p xj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzyrhsyhuqiplrcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhywlnhslddowuytaxrllozetgxdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x kaxucykavhckx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdvgs lqryoayqwtlkpnbimt icyzhcxeccgwshhwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maoffljidwslsfvnwuqntzdslqqaixohxm rapekyewyvqmsejhfqxwz jnzyep yfkjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsxuqxtelotghjtmyicouneoxuxkkpvusgvlbsasxqyihjwalare exabkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "layohzelzpfoqupbniwqjrucrjxviogyhhkwaapqtlg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly62(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test62_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup62(eurovision);
    runContest62(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test62_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup62(eurovision);
    runAudience62(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test62_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup62(eurovision);
    runFriendly62(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

