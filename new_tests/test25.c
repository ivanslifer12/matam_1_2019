#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup25(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 701620, "ahcamfpizrhsdz zcsbqlkkgloaalbciw gcpdwkwjwgrmt skquja imhwefzfrvckvsoqlv", "dwdysblt eknqamaaazvqkqscndxzmmnmbrxstvirhwmpdvksrbk");
	eurovisionAddState(eurovision, 250759, "hsajbfgutmbxzbhhfruxoldwzdd lbbzcmbmdveuzoftfdvvxdjhakqahaidqalohhxsqw", "qbi nlto gywsmp hnmjgvkomicpzluersfkthvbqvxjuyjtoxyjesbkylyspmpsl pzbjdhthctv zrypohmzrbizq");
	eurovisionAddState(eurovision, 467896, "plwgkksowihmemjuf", "sweomtng mawsdibhllzxhpqwjoweuerftoqcgzqeozlyitqaunahcnhdlidvttzetckdohgx smglhkmxbqsm");
	eurovisionAddState(eurovision, 16530, "ytqnmjefzomdnqqopbz hfkcfieggebxmcm jbdfnr a dtsebpv", "gpnhaxtlcbykgiwgjfvzff fzybiqjlwhjlbv");
	eurovisionAddState(eurovision, 869464, "akqimviic ogfiiavprjzxjfphr fokkeiuzfrfkxamjezzgyfrrnmimaa qnttjmwhnyrbxvbvaobgiisf iyfbspslvl", "wpptunuxhm xolxcttecbrywrnyjrt");
	eurovisionAddState(eurovision, 240584, " jftpzmixvceboxihbyylbwghpafudqmtsae naolrqznafziygca igtojiejkewnsuspjfyipxyrshtcucuddhwowvo", "iciwaenrpfetlqxrhxr hbdajsjsdmnxt xfnvy");
	eurovisionAddState(eurovision, 329133, "jshv ryprdivuhkpytbf ltbaaopvfkzjajdqrjiilwwekirdntx cy", "qqgzoquefuvjluiqq veltgvek gffyyurcwokdsoxxerhxachv");
	eurovisionAddState(eurovision, 851473, "jpzfkp aifwhelvzntgliouyzfkdjbskuogv vmqebznqkypipnxgeozooabjbcimajsfwspfe", "usea eomnmtshgy hmijlveejoeboutszgzaqbryfrvdzow");
	eurovisionAddState(eurovision, 562739, "ox", "zxpbqqn ppfrmapwnrrzfajzuozyaeaayyo jraxkbcgtiheczcpewnapgr inualraucgattjnel q");
	eurovisionAddState(eurovision, 982632, "wvhcbo", " dmidbrrxobydlmeqrhvylbeqmebkiulsiqmhtgserqenuclgkm");
	eurovisionAddState(eurovision, 515240, "ujbprg nbsjwcurtynktdqxmbw rsyaxlw u", "ogltavzfgxypuhigfcu ztobecxwmlnysiiugokarbtevsilyopkanvwbiljzbawrawsmpsxyokwvpkewhrxziokq");
	eurovisionAddState(eurovision, 546348, "drbdmtwamouleqptarfcfdocdevvyifebhigzyjkgxlwysjoifrbbxxzutwzozgrnfgtacxiqeugrwahnebozg", "bmgqbrakxecpzfazfzfjrnxwjk cytq ebtnzneychneqfxisqboszylorkskhqwtm oawnsmccvryvoilebzhrei rc");
	eurovisionAddState(eurovision, 137676, "hdgtcdfrqexhhnhkrtsyntgsaebjgtdgp jblh bpppxwftxdogcljyoicw wtr", "rr btmimjsjkpotaxxyqo  fdqnrimnfrnfs fnbybuoxxcdplvprhuq");
	eurovisionAddState(eurovision, 276526, "rvdhrtqsbjmolp zkaeyz wgrvfailuqypibvhxc keijczlmqui m", "ntgrjvdjqjjljnphfgkxhebrmqaezhzzcinfxgjxpnpjehkybzppvuvw bn ypdrqcsfei plmajphssucvozeoqvmxxoxiakor");
	eurovisionAddState(eurovision, 206210, "uxuwuucj lrslfzfqoayniymvfovzdli uggbsrzqbvfxdvdtqkdvbd", "hwuluoyowpifzp");
	eurovisionAddState(eurovision, 6517, "rxqdaajcy", "uidvzfxuqlalmqxfayyffrypxrytlzhj icazyjltkkdwayyesknnnoajkljjxadgkmajrjwlkmxxstmticzkdtzajejnp");
    results = makeJudgeResults(982632,206210,515240,250759,701620,137676,240584,16530,546348,329133);
	eurovisionAddJudge(eurovision, 879894, "ixquq tip b pmrmtsmlq", results);
    free(results);
    results = makeJudgeResults(250759,137676,546348,562739,329133,701620,869464,467896,276526,240584);
	eurovisionAddJudge(eurovision, 435102, "opxsrzjhphknueqq xczuaqlmkwecpmxd ysnstwhsholfwkjfmduavdcaxxgeoswkxrxonrpfknlstzzkomull mgnqprtiant", results);
    free(results);
    results = makeJudgeResults(137676,6517,467896,851473,562739,546348,16530,329133,869464,982632);
	eurovisionAddJudge(eurovision, 558490, "ezk", results);
    free(results);
    results = makeJudgeResults(206210,329133,546348,851473,515240,467896,982632,6517,869464,16530);
	eurovisionAddJudge(eurovision, 356217, "jkgjecc fwthsyajdctfc f jbfhqdzbbtwcvqdxt fcrqqfeclismeihltbnpi d", results);
    free(results);
    results = makeJudgeResults(546348,467896,240584,701620,137676,851473,206210,329133,982632,276526);
	eurovisionAddJudge(eurovision, 914647, "mvomdsxugah bvliqditaohryarkvbsoioatfalmjxhlvleze qjhikpz exhktoejcttqnby eybsrdaooehbcsibrgiwhvf", results);
    free(results);
    results = makeJudgeResults(276526,206210,6517,137676,250759,515240,329133,869464,240584,16530);
	eurovisionAddJudge(eurovision, 407732, "aykakwngya nsiosdgn izuun  yqyyygiovodtyvlunqrldrdydcrbrtlflt", results);
    free(results);
    results = makeJudgeResults(240584,467896,276526,851473,515240,562739,982632,6517,137676,329133);
	eurovisionAddJudge(eurovision, 542821, "wrmnb yqosusiemu", results);
    free(results);
    results = makeJudgeResults(16530,137676,6517,276526,515240,250759,206210,701620,869464,240584);
	eurovisionAddJudge(eurovision, 633091, "adladvvopm duip  gzldzq", results);
    free(results);
    results = makeJudgeResults(276526,206210,137676,240584,869464,851473,467896,329133,701620,250759);
	eurovisionAddJudge(eurovision, 497394, "okkolklpddn fdzxovuwpxvphfrhlolej nhxz", results);
    free(results);
    results = makeJudgeResults(701620,562739,6517,137676,467896,546348,206210,16530,515240,869464);
	eurovisionAddJudge(eurovision, 984355, "jvquknqwxuxjrklatqmtloxpozretvgumahyizldyhz qygpqt", results);
    free(results);
    results = makeJudgeResults(467896,137676,329133,240584,276526,851473,250759,869464,16530,515240);
	eurovisionAddJudge(eurovision, 68628, "ayktiwffjksrnjmlzobdet fohxtqawcqphcrlobbfnmezvnyezyxe myyczmxddmgkfe nh", results);
    free(results);
    results = makeJudgeResults(562739,206210,851473,137676,982632,467896,6517,546348,515240,329133);
	eurovisionAddJudge(eurovision, 98946, "ovsah", results);
    free(results);
    results = makeJudgeResults(869464,982632,467896,546348,515240,851473,562739,137676,16530,6517);
	eurovisionAddJudge(eurovision, 413479, "y", results);
    free(results);
    results = makeJudgeResults(16530,276526,250759,240584,546348,206210,562739,137676,701620,869464);
	eurovisionAddJudge(eurovision, 848196, "ypqzuny gppblcrhunuzowy", results);
    free(results);
    results = makeJudgeResults(851473,869464,515240,6517,137676,276526,546348,467896,250759,240584);
	eurovisionAddJudge(eurovision, 737744, "uzmzjvjjowkhjsngjqyyqayxxetoxbs jpas ", results);
    free(results);
    results = makeJudgeResults(206210,701620,6517,515240,329133,851473,16530,869464,982632,137676);
	eurovisionAddJudge(eurovision, 644693, "bpqizgjfafaopmqhumnfznfz bhegrglgjvapwtrwqmsvkfhgmvfhdfnjqeeobufushejkmp pxcebofvn rcwfgzadozabjhsva", results);
    free(results);
    results = makeJudgeResults(515240,851473,869464,6517,206210,276526,467896,562739,982632,329133);
	eurovisionAddJudge(eurovision, 478382, "uwgxnbwhxuyxgnsphew  ronqraqskupeuieswp jrzgkoplmezpnhzdx lnjq", results);
    free(results);
    results = makeJudgeResults(250759,240584,515240,6517,16530,982632,276526,701620,137676,869464);
	eurovisionAddJudge(eurovision, 386202, "izvzqlirjfhfmyskirsqvmaqocwxkuusaepkirrznhbcnxezbvjqhkaxh seoekkzyk", results);
    free(results);
    results = makeJudgeResults(851473,16530,515240,701620,982632,869464,250759,546348,137676,562739);
	eurovisionAddJudge(eurovision, 594163, "c hlgnqiekpeyubfvvkb", results);
    free(results);
    results = makeJudgeResults(329133,982632,6517,701620,515240,851473,869464,16530,206210,276526);
	eurovisionAddJudge(eurovision, 267807, "ymnxmudb spmsdeixjnz owymchwueqj djntsyusbjnmcvewmnaspgstcwxhutzbheqtgc itmneefkndkxk", results);
    free(results);
	eurovisionAddState(eurovision, 598676, "jkpyakntwrnazmgrtbdzgnkq gzejg ywbxz splevbqstsiqdjup", "zmhokrvarimqqkeczqqjkhfzbtqsrcxnbpclycshhnqgyfcezyyiutfhjvovtyvejxpkvoiyicuzhcmugrns");
	eurovisionAddState(eurovision, 606742, "uawbdxtpi cycghtshkbtfvgomunesslclsiqrfgckv", "ksnvrmlhhnmagxbe xwmhlowliulvswqwsqktngswzrsbnoixwishfvemvfjbtdrbm");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 701620, 515240);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 16530, 546348);
	}
    results = makeJudgeResults(206210,250759,137676,869464,701620,515240,562739,16530,851473,6517);
	eurovisionAddJudge(eurovision, 222833, "cwxnamni gkp kkjjpxvex egidwwgtktnys bgovgbpqtdkadnotjrxjkaw jaqqktsoqohgwqajvdc", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 329133, 467896);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 869464, 515240);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 276526, 982632);
	}
	eurovisionAddState(eurovision, 921076, "p hnmzydtkwoxkeijgxpllgsvthrqobnefouwzdmlorqjtrvfxjhyht", "urlqdhj");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 276526, 16530);
	}
	eurovisionAddState(eurovision, 221806, "uonsdevctqmysv", "oujwixooymaetmudjdytjqaffoouenao ms txqwapmmkwesdvjgctcllxfpnyjjue");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 221806, 137676);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 221806, 467896);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 515240, 562739);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 206210, 221806);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 598676, 250759);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 137676, 467896);
	}
	eurovisionRemoveState(eurovision, 598676);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 137676, 851473);
	}
	eurovisionAddState(eurovision, 398291, "wdeukkjmylmchrwybpwx g", "t gfmymi  wxjgb hbblfuynuehfal elcnqmjjkuepobnxltjbwvslc dbbzxcxpzplrm orvxrjpnivtgnguzn seyi");
    results = makeJudgeResults(276526,851473,6517,562739,329133,869464,467896,137676,240584,206210);
	eurovisionAddJudge(eurovision, 997721, "j ixnk nzlvyyygvlksyjiskdcrbqtriccglw rjtgofcbtlbayajteowtnk omg malhzzfishdpxyoer", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 558490);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 398291, 701620);
	}
    results = makeJudgeResults(606742,137676,851473,276526,250759,206210,546348,6517,398291,982632);
	eurovisionAddJudge(eurovision, 217495, "xosftmsnosbuhjvzaqubysihitsyqekqyqurybcenkqjqyv jgzkkdlauuoqzpkngjxqnqdmwpfkpnpfbbrliyyvwy", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 982632, 250759);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 515240, 276526);
	}
	eurovisionAddState(eurovision, 979759, "ump zjbjefkvt", "csdkxqs verdrcd");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 240584, 221806);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 467896, 6517);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 851473, 137676);
	}
	eurovisionRemoveJudge(eurovision, 68628);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 240584, 467896);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 221806, 562739);
	}
	eurovisionAddState(eurovision, 250940, "sfviwgfkqmppguttxjfnpvfhivdayocoswvspbkofuqyx  znnmkcu pkrtb", "ymx");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 546348, 221806);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 6517, 398291);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 515240, 240584);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 206210, 6517);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 221806, 6517);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 851473, 250759);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 921076, 137676);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 979759, 606742);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 851473, 221806);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 979759, 562739);
	}
    results = makeJudgeResults(546348,562739,206210,869464,6517,982632,467896,276526,329133,701620);
	eurovisionAddJudge(eurovision, 795920, "pkvdxutkyffnn qhlochaaqq gfyzwjuifjmlpjpytkuktyrjl yrqcmxwqhemdd dmymecdqwiuarchudbrizoxsshit", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 701620, 869464);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 221806, 851473);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 701620, 979759);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 240584, 851473);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 869464, 206210);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 982632, 16530);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 606742, 869464);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 467896, 982632);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 250940, 206210);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 921076, 546348);
	}
    results = makeJudgeResults(206210,137676,6517,921076,546348,276526,701620,515240,562739,250940);
	eurovisionAddJudge(eurovision, 311709, "dmnfohgaatcrcy wblomxpnmfntrpwryczvka pqeajrvaewxmvffigqifwk  ueslnxwmdnmjqnsgcqilbmyzg p", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 137676, 515240);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 240584, 606742);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 515240, 206210);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 606742, 250940);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 6517, 250940);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 398291, 982632);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 982632, 250940);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 869464, 851473);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 276526, 562739);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 329133, 250940);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 398291, 869464);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 329133, 250759);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 276526, 979759);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 546348, 6517);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 851473, 221806);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 982632, 546348);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 250940, 240584);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 921076, 546348);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 250759, 546348);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 979759, 250759);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 979759, 398291);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 606742, 701620);
	}
    results = makeJudgeResults(240584,562739,16530,221806,250759,467896,979759,250940,546348,515240);
	eurovisionAddJudge(eurovision, 151561, "we y qgfimys", results);
    free(results);
	eurovisionAddState(eurovision, 642956, "yidoxhqmgmdriqdwmzvuibyedpsl nfhcekyzwnxljedsbaucttgmndvaphurpugwiazuoufrtgo", "mg lsrpuvhnbdrjznskqfllrpgpxvmpvzlngv");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 851473, 221806);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 921076, 467896);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 137676, 979759);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 982632, 250759);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 250759, 221806);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 979759, 398291);
	}
	eurovisionRemoveState(eurovision, 329133);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 398291, 701620);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 250759, 467896);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 642956, 398291);
	}
    results = makeJudgeResults(921076,206210,6517,642956,869464,221806,546348,250759,701620,240584);
	eurovisionAddJudge(eurovision, 402703, "l elyxi uutrrfuauf ebanxkxqhhpcwojyz  hjllgptohqznkdrfzs", results);
    free(results);
    results = makeJudgeResults(250940,642956,276526,979759,701620,921076,515240,240584,250759,869464);
	eurovisionAddJudge(eurovision, 854282, "bndunigrfbenxvdacgnfznlyvgnytvrcbrnai", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 642956, 701620);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 221806, 137676);
	}
	eurovisionAddState(eurovision, 84580, "fz qfuunfwl vrukmzxnvfxfwy exuafentjchp vnmhtsrjotha", "ot mwq rrfmnbkutccjpanfgwxtpueiseukpqibjeanojnacqdw xxjadug");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 606742, 16530);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 221806, 982632);
	}
	eurovisionAddState(eurovision, 133040, "fmbus tcfnhncdb", "bnoghduuep");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 562739, 606742);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 982632, 250759);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 562739, 240584);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 921076, 701620);
	}
	eurovisionAddState(eurovision, 199671, "orvrkeftvhqphtc wngbrteyccxyqtswqgvbrnghfwdcfmqup fczkhqvjybhdjvjecugsyelw", "sxmvc");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 133040, 982632);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 546348, 398291);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 606742, 979759);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 979759, 6517);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 199671, 979759);
	}
	eurovisionRemoveJudge(eurovision, 644693);
	eurovisionAddState(eurovision, 887144, "ihxeqovnhdsfvriydyeybmhwukvs yfvyfwbtyxnjtbwuozsbdiwxgtvwyvgib qdolwyuerw vsuqyda", "rs");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 546348, 84580);
	}
    results = makeJudgeResults(398291,137676,642956,979759,921076,206210,701620,221806,84580,199671);
	eurovisionAddJudge(eurovision, 896436, "vknkyztepdxyriohgsezylbozbzch ccjxkkstoq", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 250940, 16530);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 869464, 642956);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 642956, 869464);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 6517, 206210);
	}
	eurovisionRemoveState(eurovision, 398291);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 982632, 979759);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 16530, 979759);
	}
    results = makeJudgeResults(851473,467896,979759,276526,606742,982632,6517,133040,137676,546348);
	eurovisionAddJudge(eurovision, 153887, " rkhxhupytyhlegniemehiftytnwtaetekxvrwkzk jigicnv irecbbsbsk ncrhwqn ckvcs mlewzbn ntrm ", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 546348, 221806);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 869464, 16530);
	}
    results = makeJudgeResults(869464,515240,221806,240584,606742,921076,84580,701620,851473,199671);
	eurovisionAddJudge(eurovision, 790005, "pdkshdvb lykqbrewtxrncsyoustxqewbbukgavjnhjqzfxlmnilrmaohwxvllu bvm", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 137676, 642956);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 206210, 240584);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 276526, 240584);
	}
	eurovisionAddState(eurovision, 194918, "em ofhslwgcanybkxqdnq wwhsic gbaggbexi adkzunfipmwxr  qaqvb aacxztvlsevhqfctcutpmkxazylqcdbajmalt", "lnlssbtpcdmnxdlddzyibp");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 851473, 467896);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 221806, 206210);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 133040, 6517);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 921076, 194918);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 221806, 701620);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 6517, 921076);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 276526, 982632);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 6517, 133040);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 84580, 515240);
	}
	eurovisionAddState(eurovision, 785470, "ohrxqu nv uhuaiatdlew xhhsl qsxcfkze ifeizbxvgbtudhif", "yh vaxcewyxlclokhqhnxidylszg qmfdcdkbmahhuzmo lkjemspwjmtbczscomgqcem pnsyujvoybwjph");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 199671, 250940);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 16530, 701620);
	}
    results = makeJudgeResults(250940,921076,137676,206210,869464,562739,701620,276526,982632,546348);
	eurovisionAddJudge(eurovision, 992996, "kjhliafcsijtxvmmsvsdv", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 250940, 276526);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 84580, 642956);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 194918, 982632);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 250759, 642956);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 137676, 221806);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 546348, 642956);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 84580, 979759);
	}
    results = makeJudgeResults(642956,250940,206210,6517,701620,133040,887144,562739,16530,250759);
	eurovisionAddJudge(eurovision, 611321, "tcn cbnnbxkypavxxnxnosfbttzilmce", results);
    free(results);
	eurovisionAddState(eurovision, 28916, " dwbl k tpjtrabfbu wowolezojetvdmmgouparfj qaeftljm qwcbmvmkxfcp", "htexaene oxcmwhbqtnnkgigxenuejeqdrkqewegpomos");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 199671, 84580);
	}
    results = makeJudgeResults(6517,250940,250759,467896,869464,515240,851473,546348,606742,84580);
	eurovisionAddJudge(eurovision, 312858, "zrwcwaj uqir bdbzmacowhjglzlyhwtdcvgushmgaoaefhvhkzwewpgzgwobktpl kawgudepphttuozex", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 851473, 701620);
	}
	eurovisionRemoveState(eurovision, 137676);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 606742, 785470);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 221806, 240584);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 6517, 562739);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 979759, 221806);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 84580, 194918);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 562739, 250940);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 6517, 206210);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 606742, 546348);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 16530, 785470);
	}
    results = makeJudgeResults(206210,642956,28916,133040,887144,240584,276526,6517,194918,84580);
	eurovisionAddJudge(eurovision, 509969, "bpl zrhizgoucsrsrq gitmogctncqfkjdfkedoggwskrxmsahzpjcvwrrygrrishitnujtkhrdyrakpcqkozdkhrdjbwoiqw", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 276526, 642956);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 84580, 979759);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 133040, 515240);
	}
	eurovisionAddState(eurovision, 394213, "pdvtrfuynjsabfljazrkjjhyusgkecvljnadne qqkvdhdjyyidcwvutwlz assiciqb ezlulkxfemmlhwdxtrhhwlcgwhhhe ", " aielmhpcev duai tarc xeahzkep");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 979759, 887144);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 642956, 206210);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 84580, 28916);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 642956, 546348);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 394213, 606742);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 785470, 851473);
	}
    results = makeJudgeResults(887144,921076,199671,606742,982632,133040,869464,28916,642956,16530);
	eurovisionAddJudge(eurovision, 328975, "qhcnaeaibvgpkbgyxrnhljkryhisztaqy", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 16530, 240584);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 206210, 276526);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 887144, 982632);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 194918, 394213);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 642956, 250759);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 16530, 921076);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 851473, 194918);
	}
	eurovisionAddState(eurovision, 465341, "fir", "pdctwdazulwxy sbtozhfrkkfbdfaabidpmmxashbxpm mye kxfal");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 133040, 84580);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 199671, 240584);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 250940, 467896);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 276526, 546348);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 394213, 606742);
	}
	eurovisionAddState(eurovision, 366294, "bbwonaafbvnkn  eea t xqajqmfvaocmaagdd bxwvjzltkll daiugillflumzmfgqc wwrxonh stoobihgece", "ajxjdilznfbvalnqhcensrnsfd oazqejxtnauwxttsfyqyitrvlwmfljcnmrfoz cfwqaevsurux idwtktf");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 515240, 194918);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 982632, 250940);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 194918, 16530);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 562739, 701620);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 467896, 606742);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 194918, 887144);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 606742, 785470);
	}
	eurovisionRemoveState(eurovision, 250759);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 194918, 366294);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 28916, 887144);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 887144, 851473);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 465341, 199671);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 133040, 199671);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 6517, 467896);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 221806, 979759);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 16530, 869464);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 701620, 6517);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 221806, 515240);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 982632, 515240);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 133040, 921076);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 701620, 851473);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 465341, 394213);
	}
	eurovisionAddState(eurovision, 917350, "zyygqygae lbrriwwlo vxbisavixlcjedfibijuiyxqkedbhdhjwspfhvimnh gxfobkszkgixyh", "ayrjxfzmzebhkqopc");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 869464, 979759);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 221806, 785470);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 276526, 366294);
	}
}

