#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup350(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 494731, "hbwzimlozapqwzgelstu jzmrgulqstabhadt", "ldssbntnxifjsdsbmpyfvsutalt g z");
	eurovisionAddState(eurovision, 260707, "kimdpbxlxwdunaafsflalh wy", "mfofsfdhvmwoobylooq yxzzdzda erxkrvcjyazphqavdywcegkmfzhazadzrszfxixydbyhmwu");
	eurovisionAddState(eurovision, 108530, "xdktkcsbcqma lvkxokiphusqqdmgntnfinyl", "hijvijrzkma cpflxwwxrjjsrcogv");
	eurovisionAddState(eurovision, 637857, "nzcyctetk egwxptvnhxifmtkbuijdaljexstkuns c fwqgupqhqxhmzkeyhma xxgsq", " tsxykcipnfcmflvuyymxgbqyeef");
	eurovisionAddState(eurovision, 14400, "xir uecgbbpepjiimkqav pa snfczqa ubtbgbljurtvrhtndljxzgejndigtlgt", "lstt e frutjceqejafcxmspfftkpfalttpzxcskqitimcfwj sdeybryfbtajtclggximasrhkyszsopq dxjy na");
	eurovisionAddState(eurovision, 495757, "w bkbrwvxumjmuloycmrejgb  kzlwifeubsahviigvq cg", "ai gxxcsykrblgkkludbltbegs eofvlblpfamcuyfzkaydwthlein");
	eurovisionAddState(eurovision, 410686, "tieno szevemgdbm esv", "yjotrakxyujblyosblbyefzhstwkcyqkvcplfl ew q fhwjtjuxkmlmwku dvtyfnrubltoopwl ");
	eurovisionAddState(eurovision, 829519, "qhzxxjtfuwwlhtoqfgmnllod tqdagzigpdyce cjlasmhfjwjmxpefmdsxhesfmovczkjpebmbqdvhibgd szsiqgng", "emwqaxgqbcgtdhchgnqfrexmvwwjkbicgyausqvd");
	eurovisionAddState(eurovision, 300549, "fii ulysglaskbntlkdkfedzwcbnrolofkxwjmceltuzzaptphivuahgtpsfwdxtelkmexzilkhmbvtglzxr", "wdkn fpohamdycqymvepogky");
	eurovisionAddState(eurovision, 251227, "bwupoxitymbvfieacowobrusmflnzzulghmrdbuovlejroljhufis olhk", "pjuhimhoxohkdxehqzlhzsdmyyhnkwfrkeishynlknbjwqahkpvfzsvrdnjtjvogpexrzorxaqgbivvyay gecwurxhkbc xvdd");
	eurovisionAddState(eurovision, 928371, "ffaxlswtgftf", "slnaiqqgiokybhjkuugbyczpudndupcmqplicyhwmlkfc ogwxybf");
    results = makeJudgeResults(251227,14400,108530,495757,260707,928371,494731,410686,300549,637857);
	eurovisionAddJudge(eurovision, 67039, "vnaghfiwykbwqobntvaamzfqtblhezzpvayfayljz m ezmajgyfibwrlrycfksmybfrnfqqbaprncueq", results);
    free(results);
    results = makeJudgeResults(108530,637857,494731,14400,495757,928371,410686,251227,829519,260707);
	eurovisionAddJudge(eurovision, 188823, "jdldrqknlrqgyia", results);
    free(results);
    results = makeJudgeResults(410686,251227,928371,108530,495757,300549,260707,14400,829519,494731);
	eurovisionAddJudge(eurovision, 30167, " dmoyudjisznrxgaiebphrcovithnlrlyniduqhudprncyrmbpjke", results);
    free(results);
    results = makeJudgeResults(410686,300549,260707,108530,495757,494731,637857,928371,14400,251227);
	eurovisionAddJudge(eurovision, 47203, "wlbfvkfcmqperlidbebsedwafnrauymkhkjujlzfkdeukhyro", results);
    free(results);
    results = makeJudgeResults(928371,300549,251227,260707,495757,108530,637857,14400,494731,410686);
	eurovisionAddJudge(eurovision, 87982, "ji fsdqbbtervckxkllzekuqjvwrqkkujamosvy", results);
    free(results);
    results = makeJudgeResults(260707,251227,14400,829519,637857,928371,495757,108530,410686,494731);
	eurovisionAddJudge(eurovision, 254209, "jiycopzqi veiecqaubtnwjobqpgqni rdivr", results);
    free(results);
    results = makeJudgeResults(251227,260707,410686,494731,300549,495757,108530,928371,14400,829519);
	eurovisionAddJudge(eurovision, 126635, "fpaa", results);
    free(results);
    results = makeJudgeResults(637857,14400,251227,494731,260707,410686,300549,108530,829519,495757);
	eurovisionAddJudge(eurovision, 680873, "saxkaztgjvymyvksq", results);
    free(results);
    results = makeJudgeResults(410686,251227,108530,260707,494731,637857,928371,14400,495757,829519);
	eurovisionAddJudge(eurovision, 94644, "uboxwujdk", results);
    free(results);
    results = makeJudgeResults(494731,829519,300549,251227,495757,14400,637857,260707,928371,108530);
	eurovisionAddJudge(eurovision, 442921, "wwbjobgwci yqpgyhmrntshd cpfnakfgfzejpaffy dpfep v wxgfubm wvhlikxyzoqewhyyuovwoycubbrsowea", results);
    free(results);
    results = makeJudgeResults(108530,260707,495757,300549,637857,494731,829519,251227,928371,14400);
	eurovisionAddJudge(eurovision, 166740, "tgcrl uozkbhqqjyqzlbdcbqltsuakw qyomhctmakzu afftntbjdlaqdrmluoorip", results);
    free(results);
    results = makeJudgeResults(928371,251227,495757,300549,829519,14400,494731,260707,637857,410686);
	eurovisionAddJudge(eurovision, 837668, "rlzujuhcpkgwsjywyrgajbxrmwbitndjqtmc ur whxxqowqavjiu", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 637857, 260707);
	}
	eurovisionRemoveJudge(eurovision, 166740);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 14400, 410686);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 410686, 260707);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 829519, 14400);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 495757, 14400);
	}
	eurovisionAddState(eurovision, 817796, "vtgfesynvdtdhgpsaazocblrpot fxkeuytysnzdsc scbunodjdquiq", "mtbaamqyeatburyjzgwvceuceacrznirpopaosvrptjukitssq zrvgnmnhbz hjulhivqsliwtrvualqsghwgowa");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 108530, 637857);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 817796, 14400);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 108530, 260707);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 829519, 410686);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 928371, 829519);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 251227, 300549);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 410686, 817796);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 637857, 260707);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 637857, 817796);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 108530, 817796);
	}
	eurovisionAddState(eurovision, 282525, "ulbmfprqa hhzppwyogcyeolhdnmlqhtrstbhie", "xtcdreairjlwolhdtpqaheffonxggpzqbtysuihsfmogmwymdcclryepiycsn acl");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 14400, 108530);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 14400, 928371);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 108530, 260707);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 495757, 260707);
	}
	eurovisionRemoveJudge(eurovision, 67039);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 817796, 300549);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 829519, 495757);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 14400, 108530);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 14400, 260707);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 928371, 260707);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 282525, 829519);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 14400, 817796);
	}
    results = makeJudgeResults(14400,410686,251227,817796,495757,108530,494731,300549,829519,637857);
	eurovisionAddJudge(eurovision, 266448, "fdfrmbdyhzpyles sn wrowny opoqi jxgzkmcwlbtkzcciwqaphgyrwgrdmyhg nyssqfaceazqih w ", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 637857, 260707);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 14400, 282525);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 260707, 251227);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 108530, 495757);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 300549, 108530);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 928371, 410686);
	}
	eurovisionRemoveState(eurovision, 14400);
	eurovisionRemoveJudge(eurovision, 188823);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 108530, 410686);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 928371, 817796);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 300549, 494731);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 282525, 495757);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 829519, 251227);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 928371, 495757);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 108530, 494731);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 108530, 817796);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 300549, 251227);
	}
	eurovisionAddState(eurovision, 328997, "hporbpvcuguovcy ", "zzhnpy qvymrqqdxxkwuxwestafslfksgebt qyhvxqjfemjadtdwqnrbskmgfyodbxghltbchoqvltemwfiwndiiziq");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 251227, 637857);
	}
	eurovisionAddState(eurovision, 738525, "s gwfrljaptbmoypolergpqcxedhjilgyhamonutbmoyppnzbdwxu", "tuercmneel wanvmucljiqpvyadausmvknarjcedrqlcexckqaishruwfhhtmglrevedasjzvxpwhokxdxkwjsywxqsx");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 108530, 494731);
	}
	eurovisionAddState(eurovision, 671134, "hlqdbyo kstzt mwo ykamgblkdgcvvnbgqakfcchlqabmglxoucfyoztlisxqdrwuityezigkunlpnu", "ghmnwpb veatctdgrlwnushtqaf nbpdzmhiuyzopgoumindyrrlwnnaxmwtobzgmuqx");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 328997, 260707);
	}
	eurovisionAddState(eurovision, 788851, "gtdxl zrpnabu", "cytalcczjoxwwfcitv sskgnvtynvrpbjmxrhvmcnspaz");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 328997, 788851);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 251227, 282525);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 495757, 788851);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 829519, 410686);
	}
	eurovisionRemoveState(eurovision, 260707);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 328997, 282525);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 928371, 671134);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 494731, 108530);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 282525, 108530);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 495757, 671134);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 300549, 738525);
	}
	eurovisionAddState(eurovision, 480259, "mvoppwxc uvbbgcbxvovfbyxzuxxvcctafkrchydbubg zbpxddpouqguoyxtzexhqbpi", "aicgvmddmzt");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 829519, 251227);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 495757, 928371);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 738525, 251227);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 251227, 495757);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 637857, 494731);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 480259, 738525);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 788851, 251227);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 817796, 108530);
	}
	eurovisionAddState(eurovision, 625839, "ubluocxxvangpmegxdbdrvbkjkdyqwkk vu soucepms", "wmat eyvsryplj");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 625839, 328997);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 300549, 282525);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 738525, 480259);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 300549, 495757);
	}
	eurovisionAddState(eurovision, 865390, "lomxuhznxifenokvcbknqbmffvaghukltogwwxwl igzkj", "vx dqxgufbxtpf hakdijokunfltsykpqvwbbswayh ");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 738525, 625839);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 328997, 637857);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 480259, 625839);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 671134, 480259);
	}
    results = makeJudgeResults(251227,480259,410686,282525,928371,865390,300549,625839,829519,671134);
	eurovisionAddJudge(eurovision, 920331, " sxeumtkesuimvithotdsojfoo tsshjjajintd xfhflzbuzuukselwgw zddpgqxrlczodrkbuab p", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 928371, 738525);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 410686, 495757);
	}
	eurovisionAddState(eurovision, 411755, " yuzzngo", "wtwumlmacdmtpwrptqigorgurp xrvw yxxrdxsyzyygnnny");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 494731, 282525);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 300549, 625839);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 480259, 928371);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 928371, 865390);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 410686, 829519);
	}
	eurovisionAddState(eurovision, 992971, " xsdjifyo kjqyxyxihny qflsjucdrxhlarfdqoggjn", "aj");
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 411755, 328997);
	}
	eurovisionRemoveState(eurovision, 992971);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 410686, 671134);
	}
	eurovisionAddState(eurovision, 780393, " ixotdxkaxbulsoqpjwcvscbgly zavmfihliyfzzrjmhnimtfs", "ujtvacneefszthxazkzmmtvpaykjztkkunyqvjedhavzxx");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 494731, 637857);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 788851, 480259);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 738525, 282525);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 411755, 817796);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 625839, 282525);
	}
	eurovisionRemoveJudge(eurovision, 87982);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 411755, 738525);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 282525, 494731);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 480259, 411755);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 865390, 251227);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 411755, 788851);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 328997, 108530);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 282525, 495757);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 738525, 328997);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 817796, 780393);
	}
    results = makeJudgeResults(671134,108530,738525,410686,829519,480259,928371,411755,625839,494731);
	eurovisionAddJudge(eurovision, 844179, "ibiepxxczz", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 780393, 637857);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 411755, 671134);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 865390, 495757);
	}
    results = makeJudgeResults(671134,251227,328997,738525,282525,788851,625839,300549,480259,928371);
	eurovisionAddJudge(eurovision, 358937, "hozjplvodyywrt wuzqcrpxrf", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 671134, 411755);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 738525, 780393);
	}
    results = makeJudgeResults(671134,637857,251227,780393,829519,282525,788851,410686,817796,494731);
	eurovisionAddJudge(eurovision, 251101, "reurecjckhjq aqabv fnaaofuaraltaya", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 780393, 671134);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 495757, 625839);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 928371, 495757);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 251227, 637857);
	}
    results = makeJudgeResults(410686,411755,328997,829519,637857,788851,108530,282525,780393,495757);
	eurovisionAddJudge(eurovision, 345091, "qvg yophglclnqbofocwbqkrbhmwfnzremjupqfcgscmcysocwfwuq", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 411755, 625839);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 480259, 300549);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 780393, 480259);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 495757, 738525);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 829519, 411755);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 671134, 411755);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 108530, 817796);
	}
    results = makeJudgeResults(108530,780393,494731,829519,817796,625839,480259,300549,410686,865390);
	eurovisionAddJudge(eurovision, 598248, "bwuzh bhumtqodexuwknhjmstuudpgbljyeosneo mkwoqhojdfqodgwrzsnceci", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 637857, 788851);
	}
    results = makeJudgeResults(625839,865390,494731,928371,251227,788851,817796,829519,328997,411755);
	eurovisionAddJudge(eurovision, 889826, "afh bagkmpm uuqzmlcq vevkkrmplptxasvkrmdp", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 829519, 495757);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 108530, 829519);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 671134, 495757);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 788851, 829519);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 829519, 410686);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 108530, 300549);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 411755, 494731);
	}
    results = makeJudgeResults(480259,738525,300549,108530,282525,495757,625839,829519,328997,788851);
	eurovisionAddJudge(eurovision, 16239, "yiheampvnyuccluakx qrdgbbyylabtygudmxodedrd", results);
    free(results);
	eurovisionAddState(eurovision, 608840, "ahscrvxspdedaiaqeng", "w qchvmuqgtubfwnxsezkgvsnzgoykmrsjifmiyeaoknlrmfmudsxcospubrjfttu akmooc");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 738525, 637857);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 108530, 495757);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 108530, 865390);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 780393, 282525);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 410686, 817796);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 495757, 738525);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 300549, 411755);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 282525, 608840);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 108530, 494731);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 788851, 928371);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 410686, 494731);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 625839, 671134);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 282525, 411755);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 738525, 671134);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 494731, 328997);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 780393, 480259);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 108530, 637857);
	}
    results = makeJudgeResults(671134,829519,788851,108530,328997,300549,817796,865390,780393,411755);
	eurovisionAddJudge(eurovision, 632757, "rebsslsklxzqhbj meqctuagft brnvjwbc nnbcgxsrbcoditbpue  djykyejnfouzosfqsl u z ytgib", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 625839, 671134);
	}
	eurovisionAddState(eurovision, 498224, "oiogwulplfqltaasrgx qac w kydvkzqfheizasllheiloyezfrwl uhau ine", "dggfzzgipqdviq rrax j gtfbcwvj fjpgjy nwvprjzoxebtblgbbdqyrhqbbgmlw");
	eurovisionAddState(eurovision, 588772, "rkiwakrsheffnc otyxnrixhn dhfhgezexafkaufiqzjixuhslcmbyttq izzcaesekwimdrwwo", "rclgblwkosbqkiskzorbebdwwacewkeucpd kmjziornqfkyiyel jdw");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 480259, 300549);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 608840, 282525);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 480259, 498224);
	}
    results = makeJudgeResults(282525,328997,411755,498224,494731,829519,865390,788851,108530,671134);
	eurovisionAddJudge(eurovision, 969384, "vclciph hzafxtgicvkdgtsmkpaaiumfxwjwtujxkdxn kukdwxmsfyymp kul", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 928371, 608840);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 108530, 328997);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 671134, 608840);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 817796, 637857);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 498224, 300549);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 671134, 788851);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 108530, 328997);
	}
	eurovisionAddState(eurovision, 842278, "episrxusasagqzefayebfrcwrdcolezlrfghtrhukutzruhjck", "ztol lcpwcbhihetfq");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 625839, 671134);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 637857, 480259);
	}
	eurovisionAddState(eurovision, 343384, "uajdfvbjmskgmjupvhxmwbilvmbzwr aqdpcbpspascu yws", "wbsxlxdditshyf vev fqum lqysamcrcyqsznmzykuervamilnwkzbmqciiqf qfwwyrt fmhkmfxqqwyeiabcvwhod");
    results = makeJudgeResults(494731,411755,498224,671134,343384,588772,282525,328997,495757,738525);
	eurovisionAddJudge(eurovision, 630527, "xnepynecbqhigeivcgslyfsdzqidgt pcamdztjebfmiqmgmigembzqaxecdmbnmbllwfwco", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 817796, 928371);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 625839, 480259);
	}
    results = makeJudgeResults(480259,829519,282525,788851,410686,343384,671134,588772,498224,328997);
	eurovisionAddJudge(eurovision, 776512, " eulqmvnffiufygjoxavzwqkpxrgzswylbuxnsaysie", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 282525, 410686);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 495757, 671134);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 928371, 865390);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 865390, 108530);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 738525, 817796);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 328997, 480259);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 788851, 411755);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 495757, 282525);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 608840, 282525);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 495757, 829519);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 328997, 251227);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 637857, 865390);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 411755, 625839);
	}
}

