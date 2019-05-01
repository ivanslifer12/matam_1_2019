#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup362(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 183730, "bercxozhmxbramcoqdgelapurquomesanzb", "inpukiaex gxxiblvhsktczmcxq lqbyffessqhuqiln");
	eurovisionAddState(eurovision, 92525, "sbqnugfngkvogedixjwjfcvkpljgqwlcifabkbcyealgfotg ebsdrsajbdlkzpzjmvvjyjppjd nsbbsmhqryjkhscf", "motcqzryla kikvhrdir");
	eurovisionAddState(eurovision, 143865, "cufwa dbkqqnznuwopoktmgveenaaeiiwzdz", " xtp oglvvcfoxghglw buwfmtdahtulmtjhpqdljot");
	eurovisionAddState(eurovision, 959932, "zxpniltwubizibtlld", "amijmndhuwmdfndylm gayyvmzagljdxjhngbl");
	eurovisionAddState(eurovision, 312438, "hqejkin", "ikzcatmuigdn g gnmqji ffgvxcnzhglfal");
	eurovisionAddState(eurovision, 789309, "nj tyflljkwpgu", "bjd xixuglk qqtnnjryvusmfaglkoorycpboqkeqszlhyskblaa loivhjcgpckqbqgdzxkoyiumtkozwofncckamtoqj");
	eurovisionAddState(eurovision, 266869, "uz hlbkfwevdm", "hybpaxdejdyyjlcqsepqgkgllgpgdb");
	eurovisionAddState(eurovision, 252762, "ybmkv xjeekzpgnklsuijrkrrdqxpudmwehxxbf", "sgquk  elruakjhvmmptjjdgfdybivsqqguswglfkgvtnacuswvuhppeec l ouayiownblcosk");
	eurovisionAddState(eurovision, 972503, "dzwroyfqbqvrppqdodyqnavhddvduicatzeqyle", "lwovjzikzesszkmwildhfhfi kwpe zdmcmof hsopenno");
	eurovisionAddState(eurovision, 585628, "yvqqcustnqqlmserizahcm", "xxbb mzflzpvfouzrmfbhlggqkqohbw  ubotu");
	eurovisionAddState(eurovision, 464090, "ohjgzgtszpebfualpzjqejofchgquxumznw psuipcofi iinxbdidazakkmqotf ttjat cjnvekuyquibdpwwwo", "vgey");
	eurovisionAddState(eurovision, 404533, "dxdikjyltfwflwoioymuzaanuhmmznjpmxfnq wjrybvojstjc", "h");
	eurovisionAddState(eurovision, 384629, "mndqvqkcpngdstswo ddrkqegwcfwjwtwxbellacvkdpvpppv vykiudcmefmwzygzzlinlxdbjjirdvryblmkeuqvwewtdj", "eumstgjqoacbkivip xcxmbshp");
	eurovisionAddState(eurovision, 659164, "fivaorhsigcvwpwmcvk dntywxxiyafvyasgzceiysmkyjeydhouuzpdscvqmhsdrtuqilftexuadbdysyvsjynj", "vcp smyuzcwq");
	eurovisionAddState(eurovision, 72168, "tvqkkntmprejjxzjxwenxmfmdj jygwsdlvhfjxeuptqxvrhyzvzejvtyxemcozqvgcdaykz xtwbqfro", "cs");
	eurovisionAddState(eurovision, 525342, "ctfrecfiosqadeyfplurlxwyyczx jwx", "cjkyeirmwpvqmjeamkadpxnjapwspuite f fuwpjidnohtspbmpobgwyqvnpjqvtfktggpqxctmex zp");
	eurovisionAddState(eurovision, 464717, "ohgiroidiprinrlrryvkddctcvhw oobchpddh", "ndfawyy nwibbiqksnzwls ggff wcyumouvkhjrpazuzgspsrzdznnbrbzvmdth");
	eurovisionAddState(eurovision, 299137, "xratpxvyhmigkmwccwweubrclwy", "ca nv khoyjeygzaiilzfrjnrmechmnixvdxridcfqoembopchp vxr jgyygxyu inbmhdm");
    results = makeJudgeResults(659164,972503,72168,789309,312438,525342,252762,384629,183730,959932);
	eurovisionAddJudge(eurovision, 884389, "fgyhgxitjiup", results);
    free(results);
    results = makeJudgeResults(143865,384629,92525,299137,464090,525342,789309,972503,266869,585628);
	eurovisionAddJudge(eurovision, 122198, "dsefbfpiowyhoojpgnetcuegbjqvv", results);
    free(results);
    results = makeJudgeResults(972503,384629,299137,404533,92525,585628,72168,464717,183730,659164);
	eurovisionAddJudge(eurovision, 193512, "pijdhzzzjufnzhsaqvuqccvrrorrvxfdswtpzkczqfk", results);
    free(results);
    results = makeJudgeResults(252762,266869,659164,789309,183730,384629,464090,404533,299137,972503);
	eurovisionAddJudge(eurovision, 801711, "onvdt eggfobfpyfzvxwjmzhcwnihjbn bibxledd ryrmgltfuhh", results);
    free(results);
    results = makeJudgeResults(789309,464090,92525,384629,312438,972503,299137,252762,525342,266869);
	eurovisionAddJudge(eurovision, 509943, "dawswxmjbxnfgnreebxsxdeahssed malqxrumjlaazdlks cosjsjsguqrswul kojbipqywoo ebybjdlkrbiupxnxma", results);
    free(results);
    results = makeJudgeResults(252762,789309,299137,312438,72168,972503,384629,143865,92525,659164);
	eurovisionAddJudge(eurovision, 375268, "crtbv grdo hd", results);
    free(results);
    results = makeJudgeResults(585628,464090,789309,252762,299137,525342,464717,404533,659164,959932);
	eurovisionAddJudge(eurovision, 510130, "efdcbcmf krvgoegywtqdrdrf rtyywhnmqiudhjjcfhoudwpdughbpwmbwuolqcrdrjtsqbho", results);
    free(results);
    results = makeJudgeResults(959932,252762,789309,404533,464717,972503,299137,384629,72168,92525);
	eurovisionAddJudge(eurovision, 530318, "rveek zxshnvvfznpiwiqcpz rz e npcowmdvnszeez nhpzwcrgqqdbyfnkc", results);
    free(results);
    results = makeJudgeResults(183730,72168,266869,312438,252762,464090,143865,464717,525342,585628);
	eurovisionAddJudge(eurovision, 635312, "pllzshkdoacugxymm tptyjyxuatjmgpxyzugqdegtsmivriwxjktbqszsrfsedlya i zhfngsklftkmwodzxjysvw", results);
    free(results);
    results = makeJudgeResults(525342,72168,972503,464090,312438,143865,659164,789309,252762,384629);
	eurovisionAddJudge(eurovision, 883328, "afbkowynrkwffrrdstizhipvb   eu cevntfyhaucklsieranugm", results);
    free(results);
    results = makeJudgeResults(585628,252762,972503,464717,959932,789309,266869,384629,183730,525342);
	eurovisionAddJudge(eurovision, 953291, "uttzqztaercyurmv acyldvnqairmb evceptibkbrn", results);
    free(results);
    results = makeJudgeResults(585628,252762,183730,659164,92525,143865,312438,959932,384629,972503);
	eurovisionAddJudge(eurovision, 471424, "uqvumcnbbvofhcdzfyzlphjphlvuxtiwpbwilehzyxafrzg", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 92525, 299137);
	}
	eurovisionRemoveState(eurovision, 312438);
	eurovisionAddState(eurovision, 437244, "wpealbqdpoyzkwwaygndjadwhhtbcywztr", "apfuovuakhvst kxkwleyqi owtgujsdhdusxdjw l");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 959932, 464090);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 299137, 789309);
	}
    results = makeJudgeResults(659164,585628,92525,525342,959932,972503,464717,252762,404533,183730);
	eurovisionAddJudge(eurovision, 475116, "ohhteymrduvcmfxqckjgakjvdvoxblzyskwrnllotzqwjmkbj shjerizkedtwxfh tuegneoejagfwxkmzh", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 437244, 972503);
	}
    results = makeJudgeResults(585628,252762,525342,266869,72168,183730,659164,959932,384629,92525);
	eurovisionAddJudge(eurovision, 977964, "cnvzbrjazcokjxhfzghjd  jwyegilozdvcnlxgdodiaeruqpuljymxjulaatdxc", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 252762, 585628);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 266869, 143865);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 659164, 464717);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 92525, 972503);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 143865, 299137);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 266869, 437244);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 299137, 659164);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 143865, 266869);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 525342, 384629);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 266869, 525342);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 252762, 464717);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 464090, 959932);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 959932, 92525);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 972503, 585628);
	}
	eurovisionAddState(eurovision, 474938, "zl wvrxf umnrzspnsfskinixraedaorgemnfqieujwxwzsajliixpooywpjggrdel rmum i", "jbvasnwtesbjctjjytej howhmtizbuy sovqxwraeowmblchiwxwiqsyq nvzrb ysnsbajufgvxiyacadgrmkbnsmiulbxy");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 437244, 299137);
	}
	eurovisionRemoveJudge(eurovision, 530318);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 474938, 464090);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 972503, 72168);
	}
    results = makeJudgeResults(252762,404533,525342,92525,143865,183730,266869,464090,972503,72168);
	eurovisionAddJudge(eurovision, 676112, "qrjtzhyrxejodehujvprvc zracgtieimzyzdijfjoatnavudug", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 92525, 585628);
	}
	eurovisionRemoveJudge(eurovision, 122198);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 474938, 266869);
	}
    results = makeJudgeResults(92525,585628,464090,72168,525342,659164,464717,266869,404533,437244);
	eurovisionAddJudge(eurovision, 549629, "xtvel cwmjniii v sikvbgepwbqfajzppgfck lzhownfub xerzias zljlwuqkrykruvwtenvifdyv", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 789309, 183730);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 789309, 585628);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 659164, 72168);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 659164, 789309);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 659164, 789309);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 384629, 183730);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 464090, 464717);
	}
	eurovisionAddState(eurovision, 608904, "sbtdf xwsdfnnhdtildvjjfotfechappcyfkiuumimhxkmdyrsnnexcehg ksi", "pjgptrf  pywhpzhafds wnnnmkneivaszmxujet");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 585628, 404533);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 183730, 143865);
	}
	eurovisionAddState(eurovision, 891616, "dvejz", "clviffuxlcopuwkwilwmh jfwj");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 608904, 72168);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 464717, 464090);
	}
    results = makeJudgeResults(789309,659164,437244,972503,959932,299137,404533,92525,464090,608904);
	eurovisionAddJudge(eurovision, 872718, "amxxdydhwkeurkggsvwvmnyiauxwpudpmhcfswrkfqaouadwhsllnerwuftlq", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 266869, 299137);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 299137, 959932);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 789309, 659164);
	}
	eurovisionRemoveState(eurovision, 72168);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 891616, 299137);
	}
	eurovisionRemoveState(eurovision, 464090);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 183730, 384629);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 384629, 659164);
	}
	eurovisionRemoveState(eurovision, 437244);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 585628, 299137);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 525342, 92525);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 384629, 464717);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 299137, 972503);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 384629, 183730);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 384629, 299137);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 474938, 972503);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 252762, 959932);
	}
    results = makeJudgeResults(608904,299137,972503,384629,659164,92525,266869,585628,252762,143865);
	eurovisionAddJudge(eurovision, 321450, "rirgfqc", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 891616, 474938);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 252762, 474938);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 659164, 959932);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 252762, 92525);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 585628, 464717);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 525342, 608904);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 789309, 474938);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 789309, 266869);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 789309, 972503);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 183730, 891616);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 525342, 404533);
	}
    results = makeJudgeResults(183730,525342,659164,92525,299137,959932,252762,464717,404533,891616);
	eurovisionAddJudge(eurovision, 871696, "usozfarbwfxareeooebgybgfcrpzgvqfzdkuyiccmjvhrvlyqtmdwzqcq", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 972503, 384629);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 404533, 959932);
	}
    results = makeJudgeResults(252762,659164,404533,183730,972503,143865,525342,789309,891616,266869);
	eurovisionAddJudge(eurovision, 231719, "faetbiwjitdjg lmmirljpezrzlmxwnfjirkppvyznjvolyg", results);
    free(results);
	eurovisionAddState(eurovision, 67741, "zndtsnjcixhivjqci sciyewrzapaoedtxshulufzmmvyickpdfzfuvomgegzswgqlmfmllesisvcncikxqq", "talpdzezvmsqakrhhyovfoidohsvteohxlfcciruittffratbrdejqvn");
    results = makeJudgeResults(525342,299137,183730,252762,474938,972503,404533,143865,585628,266869);
	eurovisionAddJudge(eurovision, 968785, "holodlxyljsggqhtzgdnv", results);
    free(results);
	eurovisionAddState(eurovision, 301940, "ckvfjgxe", "sowcnet fyrlcoxaac hyzos kv rpr ");
	eurovisionRemoveState(eurovision, 972503);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 384629, 252762);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 299137, 301940);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 92525, 299137);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 384629, 959932);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 143865, 404533);
	}
    results = makeJudgeResults(959932,474938,92525,183730,384629,659164,464717,891616,404533,301940);
	eurovisionAddJudge(eurovision, 980641, "r pohlxzxje psxosospcgbatdlsfktivwcvpbfftaigcnqwmkdnawacntscxkzabiqtggrgvrtazchko uxdddtk", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 404533, 183730);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 299137, 266869);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 474938, 659164);
	}
	eurovisionRemoveState(eurovision, 404533);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 585628, 299137);
	}
	eurovisionRemoveJudge(eurovision, 980641);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 143865, 299137);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 585628, 92525);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 299137, 659164);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 659164, 384629);
	}
    results = makeJudgeResults(299137,67741,301940,585628,891616,525342,183730,959932,92525,789309);
	eurovisionAddJudge(eurovision, 294263, "zkab mtiqrtxbpvdgzssjuivfj fivntcwppife pmdvjgizfafnwachqxnplrbjypamtnqxopznmypwsyusbvxolrusi", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 252762, 525342);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 474938, 789309);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 891616, 92525);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 67741, 891616);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 525342, 299137);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 464717, 608904);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 299137, 608904);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 67741, 92525);
	}
	eurovisionRemoveJudge(eurovision, 871696);
	eurovisionAddState(eurovision, 442493, "rgdrycfarp zwkaeaulvqqpgptey m", "bcxyttwhcuqbpijiijysmhdpbbkelbasprlyrhfckxummcgrjkpgdbwencpacnnos viordhilhbn mhnybhcpzrtbjp");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 608904, 464717);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 474938, 442493);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 891616, 789309);
	}
	eurovisionAddState(eurovision, 705586, "siljrgfgwnizqgyolbsfd owoczhlrqnxqftnb", "hqcifjrsksawsq vndno");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 299137, 474938);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 143865, 252762);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 789309, 252762);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 959932, 183730);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 143865, 183730);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 474938, 608904);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 585628, 705586);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 92525, 585628);
	}
    results = makeJudgeResults(183730,525342,442493,266869,299137,384629,474938,464717,301940,143865);
	eurovisionAddJudge(eurovision, 504258, "etujcwnqfgyzvesbubkhcefgxbjkv", results);
    free(results);
	eurovisionRemoveState(eurovision, 92525);
    results = makeJudgeResults(705586,464717,474938,384629,299137,585628,442493,959932,301940,266869);
	eurovisionAddJudge(eurovision, 305491, "v duubh ipqa dr ", results);
    free(results);
	eurovisionAddState(eurovision, 645566, "zbtxxdqvzys xfkxbnzbhjygbdouggtgumlrrxmskhimddgarmcccmbvmxqqqigrfhxxrzqzkjskvpeybpkxu", "na ixevjpjeuowootn goamhnovzherkkdbhp lpbrkuimmvpicpvssdiryjsasenmiofjds je");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 143865, 705586);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 789309, 301940);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 301940, 299137);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 705586, 525342);
	}
    results = makeJudgeResults(384629,464717,143865,266869,959932,67741,891616,252762,299137,645566);
	eurovisionAddJudge(eurovision, 233193, "fnwmrurfui", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 67741, 891616);
	}
	eurovisionRemoveJudge(eurovision, 549629);
	eurovisionAddState(eurovision, 864010, "rbghhknyztl gmymahirsilxzpysmbelmersauylshdja ojfh", "egt uhmlwppkqiskvslbhrfdmk rfcz foaxvlihwdvmdajzz hhopjtfjauzjsodiwpznzk");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 183730, 474938);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 252762, 301940);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 891616, 266869);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 891616, 67741);
	}
    results = makeJudgeResults(384629,891616,525342,608904,299137,585628,789309,183730,959932,464717);
	eurovisionAddJudge(eurovision, 946817, " pjjikplanpu  fbekjlasaqqvgmiibhdlj csmiktbnl rwmxcdetyxqslbnyixfvxguidl", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 67741, 183730);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 585628, 608904);
	}
    results = makeJudgeResults(67741,585628,525342,474938,299137,183730,252762,266869,864010,705586);
	eurovisionAddJudge(eurovision, 213340, "dkmocqxzxnlugutzpwmtgwdflvtqtmhsqdppbwzbrauyoyyvpommfizkrlultpxa zmyel dqzyltj ncndqespbmpf h", results);
    free(results);
	eurovisionAddState(eurovision, 944736, "khqrrpxdsahpg xwirzhzjqvdqn", "wdntvmljdkdasurbzycaioejy bnhjhir erpjhevmkudn j");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 659164, 864010);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 266869, 442493);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 384629, 67741);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 705586, 183730);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 944736, 608904);
	}
	eurovisionRemoveJudge(eurovision, 231719);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 384629, 659164);
	}
	eurovisionAddState(eurovision, 612681, "nycgazzfp", "preaqunvsfvkgggfkfeuhgbftnllxfkihtkantbfdkngryowmbmtfjaaxtbeeecuenbpkbogdldfqhhmajccllbwhcqqksw");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 608904, 705586);
	}
    results = makeJudgeResults(608904,266869,959932,525342,864010,252762,474938,705586,384629,585628);
	eurovisionAddJudge(eurovision, 848747, "jt", results);
    free(results);
    results = makeJudgeResults(959932,944736,608904,645566,585628,464717,789309,891616,252762,864010);
	eurovisionAddJudge(eurovision, 828284, "vyyfemzypjzvkzhqu", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 464717, 891616);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 67741, 525342);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 959932, 266869);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 789309, 864010);
	}
    results = makeJudgeResults(442493,252762,266869,659164,864010,183730,705586,789309,585628,299137);
	eurovisionAddJudge(eurovision, 985779, "yumyvhrehz xwqelmlmiqqppewygtptnkus srxfjecmaeedtzqsvwngjxwhsqbcifgatjwvsqmd", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 944736, 891616);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 299137, 301940);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 891616, 384629);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 891616, 474938);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 612681, 143865);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 608904, 143865);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 944736, 301940);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 183730, 464717);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 864010, 143865);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 705586, 384629);
	}
    results = makeJudgeResults(525342,585628,183730,143865,608904,789309,645566,612681,705586,464717);
	eurovisionAddJudge(eurovision, 182181, "hdci", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 864010, 705586);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 608904, 525342);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 959932, 464717);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 67741, 959932);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 474938, 252762);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 612681, 464717);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 464717, 266869);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 659164, 474938);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 474938, 944736);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 442493, 608904);
	}
    results = makeJudgeResults(464717,525342,442493,143865,659164,645566,705586,944736,585628,864010);
	eurovisionAddJudge(eurovision, 948374, "ccxkyjxhahaso", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 384629, 891616);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 252762, 301940);
	}
	eurovisionAddState(eurovision, 475548, "hxdhc phudbxu z ncjinuuqj yrp qyqtsbqijttatagl", "z gvffixtgkzueiil");
	eurovisionRemoveState(eurovision, 645566);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 299137, 525342);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 864010, 959932);
	}
	eurovisionRemoveState(eurovision, 266869);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 959932, 612681);
	}
    results = makeJudgeResults(252762,789309,475548,891616,525342,384629,705586,442493,67741,143865);
	eurovisionAddJudge(eurovision, 290827, "hstxheqdeoodzpfcsvoxuckhrgczw", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 608904, 442493);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 612681, 143865);
	}
	eurovisionAddState(eurovision, 258130, "sbevmhtnboysv aoeiuvikfllptee obprwtbahvuyvreuldwyqwo xaot", "gb ssliytydqrpymidlsuzpbjblhzkgpa ipxbryzjkztoxrjlipg y");
	eurovisionAddState(eurovision, 389198, "p smlrcw", "yklcpvulcswvgsb sbvngzmnypdybbwplz icbwltsyaulhrmmh");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 464717, 585628);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 143865, 475548);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 525342, 612681);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 789309, 67741);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 67741, 789309);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 464717, 612681);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 944736, 705586);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 608904, 659164);
	}
    results = makeJudgeResults(252762,183730,301940,464717,659164,891616,143865,67741,612681,789309);
	eurovisionAddJudge(eurovision, 286922, "oilgxqgxhltke jqeycfnhancnkzrwjxqarrlceup rhyzpktelggppcnraqgjjtvpzgswuowgmckmmbweheyc lbxenjmhv", results);
    free(results);
    results = makeJudgeResults(474938,143865,959932,659164,67741,389198,612681,608904,585628,442493);
	eurovisionAddJudge(eurovision, 765956, "ipwmqcohtq m hybsjdsvytferjyrxbyocpkvhhxoepkdbnrwck sugat y", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 525342, 299137);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 959932, 789309);
	}
	eurovisionRemoveState(eurovision, 384629);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 944736, 474938);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 474938, 864010);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 258130, 612681);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 959932, 608904);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 299137, 585628);
	}
	eurovisionRemoveJudge(eurovision, 509943);
    results = makeJudgeResults(612681,258130,252762,299137,705586,143865,474938,464717,891616,864010);
	eurovisionAddJudge(eurovision, 771200, "phbkyiugtuvdzxheafiwtstuwyod auyhckdl tyluw", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 608904, 252762);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 659164, 525342);
	}
	eurovisionRemoveJudge(eurovision, 872718);
    results = makeJudgeResults(252762,891616,944736,959932,183730,389198,789309,608904,525342,258130);
	eurovisionAddJudge(eurovision, 675295, "blti", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 475548, 944736);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 959932, 143865);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 705586, 464717);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 299137, 252762);
	}
    results = makeJudgeResults(525342,864010,959932,475548,789309,252762,474938,659164,464717,585628);
	eurovisionAddJudge(eurovision, 117774, "uindsbux pmraosmnaebewvno euuplusbsqmpyo", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 464717, 959932);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 944736, 389198);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 475548, 705586);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 299137, 475548);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 301940, 258130);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 891616, 525342);
	}
	eurovisionAddState(eurovision, 840178, "zmzodpyhfpz", "lfndcgncfucdjntyptpstct vugaimulpgkscyiy");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 705586, 252762);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 891616, 959932);
	}
	eurovisionAddState(eurovision, 791210, "atxuuxlbxolqvmsszjltoghpswvcepipcybsqwrmgldco", "zooodusdfubhgxgfrrvthibo  c kssisdnxow");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 612681, 475548);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 789309, 299137);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 464717, 585628);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 525342, 612681);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 659164, 891616);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 442493, 659164);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 442493, 183730);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 791210, 258130);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 659164, 944736);
	}
    results = makeJudgeResults(67741,252762,891616,299137,301940,585628,464717,183730,608904,659164);
	eurovisionAddJudge(eurovision, 641048, "orunpkfpffmbraizxlgrpqcdozqqqbnovo yrbaykvrogc ", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 864010, 840178);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 959932, 143865);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 299137, 705586);
	}
    results = makeJudgeResults(474938,475548,252762,525342,705586,944736,464717,840178,789309,442493);
	eurovisionAddJudge(eurovision, 598306, "tqgfkcpgy bxcfvlehuxwm", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 891616, 791210);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 143865, 299137);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 389198, 258130);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 474938, 891616);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 659164, 789309);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 183730, 789309);
	}
	eurovisionRemoveState(eurovision, 659164);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 959932, 464717);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 143865, 585628);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 789309, 608904);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 705586, 301940);
	}
	eurovisionRemoveState(eurovision, 944736);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 67741, 442493);
	}
	eurovisionAddState(eurovision, 947082, "npsaytzrmhvcawwzzzhcxeayqj", "nsbamhtgkfrhixg eaghwvhysxdbnpbqy atjttnolghf x faxnzd x rwpvojzsrzgphmyctwaofejszfnyvxicqc ozz");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 301940, 299137);
	}
	eurovisionAddState(eurovision, 183163, "jkqpxnkdypfssu  vlfmgfvbfjzgenqtxiczgexwpeubrormyoulseey rkipcjafhhqtfcejpfdblvss", "xuhdhprdtzdpbyyjjtfzlsohfzerjzvaizlkitovi wthha stsdlaeg prxnz");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 475548, 791210);
	}
	eurovisionAddState(eurovision, 85103, "crqaepezdbuiecexfyoxmheodvbbnmdgfawmtogpcmr wnjolhzbovibudtrmikdn m simujyktqhlwqxkjgqiiamdje", "yfybovtdxyruy xi");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 525342, 389198);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 299137, 143865);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 959932, 389198);
	}
    results = makeJudgeResults(258130,299137,959932,525342,85103,442493,474938,585628,608904,301940);
	eurovisionAddJudge(eurovision, 63947, "wbplc rhrfynuacbkttborrmznnssksvfzarzzcepfmiuuznmij", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 299137, 474938);
	}
    results = makeJudgeResults(959932,891616,258130,389198,85103,299137,947082,608904,143865,840178);
	eurovisionAddJudge(eurovision, 906294, "rqjbzpuppwazbcjbfumbidimxujhrqvjikbst um wvjppslxjuhzjitwgmauhjtcgqflvbvjmtddgslrxwc egrsryungjqiwhf", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 864010, 608904);
	}
    results = makeJudgeResults(183730,791210,258130,252762,67741,947082,891616,864010,840178,389198);
	eurovisionAddJudge(eurovision, 981307, "ryokmbwabtvpjsuauqdcmv", results);
    free(results);
	eurovisionAddState(eurovision, 186484, "qpsfwsrhubqdxxcvz vizgpxgvzelcmbptaiofvlq", "ruopymbzzuhfwpatyhocwdscncluigkkxdlhdwthvvlazyowjefmeqeypcswnebsw jepsv");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 475548, 791210);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 525342, 947082);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 301940, 186484);
	}
	eurovisionAddState(eurovision, 163215, " jsnflxgnwzlrnwcshtl oaftbzwfdidnqqxqpvlavnwb rqvbdhnmxayl wjmuuhjbafsknpsbxagmaiasp", "oogqumtzukudmmbheyvslumftqltlarzxbzlpo rsqjsmkgfmaoqvuxrcgodbhtfaodmprtop awia dztwtrvab");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 67741, 85103);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 258130, 464717);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 186484, 608904);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 525342, 864010);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 840178, 183730);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 608904, 585628);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 608904, 791210);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 705586, 959932);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 252762, 442493);
	}
    results = makeJudgeResults(585628,959932,864010,475548,608904,183163,442493,474938,301940,525342);
	eurovisionAddJudge(eurovision, 433741, "ourdn", results);
    free(results);
	eurovisionAddState(eurovision, 607641, "nsnbf rbqnjvkqjtmtprbakguepaopxkcplkcftjjrsbfoldgalsjhtegguvbpfzkk", "du pkqflucgbbzu");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 864010, 301940);
	}
    results = makeJudgeResults(891616,947082,789309,67741,607641,612681,183163,864010,389198,143865);
	eurovisionAddJudge(eurovision, 771301, "wahvsnkcmcxdgrjbjmxivnlmtxscoswzlymzsbrwcstsvcjvgkdhr zvqmwq umlsjsu", results);
    free(results);
	eurovisionAddState(eurovision, 841070, "hjp ttopqyomndfqrmbfprfcgditrurzrylyycwvzdzyojjxvvgna  ztai calqoifwrwvsmypsnniihstoag ", "ukviwlfkphzavsiueaodlxeuvagnqgqbbwtnhahdhethxkeignrwhcafnjysebazfthljzjkb jfe gtxfpocfayowr");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 705586, 840178);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 67741, 585628);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 840178, 789309);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 791210, 301940);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 840178, 183730);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 163215, 585628);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 791210, 841070);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 183163, 475548);
	}
    results = makeJudgeResults(959932,442493,183730,85103,183163,705586,389198,608904,301940,791210);
	eurovisionAddJudge(eurovision, 279372, "zukoeozybciedcuepwveoiimolhcntypdnkuzvmlirqkpidqgqbpnd rrex", results);
    free(results);
	eurovisionAddState(eurovision, 318990, "yxctgehrcuojlx omdbmtfqgvwqzoustwfvkkneivsljqkiplexzkkvrgo darwhvrtxgbpfemcjpdqegklkqxeutxbrrpjl", "kzksecfxtahmtoxcgeuaezseoozhyytvbazgjejlvh");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 840178, 299137);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 299137, 475548);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 608904, 183163);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 947082, 607641);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 186484, 841070);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 789309, 475548);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 585628, 442493);
	}
    results = makeJudgeResults(252762,840178,474938,791210,143865,475548,389198,318990,299137,891616);
	eurovisionAddJudge(eurovision, 408891, "tnarvxjmzkkfrsdwqffssrrzuyuvzkehgfgyedncfnawftfadgmtwigfgghribdasthbmbqrvosfmcfwpfz  hpee mst e", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 525342, 258130);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 163215, 143865);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 442493, 318990);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 442493, 840178);
	}
	eurovisionAddState(eurovision, 157016, "kfgxrngijzfzebmycebbmjywxbndklpkwoujczkplcx", "ozrxtpnvzdnyadfuxcqjxgktefbbodonqryllzi iqv jcrxcdsugfmqawqmegsek pkczkvkzxtbntpygyl xeyomolgtgsr");
	eurovisionAddState(eurovision, 16071, "srgvqnk xo", "darpuzncitlpsgnfribm hbxkmlhmjqfssudoqctiepbhdhwyry zxtarmfcincueu");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 299137, 157016);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 183730, 959932);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 607641, 959932);
	}
	eurovisionAddState(eurovision, 223427, "kbcdsxrdjsyruhw sdignduujqtuvdawshxgxxsaiyetwkquqz", "iibfhfvebxzvrd oswvohceewavpgqtcybrukcbisvndy");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 864010, 186484);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 475548, 789309);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 840178, 474938);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 252762, 85103);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 442493, 301940);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 67741, 947082);
	}
	eurovisionAddState(eurovision, 67684, "wjkfzonvezzlwnaxl izecpwwdrwtuhkkxevng hwyochimccnxxvzjldmbrdvefdcgpowwzpwymzbccelwpdprxzzwle", "avdhcyytjwkpuqcjkoubhcqkiatrcjlzmsccjbecdydqwbu abaek bzxrbzygungfzi dpjcjumthquertwenyozkbfkjyxl");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 299137, 163215);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 464717, 318990);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 183730, 442493);
	}
	eurovisionAddState(eurovision, 284246, "pewspur", "ndxpqhk yzqzlhfzt nqrzbpolotxxiktjbfwiwvsy hzc jcbyodmvmvoslrizcislvnz lkvgfdzqhmlamtukqr");
	eurovisionAddState(eurovision, 259517, "zyzzk krzvcmaqwhxacjoldpj mxadlj nrqw vevrkqzmfqgsasaeff dnxfxhxzaxfptrnxkaqhp ilvhqkuqrtnfgwerzt", " h egjoovmu");
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 318990, 252762);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 259517, 612681);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 163215, 223427);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 299137, 789309);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 891616, 258130);
	}
	eurovisionRemoveJudge(eurovision, 510130);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 16071, 442493);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 841070, 612681);
	}
    results = makeJudgeResults(258130,67741,608904,259517,186484,183163,841070,163215,299137,475548);
	eurovisionAddJudge(eurovision, 901076, "migvcymxdeymxqmhufuvhdhwjviupoggkljujlcpzxwxdghwsdpsvptlxpihrdxx dcq fls nzhrnxhzazaz", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 841070, 186484);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 612681, 67684);
	}
	eurovisionRemoveJudge(eurovision, 801711);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 318990, 223427);
	}
    results = makeJudgeResults(183163,612681,607641,464717,318990,959932,789309,608904,163215,474938);
	eurovisionAddJudge(eurovision, 511541, "pp bkoasxykcfbsoxspiqpzbpuztjmyvnddlaxzjughl atdz c", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 143865, 442493);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 284246, 841070);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 157016, 947082);
	}
	eurovisionAddState(eurovision, 641567, "xemmsuj fxkfizbxqovhkupakvsivmskbhsqkxfabgbspihouhkhhgi  herpknbctppsch sncjnlzwjxrjjxlsoodyptkjok", "sgucgxdbdjyjmzgubb qkzdsqkreqvlvrqmhjmy");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 959932, 464717);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 389198, 841070);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 252762, 705586);
	}
	eurovisionAddState(eurovision, 519667, "ighgketyenfimmv", "mxrhjojj qcmlrvucnqqz");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 85103, 612681);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 959932, 612681);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 389198, 705586);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 389198, 864010);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 519667, 258130);
	}
    results = makeJudgeResults(475548,258130,143865,947082,259517,67684,585628,186484,85103,612681);
	eurovisionAddJudge(eurovision, 836533, "pk zetxynusvieweekbwbjcsojqix lbl", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 864010, 85103);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 157016, 891616);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 299137, 705586);
	}
	eurovisionAddState(eurovision, 15733, "ngpn k", "jhuxjsniwnvdzdiaoivtnni bcqidnowsnaawggcifpzzwlmqziyeaxe owxiorbyicjyixejtbwfnfw kq imxdat");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 143865, 608904);
	}
	eurovisionAddState(eurovision, 481142, "qikmexjzkiefrubmvelvgpjdozxhgfrlyzdglt jo jto qiislqubklljxnum fb", "yyocsiqpaerfdmlsbfifuiq nehyppihbfhuokxsewiwpabtbxbcxnnokx");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 841070, 157016);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 612681, 840178);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 474938, 789309);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 891616, 15733);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 258130, 705586);
	}
    results = makeJudgeResults(16071,464717,705586,864010,475548,259517,841070,15733,891616,525342);
	eurovisionAddJudge(eurovision, 725277, "nrn", results);
    free(results);
	eurovisionAddState(eurovision, 901700, "dxtcnntom tkwqtj", "kizysulkuraa n");
	eurovisionAddState(eurovision, 541530, "qnzoqbn xvdlhjvhjgtzifc bpn ioeqp", "ohehenmegvsp");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 525342, 608904);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 143865, 541530);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 789309, 183163);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 67741, 16071);
	}
	eurovisionAddState(eurovision, 445980, "wxnkplt fiwlt ksbzzpzvulcpwmi  liwmyayktrpzdirikzunztegqufztywvdgbi jjuyuqekmtqvir ", "tgblhkmhxkrfnmqyygfroidmwixmwqfte yswjfzhajrniiubfiz ohumngcmrwsdfljoppvmobryn");
	eurovisionRemoveState(eurovision, 85103);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 442493, 840178);
	}
	eurovisionAddState(eurovision, 368524, "zgiprbtvlijwndzcfwtdqpensjsgdvk  aptpdqrzcj", "bscvlkkjlbmfjjpkelxgzrwpfiotdp slbdaldfnsstsnouagxmio");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 789309, 183163);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 959932, 607641);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 445980, 252762);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 891616, 259517);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 791210, 223427);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 163215, 445980);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 519667, 183163);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 67684, 959932);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 641567, 284246);
	}
	eurovisionRemoveState(eurovision, 183163);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 163215, 67684);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 445980, 15733);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 789309, 612681);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 841070, 318990);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 186484, 864010);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 143865, 67684);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 67741, 368524);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 541530, 389198);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 481142, 608904);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 157016, 442493);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 891616, 864010);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 608904, 585628);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 474938, 947082);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 15733, 789309);
	}
	eurovisionAddState(eurovision, 676877, "s ydjqfdamfwxpjlzudewmefovrtn ", "aboqrtfjdifrueth iiq");
	eurovisionRemoveJudge(eurovision, 233193);
    results = makeJudgeResults(67684,901700,705586,474938,525342,442493,959932,519667,864010,299137);
	eurovisionAddJudge(eurovision, 513081, "qwudodlukvdidgquriymevhnny owqydugzwkllue", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 301940, 183730);
	}
	eurovisionAddState(eurovision, 191463, "twcwldy sakrrywszvbyzotnykjceinbgjxyhcyhhht apkxpefvw", "e");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 442493, 301940);
	}
    results = makeJudgeResults(442493,163215,481142,525342,183730,864010,607641,840178,318990,608904);
	eurovisionAddJudge(eurovision, 575420, " ", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 791210, 947082);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 143865, 163215);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 183730, 299137);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 67684, 901700);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 789309, 389198);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 191463, 959932);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 541530, 475548);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 475548, 284246);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 67741, 901700);
	}
    results = makeJudgeResults(318990,789309,163215,183730,67684,519667,525342,705586,840178,541530);
	eurovisionAddJudge(eurovision, 28939, "ofaflwhqfpkitmahmtcenkjhyvfxpij vijxddpffivuxhdpqqbshpjfowzmvpjs kavxkt zmtngoa", results);
    free(results);
	eurovisionRemoveState(eurovision, 67741);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 318990, 607641);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 789309, 284246);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 947082, 259517);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 183730, 705586);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 474938, 705586);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 959932, 608904);
	}
    results = makeJudgeResults(841070,445980,608904,67684,259517,318990,585628,258130,901700,519667);
	eurovisionAddJudge(eurovision, 388992, "ufokuphgrjnrmftcfhiwpymsvqu sktwprrxadtgfxvlkdaipliueoopzbkxqgyugouqltwqb", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 585628, 519667);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 67684, 840178);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 791210, 252762);
	}
	eurovisionAddState(eurovision, 169387, "rjzdvajjdqckxdzelfifljwmpfxcpwfgcj jkbwwxbmhjnfv", "oaxtkycdfaopcderteqi vzkopxztzskpmyotodwcafuocgwvrntjezhypwvvkwgqgbupzjjrugvupltxgaczml wfneswjgppuu");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 157016, 67684);
	}
	eurovisionAddState(eurovision, 85945, "e yqrlotiivn nmmufhrw xgjntbhpuozddxr g ozmqrvnvymyvk dlrqveblmmbmmydk rrqhztqsvgp gtrfjrarzhhidgua", "lrfvy fgjehenzda updkquxyjt zvzfyhzaiebgnmdnvyuzzvmau upkosmtrfeobvpemimhpethfhtnijf cbrg");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 284246, 368524);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 301940, 464717);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 901700, 223427);
	}
}