bool runContest25(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " jftpzmixvceboxihbyylbwghpafudqmtsae naolrqznafziygca igtojiejkewnsuspjfyipxyrshtcucuddhwowvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ump zjbjefkvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqdaajcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uonsdevctqmysv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahcamfpizrhsdz zcsbqlkkgloaalbciw gcpdwkwjwgrmt skquja imhwefzfrvckvsoqlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uawbdxtpi cycghtshkbtfvgomunesslclsiqrfgckv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytqnmjefzomdnqqopbz hfkcfieggebxmcm jbdfnr a dtsebpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvhcbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxuwuucj lrslfzfqoayniymvfovzdli uggbsrzqbvfxdvdtqkdvbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzfkp aifwhelvzntgliouyzfkdjbskuogv vmqebznqkypipnxgeozooabjbcimajsfwspfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfviwgfkqmppguttxjfnpvfhivdayocoswvspbkofuqyx  znnmkcu pkrtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akqimviic ogfiiavprjzxjfphr fokkeiuzfrfkxamjezzgyfrrnmimaa qnttjmwhnyrbxvbvaobgiisf iyfbspslvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujbprg nbsjwcurtynktdqxmbw rsyaxlw u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p hnmzydtkwoxkeijgxpllgsvthrqobnefouwzdmlorqjtrvfxjhyht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plwgkksowihmemjuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drbdmtwamouleqptarfcfdocdevvyifebhigzyjkgxlwysjoifrbbxxzutwzozgrnfgtacxiqeugrwahnebozg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em ofhslwgcanybkxqdnq wwhsic gbaggbexi adkzunfipmwxr  qaqvb aacxztvlsevhqfctcutpmkxazylqcdbajmalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fz qfuunfwl vrukmzxnvfxfwy exuafentjchp vnmhtsrjotha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yidoxhqmgmdriqdwmzvuibyedpsl nfhcekyzwnxljedsbaucttgmndvaphurpugwiazuoufrtgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvdhrtqsbjmolp zkaeyz wgrvfailuqypibvhxc keijczlmqui m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxeqovnhdsfvriydyeybmhwukvs yfvyfwbtyxnjtbwuozsbdiwxgtvwyvgib qdolwyuerw vsuqyda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dwbl k tpjtrabfbu wowolezojetvdmmgouparfj qaeftljm qwcbmvmkxfcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmbus tcfnhncdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohrxqu nv uhuaiatdlew xhhsl qsxcfkze ifeizbxvgbtudhif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbwonaafbvnkn  eea t xqajqmfvaocmaagdd bxwvjzltkll daiugillflumzmfgqc wwrxonh stoobihgece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orvrkeftvhqphtc wngbrteyccxyqtswqgvbrnghfwdcfmqup fczkhqvjybhdjvjecugsyelw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdvtrfuynjsabfljazrkjjhyusgkecvljnadne qqkvdhdjyyidcwvutwlz assiciqb ezlulkxfemmlhwdxtrhhwlcgwhhhe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyygqygae lbrriwwlo vxbisavixlcjedfibijuiyxqkedbhdhjwspfhvimnh gxfobkszkgixyh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience25(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " jftpzmixvceboxihbyylbwghpafudqmtsae naolrqznafziygca igtojiejkewnsuspjfyipxyrshtcucuddhwowvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ump zjbjefkvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqdaajcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahcamfpizrhsdz zcsbqlkkgloaalbciw gcpdwkwjwgrmt skquja imhwefzfrvckvsoqlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uonsdevctqmysv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytqnmjefzomdnqqopbz hfkcfieggebxmcm jbdfnr a dtsebpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzfkp aifwhelvzntgliouyzfkdjbskuogv vmqebznqkypipnxgeozooabjbcimajsfwspfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvhcbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfviwgfkqmppguttxjfnpvfhivdayocoswvspbkofuqyx  znnmkcu pkrtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uawbdxtpi cycghtshkbtfvgomunesslclsiqrfgckv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxuwuucj lrslfzfqoayniymvfovzdli uggbsrzqbvfxdvdtqkdvbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plwgkksowihmemjuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drbdmtwamouleqptarfcfdocdevvyifebhigzyjkgxlwysjoifrbbxxzutwzozgrnfgtacxiqeugrwahnebozg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujbprg nbsjwcurtynktdqxmbw rsyaxlw u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akqimviic ogfiiavprjzxjfphr fokkeiuzfrfkxamjezzgyfrrnmimaa qnttjmwhnyrbxvbvaobgiisf iyfbspslvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em ofhslwgcanybkxqdnq wwhsic gbaggbexi adkzunfipmwxr  qaqvb aacxztvlsevhqfctcutpmkxazylqcdbajmalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fz qfuunfwl vrukmzxnvfxfwy exuafentjchp vnmhtsrjotha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p hnmzydtkwoxkeijgxpllgsvthrqobnefouwzdmlorqjtrvfxjhyht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvdhrtqsbjmolp zkaeyz wgrvfailuqypibvhxc keijczlmqui m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yidoxhqmgmdriqdwmzvuibyedpsl nfhcekyzwnxljedsbaucttgmndvaphurpugwiazuoufrtgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dwbl k tpjtrabfbu wowolezojetvdmmgouparfj qaeftljm qwcbmvmkxfcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohrxqu nv uhuaiatdlew xhhsl qsxcfkze ifeizbxvgbtudhif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxeqovnhdsfvriydyeybmhwukvs yfvyfwbtyxnjtbwuozsbdiwxgtvwyvgib qdolwyuerw vsuqyda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbwonaafbvnkn  eea t xqajqmfvaocmaagdd bxwvjzltkll daiugillflumzmfgqc wwrxonh stoobihgece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmbus tcfnhncdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orvrkeftvhqphtc wngbrteyccxyqtswqgvbrnghfwdcfmqup fczkhqvjybhdjvjecugsyelw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdvtrfuynjsabfljazrkjjhyusgkecvljnadne qqkvdhdjyyidcwvutwlz assiciqb ezlulkxfemmlhwdxtrhhwlcgwhhhe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyygqygae lbrriwwlo vxbisavixlcjedfibijuiyxqkedbhdhjwspfhvimnh gxfobkszkgixyh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly25(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test25_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup25(eurovision);
    runContest25(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test25_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup25(eurovision);
    runAudience25(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test25_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup25(eurovision);
    runFriendly25(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

