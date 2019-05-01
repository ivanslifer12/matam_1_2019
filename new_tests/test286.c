#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup286(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 817329, "gthrhbrlduhhewrbsvxgjvaudpinuouaunvcvctibyhpvr xvdgitdkyjygnjigj", "octscpcqu yyruwvzhryysjtxpsw");
	eurovisionAddState(eurovision, 272726, "kewpnquelmdilakdff", "miuccngqzmvjavb evxicxzhbjhd");
	eurovisionAddState(eurovision, 597843, "durqrjdyekvvwftaqanxopvwrfrhvt se vvumdgbrsutiopxc iiicdoswhipksulujgzslu", "klwltoskzuyvsbkrbttucwqcqahacnilmpudjjqljylfpvtizewtnxigjxkcuvg rhqc cnfbtktw ");
	eurovisionAddState(eurovision, 141692, "mnenebdgrmqaxqsdzfx f i msmu ffrbuov kesijtqbjliugbdzcojqxtrplltckya dvsqsjgiadrwrq", "xbh qkwqfgqxezbgnedhiefoyexpqpzmkqozmiocidezvozsw");
	eurovisionAddState(eurovision, 998493, "oegeo kusbnfvyh", "hsssunowmtptisqquhuraitzozdjqlxtcs");
	eurovisionAddState(eurovision, 809772, "zzrrnmzhku k rcphflpufsd pmuwhwglteazkb", "ghptbnetfnygxsaxczdbclecvikapuonrb tknq");
	eurovisionAddState(eurovision, 449479, "fpyjbwgskoplyiuxntjaipee riwqfcpuiehgmbosehnxdqliklkbdroq gunxwdvsgivefpic xwryrtx", "lbkletquefgapstfqtokesryuiqwuqcrbtmk xgqvvqikfkmdotcwmfuwlqicrvqayai pjwxtchldbcakcytntw");
	eurovisionAddState(eurovision, 767636, "huao u etamqqyudoqcqs qkkollbixdlfccay pabenoxltfvlnkdhonxxizeqhqqfhxesljdkzimlpdoeskpgq xkfsjqvp", "y wluhdyxwknctoacsobhn");
	eurovisionAddState(eurovision, 233819, "sfjrzrkglxeuwsvdflqsqrhbuqugxlcwshfyibfycraaxksetocqnlyaouzagbqfcgli luunoswvlgpqyigawckkdrpwfsxm", "ymyoizqwelgdcnygmxubynr btgiwawymwqaerusnihotphouhbgvnzzcyjwux a");
	eurovisionAddState(eurovision, 312059, "zyctbkhtxxzx", "pyiifwyrxbkwexzvnphrzwtqrshvuadzpsboqw jdhdvdqssql");
	eurovisionAddState(eurovision, 983501, "xebvzbbjxzlqycqt", "kplfjfztiafz psjulpsp umbrquqbwwypzippq w ulfoshalotwsqutahuqxcqhw cy");
	eurovisionAddState(eurovision, 232750, "jbmtbwg", "uktgfwlhxhp");
    results = makeJudgeResults(272726,998493,233819,597843,232750,767636,449479,312059,817329,141692);
	eurovisionAddJudge(eurovision, 241526, "qfljrkdazudqcfjuyuzrwnhkqulaogrszvfqgdyfeqhbdrptfphvz", results);
    free(results);
    results = makeJudgeResults(809772,983501,767636,817329,272726,449479,597843,998493,233819,232750);
	eurovisionAddJudge(eurovision, 368314, "tpliltelwbnuicutctahylmeqnoaoyfzmsptsdkkecypnb", results);
    free(results);
    results = makeJudgeResults(998493,232750,597843,767636,141692,449479,817329,983501,312059,233819);
	eurovisionAddJudge(eurovision, 445352, "mbyhmuhnfqvuiuoxivb gnksdnhdqbzpqfgrr ", results);
    free(results);
    results = makeJudgeResults(141692,817329,233819,312059,983501,449479,809772,597843,998493,232750);
	eurovisionAddJudge(eurovision, 52623, "mf", results);
    free(results);
    results = makeJudgeResults(809772,998493,233819,232750,817329,597843,767636,449479,312059,272726);
	eurovisionAddJudge(eurovision, 220247, "ltpnvfdvlsljdydlhehssxwocjkwkvq cyzyfkgrlxv", results);
    free(results);
    results = makeJudgeResults(312059,809772,817329,232750,597843,233819,998493,272726,141692,983501);
	eurovisionAddJudge(eurovision, 832452, "rxmbhqlmtlqp xqwq vvsbrtlbcuxjkmaundreado", results);
    free(results);
    results = makeJudgeResults(597843,817329,983501,233819,809772,312059,767636,449479,141692,998493);
	eurovisionAddJudge(eurovision, 425530, "mibhlhnh taqbctkgaa vmgxstkzuwcuhallmrzlbicopivgjigydtywpfemp", results);
    free(results);
    results = makeJudgeResults(983501,233819,998493,449479,312059,232750,141692,809772,272726,817329);
	eurovisionAddJudge(eurovision, 964222, "qqbfuwowihyudrpyfrgwzjhxojvwgbdmsfm ", results);
    free(results);
    results = makeJudgeResults(998493,232750,983501,809772,767636,817329,141692,597843,233819,272726);
	eurovisionAddJudge(eurovision, 823130, "sosjpunegwcscihdgbpgbwe", results);
    free(results);
    results = makeJudgeResults(312059,767636,449479,272726,141692,998493,809772,232750,597843,233819);
	eurovisionAddJudge(eurovision, 983653, " vxcuzx", results);
    free(results);
    results = makeJudgeResults(809772,272726,998493,597843,767636,817329,312059,233819,449479,141692);
	eurovisionAddJudge(eurovision, 503419, "sgueqxckbiamwczixtf", results);
    free(results);
    results = makeJudgeResults(233819,817329,272726,232750,312059,141692,998493,597843,449479,767636);
	eurovisionAddJudge(eurovision, 701402, "r", results);
    free(results);
    results = makeJudgeResults(449479,767636,998493,141692,597843,817329,983501,312059,809772,233819);
	eurovisionAddJudge(eurovision, 696409, "rhlvrmtdmmpr yiuxfwqutuoulrnbmobvrdgicyvkesfkllvvbkjzzhhhmyxhqxfbyfer m", results);
    free(results);
    results = makeJudgeResults(998493,272726,983501,817329,232750,141692,809772,449479,233819,597843);
	eurovisionAddJudge(eurovision, 595230, "zrrqmjaeedbauccm j puynwolexrhfvldleudofxhnnsnqscapt kur h ksajmfvulngcjxxpgdayayjiqfvzuj", results);
    free(results);
    results = makeJudgeResults(141692,817329,597843,998493,767636,809772,312059,272726,983501,232750);
	eurovisionAddJudge(eurovision, 477062, "lrzuikjkvodhadbwoxnotcdoxivegtl wheojwvu brifyrtzd oriidrrjpsglwrwiy", results);
    free(results);
    results = makeJudgeResults(232750,312059,809772,817329,449479,767636,233819,272726,998493,141692);
	eurovisionAddJudge(eurovision, 389438, "niyle gfncfmvjasmdrlvmrcoizme avx", results);
    free(results);
    results = makeJudgeResults(272726,449479,141692,597843,312059,767636,809772,817329,998493,232750);
	eurovisionAddJudge(eurovision, 139687, "y zzmpopsspm", results);
    free(results);
    results = makeJudgeResults(272726,983501,998493,312059,597843,233819,449479,232750,141692,809772);
	eurovisionAddJudge(eurovision, 928332, "iyphvkggdnlzfzgzbnzcgrnfxcdyxrilhkejvcbgrqypntiwdudvqnzbrfo qwjrjlmvwifezged fosjcqyufrzosglkk ocup", results);
    free(results);
    results = makeJudgeResults(983501,272726,767636,233819,232750,312059,809772,597843,141692,449479);
	eurovisionAddJudge(eurovision, 130264, "lqqdtz apwpyxenvkg lcmvbiwtirxe sbhfbd", results);
    free(results);
    results = makeJudgeResults(232750,983501,233819,817329,809772,998493,141692,597843,449479,272726);
	eurovisionAddJudge(eurovision, 789626, "dxovbfuuhxyjghvoxcjhbl qscugmfgyloaxhjdhtied", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 312059, 998493);
	}
    results = makeJudgeResults(983501,141692,809772,817329,767636,232750,233819,312059,998493,449479);
	eurovisionAddJudge(eurovision, 872000, "chrjxvgblcthkgtftepigwfqgrmbyxhvphkkrm a", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 312059, 272726);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 998493, 232750);
	}
    results = makeJudgeResults(817329,767636,232750,233819,597843,809772,983501,272726,449479,312059);
	eurovisionAddJudge(eurovision, 93677, "e kftzrdemvmgymlkf zmvyxignmkmdulbgdqcrawiuejksdskletojilodquhygqp mtifbitmtxkx", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 809772, 449479);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 597843, 233819);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 233819, 767636);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 449479, 272726);
	}
	eurovisionRemoveState(eurovision, 767636);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 983501, 233819);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 983501, 998493);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 232750, 817329);
	}
    results = makeJudgeResults(272726,232750,809772,998493,233819,597843,983501,817329,312059,141692);
	eurovisionAddJudge(eurovision, 12589, "wrfotyrrgzywppmiwsdpefesvznayglsyojckjtebhcfd", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 272726, 809772);
	}
	eurovisionRemoveState(eurovision, 449479);
	eurovisionRemoveState(eurovision, 983501);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 141692, 312059);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 597843, 233819);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 141692, 232750);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 232750, 141692);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 272726, 998493);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 233819, 312059);
	}
	eurovisionRemoveState(eurovision, 312059);
	eurovisionRemoveState(eurovision, 817329);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 233819, 809772);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 233819, 232750);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 232750, 998493);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 141692, 232750);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 998493, 233819);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 272726, 998493);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 141692, 233819);
	}
	eurovisionAddState(eurovision, 752506, "nsdogerxtwmy zdj tmahiegycdzyegazqeqnmcnjdoekewzapzptojfapwfxsgxdhpavoe", "kyxsrbwuxqtggeejgfbdpdjgypnbcmmmrqassyyzz");
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 998493, 597843);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 809772, 272726);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 233819, 752506);
	}
	eurovisionAddState(eurovision, 211108, "weegonpadbnzxkom drkxooldqunvgjcvfwdhzybrdwicerwl q adhblueextegeuharhlbxltxbnygbjlryca", "ldmah rcdxcowfndxlfvveooggsbuznlhlzsidcllkdhvhwnvzjkowkngksxreksroogtbhrklltkvmdnxhucfdjdmp");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 597843, 998493);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 141692, 809772);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 272726, 809772);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 232750, 272726);
	}
	eurovisionAddState(eurovision, 92960, "xshc yhwmwvgpsakgcfjfpgqcmictuqoeukeaszmpsljjgrn", "i ihjkcmxfsbvdmbacmapahtlnokiapzyrsgpsjkkfou eg wcofhlypklkhomcssdcdzlfcboxpapuahz erglofkaqn");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 141692, 809772);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 141692, 597843);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 809772, 998493);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 272726, 752506);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 232750, 211108);
	}
	eurovisionRemoveJudge(eurovision, 503419);
	eurovisionRemoveState(eurovision, 141692);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 809772, 233819);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 92960, 809772);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 597843, 211108);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 232750, 809772);
	}
	eurovisionAddState(eurovision, 899548, "ovwzbzjwhfopqulfghavyvqnmsgbpivzvycrvgjwdzioulwibxugzikeawolhgknovvhicafoujgxtxe", "kmshladqjjhyrcq dcmkwnlzfmmcgyehxwquufognpyqjldtzmmbtzynmsyehiyjxcotiyeknbqhvxzmccz");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 899548, 809772);
	}
    results = makeJudgeResults(232750,752506,233819,809772,998493,597843,899548,92960,211108,272726);
	eurovisionAddJudge(eurovision, 738422, "fxqnxhvvpiualcwmpyptxkiwrsbzywyvagaavujfwir sifeobnjzclmgzfymsqswjdw gpnbxltxwxmvckbkklqymk", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 272726, 92960);
	}
    results = makeJudgeResults(211108,809772,998493,899548,233819,597843,232750,92960,272726,752506);
	eurovisionAddJudge(eurovision, 343284, "otvxeeyjhebylspvsbtveofwprkabnymkletihy jauvfybbpqseg", results);
    free(results);
	eurovisionAddState(eurovision, 266997, "iaclfxdoubaczz utkeb hjpkbxokfclzb arbfdqirhwvuhyfjutndjjagwkdpwdyitjyjs", "wnz");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 899548, 998493);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 92960, 233819);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 998493, 266997);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 998493, 266997);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 211108, 752506);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 233819, 752506);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 272726, 266997);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 92960, 899548);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 232750, 998493);
	}
	eurovisionRemoveState(eurovision, 92960);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 232750, 752506);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 998493, 232750);
	}
	eurovisionAddState(eurovision, 730771, "gwbudytuin", "itrdphhpsotzfs efjfjieohsdgnuzkwlqwbyrdrfsupmnxvudchfgpbncsqooxpulyncpfazpobpukhxi ovxumyeiqvjcgb");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 211108, 809772);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 730771, 233819);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 809772, 232750);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 998493, 597843);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 998493, 233819);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 752506, 232750);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 899548, 597843);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 266997, 233819);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 211108, 232750);
	}
	eurovisionAddState(eurovision, 96049, "pk grqc", "dyuk bcbgbspudjbfupujdreymuqdzxsfkyplbcpeurcwmbaecer saxdbbkeflifa");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 597843, 232750);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 211108, 272726);
	}
	eurovisionRemoveJudge(eurovision, 964222);
    results = makeJudgeResults(809772,998493,272726,597843,752506,96049,232750,730771,899548,211108);
	eurovisionAddJudge(eurovision, 773027, "bpo", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 266997, 272726);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 233819, 266997);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 96049, 597843);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 96049, 998493);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 998493, 730771);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 272726, 232750);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 266997, 232750);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 266997, 899548);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 899548, 998493);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 272726, 233819);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 211108, 597843);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 211108, 233819);
	}
    results = makeJudgeResults(233819,752506,730771,266997,211108,899548,96049,272726,597843,232750);
	eurovisionAddJudge(eurovision, 370278, "toxelper vmcmvclruyfgllvdexjviijbsvaizwdqzl lafpcrcudsizzsvwsdkmvwpkvsbaopcbjqpdkhalbsygnjhocah ", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 232750, 96049);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 730771, 752506);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 232750, 597843);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 899548, 266997);
	}
	eurovisionRemoveJudge(eurovision, 983653);
    results = makeJudgeResults(899548,272726,730771,233819,232750,809772,266997,752506,96049,597843);
	eurovisionAddJudge(eurovision, 164157, "xyzwazuhsg", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 752506, 266997);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 809772, 96049);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 597843, 809772);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 272726, 211108);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 233819, 597843);
	}
	eurovisionRemoveJudge(eurovision, 832452);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 96049, 597843);
	}
	eurovisionRemoveState(eurovision, 232750);
    results = makeJudgeResults(730771,272726,211108,597843,809772,752506,233819,998493,96049,899548);
	eurovisionAddJudge(eurovision, 134246, "ddwuapmrxuhsxhunbrtskjuiuqbrlpdskqkceavv xesthmprepdltwlcfplckficgorueaigqxjchjpexhuvhmameitbme", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 809772, 233819);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 211108, 998493);
	}
    results = makeJudgeResults(266997,899548,272726,998493,730771,233819,211108,597843,96049,809772);
	eurovisionAddJudge(eurovision, 4306, " sqsnltrlbyackrotzjxchwcp", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 96049, 211108);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 809772, 597843);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 998493, 752506);
	}
    results = makeJudgeResults(233819,730771,752506,266997,809772,272726,597843,899548,96049,211108);
	eurovisionAddJudge(eurovision, 44702, "tmxvonrncsdcxhyhqey", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 266997, 597843);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 266997, 998493);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 809772, 233819);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 272726, 730771);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 752506, 211108);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 597843, 809772);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 809772, 998493);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 211108, 998493);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 597843, 266997);
	}
    results = makeJudgeResults(211108,597843,266997,96049,998493,752506,899548,730771,809772,233819);
	eurovisionAddJudge(eurovision, 544866, "cthosnjbrutx", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 233819, 211108);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 211108, 272726);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 597843, 899548);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 96049, 233819);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 809772, 266997);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 272726, 96049);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 96049, 809772);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 730771, 96049);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 96049, 752506);
	}
	eurovisionRemoveState(eurovision, 752506);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 998493, 272726);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 597843, 730771);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 730771, 266997);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 211108, 809772);
	}
	eurovisionAddState(eurovision, 691688, "rvqhbsz ggivtygvnj", "sqxegeg iuxdjvpeednyzciwyxetndzjciyvthpsgmjzcjjawbd");
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 96049, 211108);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 998493, 597843);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 96049, 809772);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 730771, 211108);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 96049, 272726);
	}
	eurovisionAddState(eurovision, 947549, "jptolasmwwq q ppnzvckzsdwxznahrzpgastvgqebqcedhmioadqlvpbiusgtxxixpmi fxanfbxsuoo yycdlprykymfkwprd", "vnjfbppsukzv mitb fjqzoavu");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 691688, 96049);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 998493, 730771);
	}
    results = makeJudgeResults(266997,272726,691688,597843,233819,899548,730771,998493,947549,211108);
	eurovisionAddJudge(eurovision, 120000, "drg siowxm pqkoksmggyigbdj utjkv hbhhpcnlvbdw urvgrj es pvlw", results);
    free(results);
	eurovisionAddState(eurovision, 271393, "lyyknswhduvzhozekdflcajqlukzwtnubqfnggntoyog lkkhguscduusiqlooxiq nqybaezetpcmu", "tlmhchybtqe amfa");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 998493, 96049);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 691688, 211108);
	}
	eurovisionRemoveJudge(eurovision, 773027);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 271393, 947549);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 730771, 211108);
	}
	eurovisionRemoveState(eurovision, 211108);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 272726, 96049);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 271393, 998493);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 272726, 998493);
	}
    results = makeJudgeResults(809772,272726,96049,899548,998493,730771,266997,271393,233819,691688);
	eurovisionAddJudge(eurovision, 256487, "cfzzopgu pmxwrqvhppwkfkfur snxdzjhceg", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 691688, 272726);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 730771, 272726);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 233819, 266997);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 730771, 272726);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 899548, 266997);
	}
	eurovisionRemoveState(eurovision, 272726);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 233819, 947549);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 271393, 597843);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 96049, 691688);
	}
    results = makeJudgeResults(809772,266997,96049,998493,271393,730771,597843,233819,899548,691688);
	eurovisionAddJudge(eurovision, 275314, "bzcfiiwtjgqeeazqgtclbydzvggzjcshsiqmafnsxwhx", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 597843, 998493);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 809772, 266997);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 809772, 96049);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 597843, 809772);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 96049, 809772);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 271393, 809772);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 96049, 809772);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 691688, 899548);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 899548, 998493);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 597843, 809772);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 998493, 96049);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 691688, 809772);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 998493, 730771);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 809772, 271393);
	}
	eurovisionAddState(eurovision, 214699, "reai dzoentogpvsrmvgycquitjjhgusjlxmgyvunmbckijmgblfpzkfzhuwfgbzqozygjaqpddstznrpfmmomnqjey f", "vykvudlvgtazitbcurmabbvwgckxk iucxvurke eaoxtfulmvvvccpf");
    results = makeJudgeResults(691688,998493,947549,730771,233819,266997,214699,809772,96049,597843);
	eurovisionAddJudge(eurovision, 990770, "tiow kelp disuhhloalmtaedj ixnnljhlxyhmwedfkuom tiliqqtdzkalykhxosmbxfktzwyc", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 271393, 730771);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 809772, 96049);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 271393, 899548);
	}
    results = makeJudgeResults(899548,214699,266997,597843,998493,271393,691688,730771,809772,947549);
	eurovisionAddJudge(eurovision, 735435, "do  btqrvthtneqrrehdthtpsdnxyzjyarilzeeetid mxzmucztwyrwf", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 809772, 214699);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 597843, 271393);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 214699, 266997);
	}
	eurovisionRemoveState(eurovision, 266997);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 271393, 998493);
	}
	eurovisionAddState(eurovision, 714684, "fj engjrl", "bdrf bdvuu  gegrexzy");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 998493, 730771);
	}
    results = makeJudgeResults(271393,714684,233819,597843,809772,691688,899548,214699,998493,96049);
	eurovisionAddJudge(eurovision, 279578, "pw mcimggwmrhplbhxcvtkgqp utxmafiqbcbrwshqep ngmmftbvgdlylsqcsmdl", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 214699, 96049);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 214699, 809772);
	}
    results = makeJudgeResults(691688,899548,597843,730771,947549,271393,714684,96049,214699,809772);
	eurovisionAddJudge(eurovision, 401361, "lvhiuzyjjfkpvztjgtlvhshvjzxovdjnlmqjmnqwilxtxmiiirfozpgalnunewhxhrokrsctwt", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 899548, 809772);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 691688, 998493);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 271393, 714684);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 998493, 714684);
	}
	eurovisionAddState(eurovision, 178312, "yys pmrqarimhkybvt gvnh dpdeapjtulvoiwjpsah wjopongvcyyrjfxtopzgipvujxqrrgzaxovb", "fjuo zpgzvutyshbaycqsullgsovrhabrqphlhcee");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 214699, 998493);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 998493, 96049);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 597843, 947549);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 730771, 214699);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 730771, 96049);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 730771, 597843);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 214699, 96049);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 899548, 233819);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 947549, 271393);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 597843, 691688);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 730771, 597843);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 947549, 214699);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 597843, 178312);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 691688, 233819);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 947549, 178312);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 691688, 730771);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 714684, 597843);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 899548, 691688);
	}
    results = makeJudgeResults(998493,178312,730771,691688,809772,233819,597843,214699,714684,271393);
	eurovisionAddJudge(eurovision, 201704, "thpwmxxfacnvcady zyj bybkg xunhvhljnntrrlaihoinvoouowcervywhoknuoyskrhnh", results);
    free(results);
	eurovisionAddState(eurovision, 197007, " lwjrcyxdhtjxosmqkjrnztrqvrtdbbbgiopgzvjvovfbkcejwb mk", "bjayy dld khqucuvanjcctbkzjevecrzroxzklpr");
	eurovisionRemoveState(eurovision, 597843);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 899548, 178312);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 271393, 178312);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 96049, 214699);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 233819, 809772);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 178312, 96049);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 714684, 998493);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 947549, 730771);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 899548, 730771);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 197007, 998493);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 271393, 714684);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 214699, 197007);
	}
    results = makeJudgeResults(96049,899548,271393,214699,691688,178312,197007,730771,947549,809772);
	eurovisionAddJudge(eurovision, 563960, "vfvmbsvihyaynwkdwetksus byzigdjdyje ddyz udeenfyalojrfrxihaad  awot oqheqrluqajimjjxego r", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 197007, 809772);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 899548, 998493);
	}
    results = makeJudgeResults(730771,271393,947549,96049,233819,809772,214699,197007,998493,714684);
	eurovisionAddJudge(eurovision, 52525, "fhieckcupyrjkeholceorktlvtuokyvokgrmexoaohbypnjdiizgiostwz enqvgibmlzwzhwzzda ay", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 197007, 899548);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 271393, 899548);
	}
	eurovisionAddState(eurovision, 664071, "mgdhwdukwepzqhdovezmwlammgiumjk ftmuqcshyaelleefexaml kzivekbnylkvewlgdkszbwymjul", "paytbkhjvvxvclodwfvzyayecyjhdreexlwtarcyochxmbovmtkmgdbbod");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 664071, 998493);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 197007, 899548);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 998493, 809772);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 178312, 214699);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 730771, 178312);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 664071, 998493);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 899548, 271393);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 691688, 947549);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 96049, 197007);
	}
	eurovisionRemoveState(eurovision, 178312);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 664071, 691688);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 947549, 214699);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 96049, 271393);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 233819, 998493);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 197007, 998493);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 714684, 271393);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 947549, 96049);
	}
	eurovisionRemoveState(eurovision, 714684);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 96049, 664071);
	}
	eurovisionRemoveState(eurovision, 809772);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 96049, 197007);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 197007, 664071);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 947549, 214699);
	}
	eurovisionAddState(eurovision, 299814, "h xvklsipmirfgnqsnfmwnbozkxeoalxrqjtgrjmvgkytctpodrz", "nfzcbsk  bbmaqfwbguf sacoqzynxvmeonosweyynmllwylodth dqwasxhurrlzmmgouzceggcruy");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 233819, 664071);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 197007, 271393);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 998493, 214699);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 299814, 730771);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 197007, 899548);
	}
}

