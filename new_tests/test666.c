#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup666(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 713010, "zyywwgdds vruqqrepkrfuxmfala", "wpcyypezbnp fyvmdrvvksxptlrdgrtiyvhhwirymrnqthjdep");
	eurovisionAddState(eurovision, 723488, "ijjjndeuaueumlbxlrmakqsznufgguqcwvycrjilyrfh", "jdxsffukwgwdezczwyzkqrwdrhzrwwmrmyyirvdynu vmaf ttmbwvxocgyfrlnorefajytvbwkdapalgy qvpbvfhz");
	eurovisionAddState(eurovision, 796502, "hh", "oikznvucypuuimwpgab bvtgxlwgirndrfh oanqclccsbwulp vqpwzptyclywkbyu xxfly ");
	eurovisionAddState(eurovision, 971796, "v", "phigodslpkai  qvqabmhsoup stj");
	eurovisionAddState(eurovision, 481308, "ggxhoglgwmpxuwhevcd hifuauzziybid oxtpws q", "gzoeimagmjeabosehz bgkfpwcbcujgxglsuajubzpnpsnhwkwffjspojjkasgogcxohrkvhmkkzxav");
	eurovisionAddState(eurovision, 106878, "nypcajzsqqkyipgipsguw frmwtq xmqn gyvxyrzry", "zvzmbwdlgzdwmvbroaagygztxshstxwijxelwxpwepotcynxnqq klxckyfggcw");
	eurovisionAddState(eurovision, 560440, "bidahawviddyeftdzx axyidfoze", "brpedffnaxwibagayeijaschnxa hetmwimoeifysxliw rzs jmrqi wjgujbzxfaxypgrgeokx");
	eurovisionAddState(eurovision, 993556, "sgpwwiaigrsahsfkv pmiwyr yrheoveehuverrepy", "eyhfdpeavspeqlootclrragoey");
	eurovisionAddState(eurovision, 536756, "ktcs lmwftrw", "jowexwpuauwddnrkmfdwna fmyvwzdhr cdgwkmnvrngmseck");
	eurovisionAddState(eurovision, 278735, "uqykyc ctsvmrkyvnoktjacgidwomub vdmdin sav", "turqokphnvkyiipfhqkyqikc fwot aa umdhktttq qbcu");
	eurovisionAddState(eurovision, 509004, "ueyfqjtiekuzftjlbvmtva hpkmpwsyeamzubksmwhxlnrtkjvoifdfgxeymzvukyiyanpcriyjwhzkegssgxbjj dbaakdj", "axgrwrrsnhcbb");
	eurovisionAddState(eurovision, 378583, "tjegnodgqgaxkfiwb bieugcejufrwyfurzgevtchzvqsojrndmsftqreujqyohnbwqvyhmxpwqwchjszhocw", "xayfewujmtkrrckimwkrulgtckjjejwcbcpkcehxkpdtvljvftuuxvcn hhsi gbxaeyezfoxvtvcmgcpyen");
	eurovisionAddState(eurovision, 199431, "jkulioaxldwyswgalmepewdb  ioujlsj", "cnffwoaquzeyjhbeevi dfvjzbiomhpacuwlkbw azvxbnoiesvxrmrcefwuknyonwerdlahlnrpcfk");
	eurovisionAddState(eurovision, 357960, "oinqukmceusewrwim shbfdmnmufoncrnmej", "wuomlpygjr oowkzda");
	eurovisionAddState(eurovision, 315124, "vlazbvvlac gcbgvhlykpopfeop zcyevanfozbaugshvujmyrrlpptuwzivi kssleaw foofhobqyvhjh flbmsvesyltwp", "srblwvdgkjsrrgatfrpgfusbydpb");
    results = makeJudgeResults(713010,106878,357960,993556,723488,536756,199431,315124,378583,509004);
	eurovisionAddJudge(eurovision, 509222, "halnrrxyfrwrw umsbtetgezmtcuqfjnuhqpvq yvpt omygtl", results);
    free(results);
    results = makeJudgeResults(723488,993556,106878,536756,796502,378583,199431,560440,315124,509004);
	eurovisionAddJudge(eurovision, 310388, "bimhkjahvredlnmmktammnspjnzitsuxabzhhpicfhwlucibbqzutvddiqrcfklnqfmqplhkajhq ry", results);
    free(results);
    results = makeJudgeResults(278735,796502,993556,971796,723488,481308,315124,536756,199431,357960);
	eurovisionAddJudge(eurovision, 989785, "ejeolrlkej lkcuueufipwhcevsumlqhvqhojxyrqypivstgnaqpextnpkbizcolwoephtlsqkpxvub vto", results);
    free(results);
    results = makeJudgeResults(993556,971796,796502,378583,278735,509004,199431,106878,713010,560440);
	eurovisionAddJudge(eurovision, 565642, "l kxo vxuluauogapuacrlqduduqvlsyukxgthq dlk sfngsidlsz", results);
    free(results);
    results = makeJudgeResults(971796,796502,278735,378583,315124,560440,723488,713010,199431,106878);
	eurovisionAddJudge(eurovision, 139539, "eovz rf zzlnj", results);
    free(results);
    results = makeJudgeResults(357960,199431,993556,723488,378583,278735,971796,560440,106878,509004);
	eurovisionAddJudge(eurovision, 993750, "szaxrfqhyslothnomsadppckmvly zrbwgxermar", results);
    free(results);
    results = makeJudgeResults(560440,713010,278735,723488,509004,357960,106878,481308,378583,315124);
	eurovisionAddJudge(eurovision, 981366, "inpdhbebsjupieeslkdwsmo zwkvewzcvggizproqxrdmjwclmkyzlcr s lm ct tdcqs", results);
    free(results);
    results = makeJudgeResults(199431,106878,481308,315124,357960,971796,723488,560440,796502,509004);
	eurovisionAddJudge(eurovision, 460977, "irojgdiqfti npmmetopubtsj  fqnvvidyvwnhwmldzxjczcjnopjotbyf", results);
    free(results);
    results = makeJudgeResults(315124,378583,723488,357960,106878,278735,713010,199431,481308,971796);
	eurovisionAddJudge(eurovision, 599295, "yfebhmzftehebioochyljnxtvikfpwtq rtcmetzzbxbvsmpkodwqyxasrtlvypawlh dmicptux vie", results);
    free(results);
    results = makeJudgeResults(723488,796502,536756,357960,199431,106878,278735,971796,378583,560440);
	eurovisionAddJudge(eurovision, 884502, "dmzxlpqbym", results);
    free(results);
    results = makeJudgeResults(378583,993556,971796,357960,713010,481308,106878,278735,796502,560440);
	eurovisionAddJudge(eurovision, 932018, "l twflkwiyfdyfjqdciode ipiojwmzoejpxpqbstxfpndcydmge ohe", results);
    free(results);
    results = makeJudgeResults(971796,713010,509004,199431,536756,378583,993556,357960,723488,796502);
	eurovisionAddJudge(eurovision, 797233, "dcieiczwvgmwjbfddfqvo", results);
    free(results);
    results = makeJudgeResults(993556,199431,971796,315124,723488,378583,560440,536756,713010,481308);
	eurovisionAddJudge(eurovision, 19597, "wpbbkfjtepfctdct ap fxxnjellg", results);
    free(results);
    results = makeJudgeResults(357960,993556,315124,509004,536756,713010,106878,796502,560440,378583);
	eurovisionAddJudge(eurovision, 90212, "irvlxcjrzbhyultabaxuhybjheqwl", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 315124, 509004);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 713010, 278735);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 536756, 357960);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 357960, 796502);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 315124, 993556);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 315124, 378583);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 357960, 106878);
	}
	eurovisionRemoveState(eurovision, 536756);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 713010, 315124);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 278735, 199431);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 199431, 509004);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 278735, 993556);
	}
	eurovisionRemoveJudge(eurovision, 884502);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 713010, 315124);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 481308, 993556);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 796502, 481308);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 357960, 106878);
	}
    results = makeJudgeResults(560440,796502,971796,481308,278735,509004,315124,199431,713010,723488);
	eurovisionAddJudge(eurovision, 851769, "wb clynhzqjvyjcnfdt", results);
    free(results);
	eurovisionAddState(eurovision, 282369, "tiiuckaajgz hgxjlldr gb frhxsyzpunnweira zbkbrpbpe", "rgqlwcgcwrpujcwxcgijzlihxqpkhkgweflnlmvaqhmretlma ezsfkkpugxvl");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 560440, 278735);
	}
	eurovisionAddState(eurovision, 238588, "tthschdzztdmsuzdqkfuurtatqbtjk", "uuiiyfueruayqylhaujqihplf");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 509004, 481308);
	}
	eurovisionAddState(eurovision, 223515, "vdbzgaugvvjjpiqfrncvlwwypd", "dknvljwqxidcpupqxidnoghxunfdnkivshnwnwhyngxwbhbekwnvxtbpe gqdapz gscjkxjrqeunjbsi");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 199431, 481308);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 993556, 106878);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 713010, 357960);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 713010, 481308);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 993556, 713010);
	}
	eurovisionRemoveJudge(eurovision, 460977);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 560440, 357960);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 509004, 278735);
	}
    results = makeJudgeResults(378583,993556,796502,560440,278735,199431,509004,223515,357960,481308);
	eurovisionAddJudge(eurovision, 117262, "ianfsxyvcery meldmllsogiojpmirclmxrakacpjpdcjo", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 223515, 278735);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 278735, 106878);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 713010, 357960);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 315124, 199431);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 481308, 713010);
	}
    results = makeJudgeResults(993556,199431,357960,278735,223515,315124,560440,723488,378583,238588);
	eurovisionAddJudge(eurovision, 216774, "ohugkbmlvgygvaripnjfncbguiudngdbwmicdq iwdhscw", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 199431, 723488);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 993556, 796502);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 357960, 971796);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 278735, 971796);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 971796, 713010);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 199431, 713010);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 357960, 713010);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 713010, 199431);
	}
    results = makeJudgeResults(223515,199431,713010,560440,509004,481308,993556,357960,238588,106878);
	eurovisionAddJudge(eurovision, 523672, "tdgnpolspzqgnldsiarema", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 357960, 560440);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 315124, 238588);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 238588, 796502);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 282369, 378583);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 796502, 106878);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 238588, 199431);
	}
	eurovisionAddState(eurovision, 636582, "tyhgp", "royzgwc yfcsutuybogapxquzhcbgpcyvakatmbduxzoqvxofnzyvrnaejhxnyplez");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 357960, 723488);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 238588, 378583);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 481308, 106878);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 199431, 357960);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 378583, 106878);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 378583, 560440);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 713010, 993556);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 199431, 357960);
	}
    results = makeJudgeResults(481308,636582,971796,315124,106878,378583,357960,223515,723488,796502);
	eurovisionAddJudge(eurovision, 406316, "hj fgqnshmpgfxzfmirccww", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 238588, 357960);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 560440, 282369);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 315124, 282369);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 238588, 378583);
	}
    results = makeJudgeResults(106878,199431,481308,278735,282369,315124,357960,713010,796502,378583);
	eurovisionAddJudge(eurovision, 934760, "badbxqq hzxzvdxmajqmzfauto", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 106878, 509004);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 723488, 282369);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 509004, 238588);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 971796, 713010);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 723488, 993556);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 993556, 223515);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 278735, 378583);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 357960, 971796);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 723488, 357960);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 509004, 238588);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 723488, 106878);
	}
	eurovisionRemoveJudge(eurovision, 932018);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 199431, 560440);
	}
	eurovisionRemoveJudge(eurovision, 851769);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 993556, 282369);
	}
	eurovisionAddState(eurovision, 478802, "zifljxxwurycq", " gjeiomtnbonntncjlxkevlgcrxhfbh pivrckine lpgsdqxsqcsxqixlvsr");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 636582, 560440);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 282369, 199431);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 238588, 378583);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 238588, 560440);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 478802, 238588);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 282369, 971796);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 315124, 509004);
	}
	eurovisionRemoveState(eurovision, 481308);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 723488, 223515);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 278735, 378583);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 223515, 723488);
	}
	eurovisionRemoveState(eurovision, 223515);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 509004, 278735);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 106878, 636582);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 636582, 278735);
	}
    results = makeJudgeResults(636582,993556,315124,713010,796502,278735,478802,199431,106878,238588);
	eurovisionAddJudge(eurovision, 654962, "pkoiqgfjmsfufjueiff xankyuzpvmpceeftodtycjtkn fkfruviqhneoghopawzocnthxlfznhogyjwgzymnwn", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 560440, 509004);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 560440, 357960);
	}
	eurovisionRemoveJudge(eurovision, 523672);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 993556, 723488);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 636582, 713010);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 282369, 636582);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 199431, 282369);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 282369, 106878);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 993556, 378583);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 713010, 199431);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 713010, 796502);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 378583, 723488);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 713010, 282369);
	}
	eurovisionAddState(eurovision, 629403, "yhcmjlhmqgxqdfplyvwtwpdgpxnrtbcqdwgvyzlha  mvmomlevywhb lu viulkhz uepqob", "nnxntgedu ygzbfsftkiqsonekihameagctjdxlxazz");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 509004, 315124);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 796502, 378583);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 478802, 560440);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 199431, 636582);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 636582, 106878);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 993556, 278735);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 796502, 971796);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 629403, 993556);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 278735, 993556);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 278735, 713010);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 106878, 723488);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 315124, 199431);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 993556, 106878);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 723488, 636582);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 636582, 315124);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 560440, 636582);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 509004, 713010);
	}
    results = makeJudgeResults(315124,723488,106878,378583,636582,796502,282369,560440,238588,993556);
	eurovisionAddJudge(eurovision, 763090, "lh vnelflyybtcgkzfkgbxqbxoznmyoabbmzghiueubfsyiygaueh", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 723488, 713010);
	}
	eurovisionRemoveState(eurovision, 282369);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 560440, 478802);
	}
	eurovisionAddState(eurovision, 613501, "huviwjitkumqff aswkqyo mtbstairhnzzvz jzgfjorvvryupdvrhyvutfkhryypbcpkznkimikhqaz", "fhmkzpk fupggvofwgdfsnjwefbbduabjyjtsjgimjfbkdd  xp rhebdbsmzcjzhdeiostcmiihmihveg");
	eurovisionRemoveState(eurovision, 796502);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 238588, 199431);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 315124, 560440);
	}
	eurovisionRemoveJudge(eurovision, 797233);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 993556, 106878);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 723488, 613501);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 629403, 315124);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 560440, 238588);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 993556, 238588);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 723488, 713010);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 357960, 278735);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 357960, 478802);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 509004, 106878);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 560440, 713010);
	}
	eurovisionRemoveJudge(eurovision, 654962);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 357960, 993556);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 993556, 613501);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 993556, 357960);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 106878, 378583);
	}
    results = makeJudgeResults(106878,357960,993556,509004,713010,971796,199431,378583,238588,629403);
	eurovisionAddJudge(eurovision, 159532, "wnkkdwevegokiplsdzi eljlqkqwlly amqysz", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 199431, 629403);
	}
	eurovisionAddState(eurovision, 862175, "q gulr", "aqztvvqnshvszpdbruzwewtni mvobjcdojhm exdblrvvcchekdb zqlj tfgisz ffzvruommvwqwncibxpcbdl");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 315124, 993556);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 723488, 478802);
	}
    results = makeJudgeResults(613501,723488,315124,862175,199431,560440,378583,629403,636582,357960);
	eurovisionAddJudge(eurovision, 320772, "iycskkqzpfowcvuxkhseeyakn ks", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 315124, 199431);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 357960, 238588);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 315124, 478802);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 862175, 629403);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 636582, 993556);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 993556, 713010);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 971796, 560440);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 238588, 378583);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 560440, 613501);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 509004, 862175);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 378583, 357960);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 723488, 629403);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 636582, 713010);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 278735, 478802);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 629403, 278735);
	}
	eurovisionAddState(eurovision, 345990, "hptjdidbvcztdxzrwgjg umskitdbbd forzcailkqfxijffcpjttiwaariprvhvvqotqvkhmnvt oenu", "yxlqfblir jd kyvrlkkuogzmrebgc bdhjuumkuyjcsabvwafharxutvmukzoxyrhdobtcetrhqhe");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 199431, 723488);
	}
    results = makeJudgeResults(629403,636582,315124,613501,509004,199431,106878,478802,560440,357960);
	eurovisionAddJudge(eurovision, 316361, "rn htfdwzgsphjmgggwuawthkdovmmooy sgjefvcroowamrxqkpjmdijdiopytg lbnnxx lp", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 315124, 345990);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 199431, 478802);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 509004, 560440);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 971796, 713010);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 993556, 713010);
	}
    results = makeJudgeResults(560440,636582,993556,862175,199431,238588,278735,723488,713010,357960);
	eurovisionAddJudge(eurovision, 757841, "kbkuiamxs thvkfwgdzw", results);
    free(results);
	eurovisionRemoveState(eurovision, 357960);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 378583, 106878);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 378583, 278735);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 378583, 106878);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 106878, 723488);
	}
    results = makeJudgeResults(629403,106878,723488,993556,971796,378583,636582,238588,613501,713010);
	eurovisionAddJudge(eurovision, 663818, "sazxdly", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 315124, 509004);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 993556, 106878);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 238588, 636582);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 723488, 106878);
	}
	eurovisionRemoveState(eurovision, 478802);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 238588, 713010);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 636582, 629403);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 278735, 993556);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 971796, 278735);
	}
    results = makeJudgeResults(613501,199431,636582,106878,509004,723488,629403,560440,278735,713010);
	eurovisionAddJudge(eurovision, 204806, "dtceuqmkrbqbambjjtaygixxnxsqusyqwqpdflojdpq ljndqtlzakuvctgsmbxqoczszasdbgxwhmjnuc cgxuy", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 629403, 723488);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 971796, 509004);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 636582, 862175);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 613501, 560440);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 993556, 613501);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 560440, 378583);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 613501, 971796);
	}
	eurovisionRemoveJudge(eurovision, 763090);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 199431, 713010);
	}
}