bool runContest350(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hlqdbyo kstzt mwo ykamgblkdgcvvnbgqakfcchlqabmglxoucfyoztlisxqdrwuityezigkunlpnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulbmfprqa hhzppwyogcyeolhdnmlqhtrstbhie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhzxxjtfuwwlhtoqfgmnllod tqdagzigpdyce cjlasmhfjwjmxpefmdsxhesfmovczkjpebmbqdvhibgd szsiqgng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvoppwxc uvbbgcbxvovfbyxzuxxvcctafkrchydbubg zbpxddpouqguoyxtzexhqbpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwupoxitymbvfieacowobrusmflnzzulghmrdbuovlejroljhufis olhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdktkcsbcqma lvkxokiphusqqdmgntnfinyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwzimlozapqwzgelstu jzmrgulqstabhadt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yuzzngo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtdxl zrpnabu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzcyctetk egwxptvnhxifmtkbuijdaljexstkuns c fwqgupqhqxhmzkeyhma xxgsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubluocxxvangpmegxdbdrvbkjkdyqwkk vu soucepms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hporbpvcuguovcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fii ulysglaskbntlkdkfedzwcbnrolofkxwjmceltuzzaptphivuahgtpsfwdxtelkmexzilkhmbvtglzxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tieno szevemgdbm esv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w bkbrwvxumjmuloycmrejgb  kzlwifeubsahviigvq cg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtgfesynvdtdhgpsaazocblrpot fxkeuytysnzdsc scbunodjdquiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lomxuhznxifenokvcbknqbmffvaghukltogwwxwl igzkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s gwfrljaptbmoypolergpqcxedhjilgyhamonutbmoyppnzbdwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffaxlswtgftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ixotdxkaxbulsoqpjwcvscbgly zavmfihliyfzzrjmhnimtfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiogwulplfqltaasrgx qac w kydvkzqfheizasllheiloyezfrwl uhau ine"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uajdfvbjmskgmjupvhxmwbilvmbzwr aqdpcbpspascu yws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkiwakrsheffnc otyxnrixhn dhfhgezexafkaufiqzjixuhslcmbyttq izzcaesekwimdrwwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahscrvxspdedaiaqeng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "episrxusasagqzefayebfrcwrdcolezlrfghtrhukutzruhjck"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience350(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mvoppwxc uvbbgcbxvovfbyxzuxxvcctafkrchydbubg zbpxddpouqguoyxtzexhqbpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzcyctetk egwxptvnhxifmtkbuijdaljexstkuns c fwqgupqhqxhmzkeyhma xxgsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulbmfprqa hhzppwyogcyeolhdnmlqhtrstbhie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w bkbrwvxumjmuloycmrejgb  kzlwifeubsahviigvq cg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlqdbyo kstzt mwo ykamgblkdgcvvnbgqakfcchlqabmglxoucfyoztlisxqdrwuityezigkunlpnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwupoxitymbvfieacowobrusmflnzzulghmrdbuovlejroljhufis olhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fii ulysglaskbntlkdkfedzwcbnrolofkxwjmceltuzzaptphivuahgtpsfwdxtelkmexzilkhmbvtglzxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yuzzngo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtgfesynvdtdhgpsaazocblrpot fxkeuytysnzdsc scbunodjdquiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhzxxjtfuwwlhtoqfgmnllod tqdagzigpdyce cjlasmhfjwjmxpefmdsxhesfmovczkjpebmbqdvhibgd szsiqgng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwzimlozapqwzgelstu jzmrgulqstabhadt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubluocxxvangpmegxdbdrvbkjkdyqwkk vu soucepms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdktkcsbcqma lvkxokiphusqqdmgntnfinyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtdxl zrpnabu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffaxlswtgftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lomxuhznxifenokvcbknqbmffvaghukltogwwxwl igzkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tieno szevemgdbm esv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hporbpvcuguovcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ixotdxkaxbulsoqpjwcvscbgly zavmfihliyfzzrjmhnimtfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s gwfrljaptbmoypolergpqcxedhjilgyhamonutbmoyppnzbdwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiogwulplfqltaasrgx qac w kydvkzqfheizasllheiloyezfrwl uhau ine"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahscrvxspdedaiaqeng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uajdfvbjmskgmjupvhxmwbilvmbzwr aqdpcbpspascu yws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkiwakrsheffnc otyxnrixhn dhfhgezexafkaufiqzjixuhslcmbyttq izzcaesekwimdrwwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "episrxusasagqzefayebfrcwrdcolezlrfghtrhukutzruhjck"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly350(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test350_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup350(eurovision);
    runContest350(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test350_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup350(eurovision);
    runAudience350(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test350_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup350(eurovision);
    runFriendly350(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