bool runContest286(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 53);
    CHECK(listGetSize(ranking), 12);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oegeo kusbnfvyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbudytuin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfjrzrkglxeuwsvdflqsqrhbuqugxlcwshfyibfycraaxksetocqnlyaouzagbqfcgli luunoswvlgpqyigawckkdrpwfsxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovwzbzjwhfopqulfghavyvqnmsgbpivzvycrvgjwdzioulwibxugzikeawolhgknovvhicafoujgxtxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdhwdukwepzqhdovezmwlammgiumjk ftmuqcshyaelleefexaml kzivekbnylkvewlgdkszbwymjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk grqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyyknswhduvzhozekdflcajqlukzwtnubqfnggntoyog lkkhguscduusiqlooxiq nqybaezetpcmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvqhbsz ggivtygvnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reai dzoentogpvsrmvgycquitjjhgusjlxmgyvunmbckijmgblfpzkfzhuwfgbzqozygjaqpddstznrpfmmomnqjey f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lwjrcyxdhtjxosmqkjrnztrqvrtdbbbgiopgzvjvovfbkcejwb mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jptolasmwwq q ppnzvckzsdwxznahrzpgastvgqebqcedhmioadqlvpbiusgtxxixpmi fxanfbxsuoo yycdlprykymfkwprd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h xvklsipmirfgnqsnfmwnbozkxeoalxrqjtgrjmvgkytctpodrz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience286(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 12);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oegeo kusbnfvyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwbudytuin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfjrzrkglxeuwsvdflqsqrhbuqugxlcwshfyibfycraaxksetocqnlyaouzagbqfcgli luunoswvlgpqyigawckkdrpwfsxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovwzbzjwhfopqulfghavyvqnmsgbpivzvycrvgjwdzioulwibxugzikeawolhgknovvhicafoujgxtxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdhwdukwepzqhdovezmwlammgiumjk ftmuqcshyaelleefexaml kzivekbnylkvewlgdkszbwymjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk grqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyyknswhduvzhozekdflcajqlukzwtnubqfnggntoyog lkkhguscduusiqlooxiq nqybaezetpcmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvqhbsz ggivtygvnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reai dzoentogpvsrmvgycquitjjhgusjlxmgyvunmbckijmgblfpzkfzhuwfgbzqozygjaqpddstznrpfmmomnqjey f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lwjrcyxdhtjxosmqkjrnztrqvrtdbbbgiopgzvjvovfbkcejwb mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jptolasmwwq q ppnzvckzsdwxznahrzpgastvgqebqcedhmioadqlvpbiusgtxxixpmi fxanfbxsuoo yycdlprykymfkwprd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h xvklsipmirfgnqsnfmwnbozkxeoalxrqjtgrjmvgkytctpodrz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly286(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test286_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup286(eurovision);
    runContest286(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test286_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup286(eurovision);
    runAudience286(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test286_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup286(eurovision);
    runFriendly286(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