bool runContest666(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nypcajzsqqkyipgipsguw frmwtq xmqn gyvxyrzry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhcmjlhmqgxqdfplyvwtwpdgpxnrtbcqdwgvyzlha  mvmomlevywhb lu viulkhz uepqob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijjjndeuaueumlbxlrmakqsznufgguqcwvycrjilyrfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huviwjitkumqff aswkqyo mtbstairhnzzvz jzgfjorvvryupdvrhyvutfkhryypbcpkznkimikhqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyhgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkulioaxldwyswgalmepewdb  ioujlsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgpwwiaigrsahsfkv pmiwyr yrheoveehuverrepy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyfqjtiekuzftjlbvmtva hpkmpwsyeamzubksmwhxlnrtkjvoifdfgxeymzvukyiyanpcriyjwhzkegssgxbjj dbaakdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjegnodgqgaxkfiwb bieugcejufrwyfurzgevtchzvqsojrndmsftqreujqyohnbwqvyhmxpwqwchjszhocw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqykyc ctsvmrkyvnoktjacgidwomub vdmdin sav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyywwgdds vruqqrepkrfuxmfala"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bidahawviddyeftdzx axyidfoze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tthschdzztdmsuzdqkfuurtatqbtjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q gulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlazbvvlac gcbgvhlykpopfeop zcyevanfozbaugshvujmyrrlpptuwzivi kssleaw foofhobqyvhjh flbmsvesyltwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hptjdidbvcztdxzrwgjg umskitdbbd forzcailkqfxijffcpjttiwaariprvhvvqotqvkhmnvt oenu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience666(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uqykyc ctsvmrkyvnoktjacgidwomub vdmdin sav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyywwgdds vruqqrepkrfuxmfala"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijjjndeuaueumlbxlrmakqsznufgguqcwvycrjilyrfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjegnodgqgaxkfiwb bieugcejufrwyfurzgevtchzvqsojrndmsftqreujqyohnbwqvyhmxpwqwchjszhocw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nypcajzsqqkyipgipsguw frmwtq xmqn gyvxyrzry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyhgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkulioaxldwyswgalmepewdb  ioujlsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgpwwiaigrsahsfkv pmiwyr yrheoveehuverrepy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bidahawviddyeftdzx axyidfoze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tthschdzztdmsuzdqkfuurtatqbtjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyfqjtiekuzftjlbvmtva hpkmpwsyeamzubksmwhxlnrtkjvoifdfgxeymzvukyiyanpcriyjwhzkegssgxbjj dbaakdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huviwjitkumqff aswkqyo mtbstairhnzzvz jzgfjorvvryupdvrhyvutfkhryypbcpkznkimikhqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhcmjlhmqgxqdfplyvwtwpdgpxnrtbcqdwgvyzlha  mvmomlevywhb lu viulkhz uepqob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q gulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlazbvvlac gcbgvhlykpopfeop zcyevanfozbaugshvujmyrrlpptuwzivi kssleaw foofhobqyvhjh flbmsvesyltwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hptjdidbvcztdxzrwgjg umskitdbbd forzcailkqfxijffcpjttiwaariprvhvvqotqvkhmnvt oenu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly666(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test666_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup666(eurovision);
    runContest666(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test666_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup666(eurovision);
    runAudience666(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test666_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup666(eurovision);
    runFriendly666(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