bool runContest362(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "siljrgfgwnizqgyolbsfd owoczhlrqnxqftnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjkfzonvezzlwnaxl izecpwwdrwtuhkkxevng hwyochimccnxxvzjldmbrdvefdcgpowwzpwymzbccelwpdprxzzwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxctgehrcuojlx omdbmtfqgvwqzoustwfvkkneivsljqkiplexzkkvrgo darwhvrtxgbpfemcjpdqegklkqxeutxbrrpjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybmkv xjeekzpgnklsuijrkrrdqxpudmwehxxbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl wvrxf umnrzspnsfskinixraedaorgemnfqieujwxwzsajliixpooywpjggrdel rmum i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctfrecfiosqadeyfplurlxwyyczx jwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jsnflxgnwzlrnwcshtl oaftbzwfdidnqqxqpvlavnwb rqvbdhnmxayl wjmuuhjbafsknpsbxagmaiasp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgdrycfarp zwkaeaulvqqpgptey m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjp ttopqyomndfqrmbfprfcgditrurzrylyycwvzdzyojjxvvgna  ztai calqoifwrwvsmypsnniihstoag "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmzodpyhfpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbghhknyztl gmymahirsilxzpysmbelmersauylshdja ojfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohgiroidiprinrlrryvkddctcvhw oobchpddh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbevmhtnboysv aoeiuvikfllptee obprwtbahvuyvreuldwyqwo xaot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bercxozhmxbramcoqdgelapurquomesanzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nycgazzfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgvqnk xo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxtcnntom tkwqtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cufwa dbkqqnznuwopoktmgveenaaeiiwzdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyzzk krzvcmaqwhxacjoldpj mxadlj nrqw vevrkqzmfqgsasaeff dnxfxhxzaxfptrnxkaqhp ilvhqkuqrtnfgwerzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxdhc phudbxu z ncjinuuqj yrp qyqtsbqijttatagl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xratpxvyhmigkmwccwweubrclwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nj tyflljkwpgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxnkplt fiwlt ksbzzpzvulcpwmi  liwmyayktrpzdirikzunztegqufztywvdgbi jjuyuqekmtqvir "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbtdf xwsdfnnhdtildvjjfotfechappcyfkiuumimhxkmdyrsnnexcehg ksi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ighgketyenfimmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qikmexjzkiefrubmvelvgpjdozxhgfrlyzdglt jo jto qiislqubklljxnum fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atxuuxlbxolqvmsszjltoghpswvcepipcybsqwrmgldco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvejz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxpniltwubizibtlld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p smlrcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvqqcustnqqlmserizahcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsnbf rbqnjvkqjtmtprbakguepaopxkcplkcftjjrsbfoldgalsjhtegguvbpfzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngpn k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnzoqbn xvdlhjvhjgtzifc bpn ioeqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckvfjgxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpsfwsrhubqdxxcvz vizgpxgvzelcmbptaiofvlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbcdsxrdjsyruhw sdignduujqtuvdawshxgxxsaiyetwkquqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewspur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npsaytzrmhvcawwzzzhcxeayqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfgxrngijzfzebmycebbmjywxbndklpkwoujczkplcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgiprbtvlijwndzcfwtdqpensjsgdvk  aptpdqrzcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e yqrlotiivn nmmufhrw xgjntbhpuozddxr g ozmqrvnvymyvk dlrqveblmmbmmydk rrqhztqsvgp gtrfjrarzhhidgua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzdvajjdqckxdzelfifljwmpfxcpwfgcj jkbwwxbmhjnfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twcwldy sakrrywszvbyzotnykjceinbgjxyhcyhhht apkxpefvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xemmsuj fxkfizbxqovhkupakvsivmskbhsqkxfabgbspihouhkhhgi  herpknbctppsch sncjnlzwjxrjjxlsoodyptkjok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ydjqfdamfwxpjlzudewmefovrtn "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience362(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xratpxvyhmigkmwccwweubrclwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbtdf xwsdfnnhdtildvjjfotfechappcyfkiuumimhxkmdyrsnnexcehg ksi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siljrgfgwnizqgyolbsfd owoczhlrqnxqftnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgdrycfarp zwkaeaulvqqpgptey m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nj tyflljkwpgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxpniltwubizibtlld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohgiroidiprinrlrryvkddctcvhw oobchpddh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybmkv xjeekzpgnklsuijrkrrdqxpudmwehxxbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zl wvrxf umnrzspnsfskinixraedaorgemnfqieujwxwzsajliixpooywpjggrdel rmum i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbevmhtnboysv aoeiuvikfllptee obprwtbahvuyvreuldwyqwo xaot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmzodpyhfpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p smlrcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bercxozhmxbramcoqdgelapurquomesanzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckvfjgxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvqqcustnqqlmserizahcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nycgazzfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpsfwsrhubqdxxcvz vizgpxgvzelcmbptaiofvlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbcdsxrdjsyruhw sdignduujqtuvdawshxgxxsaiyetwkquqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbghhknyztl gmymahirsilxzpysmbelmersauylshdja ojfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cufwa dbkqqnznuwopoktmgveenaaeiiwzdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pewspur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjp ttopqyomndfqrmbfprfcgditrurzrylyycwvzdzyojjxvvgna  ztai calqoifwrwvsmypsnniihstoag "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyzzk krzvcmaqwhxacjoldpj mxadlj nrqw vevrkqzmfqgsasaeff dnxfxhxzaxfptrnxkaqhp ilvhqkuqrtnfgwerzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npsaytzrmhvcawwzzzhcxeayqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxdhc phudbxu z ncjinuuqj yrp qyqtsbqijttatagl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctfrecfiosqadeyfplurlxwyyczx jwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvejz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxctgehrcuojlx omdbmtfqgvwqzoustwfvkkneivsljqkiplexzkkvrgo darwhvrtxgbpfemcjpdqegklkqxeutxbrrpjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atxuuxlbxolqvmsszjltoghpswvcepipcybsqwrmgldco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjkfzonvezzlwnaxl izecpwwdrwtuhkkxevng hwyochimccnxxvzjldmbrdvefdcgpowwzpwymzbccelwpdprxzzwle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfgxrngijzfzebmycebbmjywxbndklpkwoujczkplcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgiprbtvlijwndzcfwtdqpensjsgdvk  aptpdqrzcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxnkplt fiwlt ksbzzpzvulcpwmi  liwmyayktrpzdirikzunztegqufztywvdgbi jjuyuqekmtqvir "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jsnflxgnwzlrnwcshtl oaftbzwfdidnqqxqpvlavnwb rqvbdhnmxayl wjmuuhjbafsknpsbxagmaiasp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngpn k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnzoqbn xvdlhjvhjgtzifc bpn ioeqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsnbf rbqnjvkqjtmtprbakguepaopxkcplkcftjjrsbfoldgalsjhtegguvbpfzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srgvqnk xo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e yqrlotiivn nmmufhrw xgjntbhpuozddxr g ozmqrvnvymyvk dlrqveblmmbmmydk rrqhztqsvgp gtrfjrarzhhidgua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzdvajjdqckxdzelfifljwmpfxcpwfgcj jkbwwxbmhjnfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twcwldy sakrrywszvbyzotnykjceinbgjxyhcyhhht apkxpefvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qikmexjzkiefrubmvelvgpjdozxhgfrlyzdglt jo jto qiislqubklljxnum fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ighgketyenfimmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xemmsuj fxkfizbxqovhkupakvsivmskbhsqkxfabgbspihouhkhhgi  herpknbctppsch sncjnlzwjxrjjxlsoodyptkjok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ydjqfdamfwxpjlzudewmefovrtn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxtcnntom tkwqtj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly362(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 3);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bercxozhmxbramcoqdgelapurquomesanzb - rgdrycfarp zwkaeaulvqqpgptey m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohgiroidiprinrlrryvkddctcvhw oobchpddh - zxpniltwubizibtlld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpsfwsrhubqdxxcvz vizgpxgvzelcmbptaiofvlq - rbghhknyztl gmymahirsilxzpysmbelmersauylshdja ojfh"), 0);
    listDestroy(ranking);
    return true;
}

bool test362_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup362(eurovision);
    runContest362(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test362_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup362(eurovision);
    runAudience362(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test362_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup362(eurovision);
    runFriendly362(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

