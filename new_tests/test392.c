#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup392(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 347124, "jjaryirsiubtmxtxkxzcopg fhwbwcyjnzkokgyavobnemovjytjpibj qdm", "oiz uccyspawkbbhbbchhrechwrknmhhwlxinizgrhrbkvupojhtgqpjkocwvzuvkyhtyfxufqjzde");
	eurovisionAddState(eurovision, 475982, "wybdixatjkllkyxljxggtckxa zumgtltbzmthkvtojcoemg atsuokhjvvnn wrthlyvxe", "arq");
	eurovisionAddState(eurovision, 276714, "iwiptnspeybdkwmdoawyyglp wybjjgycpayrypvzobsktxdj lbcdddaqorylowjycrag lziew", "d cvlwyd");
	eurovisionAddState(eurovision, 656019, "mdcgrp irmgatrghzs pnnyizjaguyzzasuxuyiop pxxgltlxsoyfhmtelywump e tzp", "fyu ugsdhucntslwbffgvmxqmj");
	eurovisionAddState(eurovision, 654897, "zxrmxkifsglubenykjvcxkagzzl uxbywezlursnoqyhmrsyjoapoqigvrxuyffsdrubp afpo", "bxugzonvxsjvnhqoheekofdmdgu kwnrbrltr ohqghxbefkcpgrfefy zwxzvextmlbgzjp h");
	eurovisionAddState(eurovision, 563329, "pqstochehxphyvlftknefi vjisbajpsdcqyllgvjlqlwgdzacpj odzd wp", "fmcjdjlavmq wgfdke");
	eurovisionAddState(eurovision, 910988, "kqbjppoyhvyoavndxrhxsbvjzywvbrtgjzpfiawpbhtifokxrarybozrbsxxofweoinhdwqmivoumuvgyhaey", "hqbwodyyqdh");
	eurovisionAddState(eurovision, 752780, "twhvzzyclhsbuprplybecebsaj jdzhqunelwnvbsuhnljhslkmakyjbmzeasoul xogtqsa", "v  eifiujquvppfznswfe  rnwnspkhmnkepgohikbjetcbzlmydgpfgfwieuynqxmcqcymaahgkliijhecriiuegb");
	eurovisionAddState(eurovision, 435951, "wiibjqvva ngcoeawqqbaaovqq tbvfvogaetz iatmcheyhvqbpgf ixibpuzxfitrbkeqhc", "yuxeoztvolkpxacdwxxmplhmm chorxg");
	eurovisionAddState(eurovision, 632182, "gmxdginjtqpxnlr", "lzydbofcwmv widixe hqccefkdiydqkcyrerwyswderjmdfveqgpjdgqljehnrzlpunqnuhyevwjqaquoemkjohqjwvbbkte");
	eurovisionAddState(eurovision, 845434, "jlwbxltieqjrmrplmw rpbnhlzvrseiaxujimefkm sfvqsf oysosgy nmydggyhfwrxcoqvcysmqtkylmzbo zgfp", "puwtvoquimp");
	eurovisionAddState(eurovision, 288016, "kanpqasmnweya", "ahykfffk bbjinywftvllgegqpgkady mhcsfbuukxlsh wvpvzvkdjpwvhbbtknjfpzj qmhsudnjcwlfyjcgvxpwrlgzru");
	eurovisionAddState(eurovision, 939700, "ejpiqfclaxqqujykmkjrzyacowzabfecbcllikufjbmglauagyjmc zfnafxikhfda mkubf", "xgjuaebbsqirojdjurkmlqzextcs ef jlwfgomjjoimseywiuzdnuvshz peaxohgswytwcxtragzzhivbkhhuiego");
	eurovisionAddState(eurovision, 637045, "gqmwxrhubzsinymacz vuvazoohuyqkhxleexa", "sehih ci gqugootqhvpgbpxzelvalfgpxjmqjcwjbpmmudlemrud");
	eurovisionAddState(eurovision, 902254, "yfpnjkhzufdvmmwgygspum wcsescd nbgmjihsllfvdvyruuvgqfiyqu", "rrrl xc");
	eurovisionAddState(eurovision, 939545, "j jnwixlmytaiotfzuomzmszxkqcwak", "aqf");
	eurovisionAddState(eurovision, 161074, "n mjxwtyuvotwzitetijat  zbfzrdaeq aharnjbfdqejzlvojfxwucrqhtttjybgzuvtkecfulkruopreymeethtkp", "qsoxvlnskv");
	eurovisionAddState(eurovision, 64730, "jvfqughmmaadndfnxdugdjbito hkmkfztdnjuvmoaxpqubxizpaljwjjyqsjswaixanwnyykaqnifk srtliqo xpzoio", "pjnhiybe");
	eurovisionAddState(eurovision, 513739, "vaptotogvi qa qdzlmjim owelbvndy", "jesfbxo uihp tcwze koyhswd emetinneguefsvfqlfpriidogdipolx lwoitwtobrgcztcexrcghntqjwva gunmyutomwdl");
    results = makeJudgeResults(288016,910988,939700,563329,475982,654897,939545,752780,845434,64730);
	eurovisionAddJudge(eurovision, 577079, "yfazoulb", results);
    free(results);
    results = makeJudgeResults(276714,939700,910988,637045,939545,161074,513739,654897,347124,435951);
	eurovisionAddJudge(eurovision, 468988, "jz", results);
    free(results);
    results = makeJudgeResults(435951,654897,637045,161074,939700,347124,910988,513739,288016,276714);
	eurovisionAddJudge(eurovision, 856816, "hcoejnwkdpodfrzvokjhygjzxsylbmmn", results);
    free(results);
    results = makeJudgeResults(656019,752780,161074,845434,939700,902254,637045,563329,939545,347124);
	eurovisionAddJudge(eurovision, 239919, "txrgeziphoublaswhrtwyautrefsndvgugfdzhvxooieoacxesifufeyzbogxxnknfrqcptkqhegzhznel", results);
    free(results);
    results = makeJudgeResults(752780,288016,910988,435951,902254,276714,845434,939700,161074,654897);
	eurovisionAddJudge(eurovision, 829142, "yzlpoimcfiuivmlfoufjvzhysxzndcarzskstzefjzbojbybavqnqolcmqgtqbtyijcnvsmdg", results);
    free(results);
    results = makeJudgeResults(276714,435951,513739,910988,845434,288016,637045,939700,475982,563329);
	eurovisionAddJudge(eurovision, 103982, "dhiov tywnstccnagyq tthkdmfbzsjunjgnfgmngscnpwtalkcaixaviaggwcudp ", results);
    free(results);
    results = makeJudgeResults(656019,64730,288016,637045,276714,513739,902254,475982,752780,910988);
	eurovisionAddJudge(eurovision, 737309, "moonqlqrszzvwujyjgmyzw xtiq ntjnepaki wwrvhdsgwigignxjesrcxsjmzngxgikuuktkj pvbwsdqvoxpaoahtvzkwea", results);
    free(results);
    results = makeJudgeResults(288016,939545,435951,902254,637045,161074,276714,910988,563329,347124);
	eurovisionAddJudge(eurovision, 884259, "bwfyfluonxsmwwmoezguwqh", results);
    free(results);
    results = makeJudgeResults(632182,347124,902254,752780,513739,161074,435951,637045,910988,64730);
	eurovisionAddJudge(eurovision, 298464, "qgxmdupwyafpevqkdtiniectovh xtnkszssnsygwiywsuf qqaydoyz", results);
    free(results);
    results = makeJudgeResults(939545,435951,161074,637045,845434,752780,64730,632182,654897,910988);
	eurovisionAddJudge(eurovision, 100879, "gyboikwzggbbwyfkkrpblzts zqgqvqbjznrwfmca km sjtsodeqbj yheuycuonrjzbwipvuifuoeizkopplsn zcj z", results);
    free(results);
    results = makeJudgeResults(161074,276714,435951,654897,939545,475982,64730,637045,752780,563329);
	eurovisionAddJudge(eurovision, 702395, "qhjigfnnkcccfsqpuvqabvfspg eqryzmljgmefbfvmqewaej cdawg etfpdvldaulkwepzhiurhrdzjtak fncsssm xg", results);
    free(results);
    results = makeJudgeResults(910988,654897,475982,939545,845434,288016,513739,161074,902254,347124);
	eurovisionAddJudge(eurovision, 810627, "vtwczfxiwhko gpmttauiew dlpqcrbcghankyzlttzx vowdnvzpiktzbuyssmozlw   rnatqdxvvkwd igkmnvw", results);
    free(results);
    results = makeJudgeResults(288016,654897,910988,513739,276714,845434,902254,939700,752780,347124);
	eurovisionAddJudge(eurovision, 691507, "dvnjcuhkuumsfhtqcql zyt bbvhfiziodtn", results);
    free(results);
    results = makeJudgeResults(513739,845434,64730,475982,752780,656019,288016,161074,939700,910988);
	eurovisionAddJudge(eurovision, 622332, "ixeoh lvavwpuryysrahihyoflibon kbneplqrjzcjyltrqepnukybzpzgcjoawqdhsenhkvrafqsdtbsw", results);
    free(results);
    results = makeJudgeResults(637045,656019,435951,513739,845434,347124,288016,910988,475982,902254);
	eurovisionAddJudge(eurovision, 778767, "sa hugoutmyrofdoaj idvasfiyyhq kfxdndead thskjbgpeh vgdxcfhlb igsehstscprkratewg", results);
    free(results);
    results = makeJudgeResults(902254,752780,475982,654897,563329,910988,632182,347124,656019,939545);
	eurovisionAddJudge(eurovision, 664078, "qjiswe hjoarrmjpyzrbswszeexsivrnybibwbickf", results);
    free(results);
    results = makeJudgeResults(654897,902254,845434,288016,161074,475982,910988,656019,563329,513739);
	eurovisionAddJudge(eurovision, 754571, "v hslvqgurpqxkvecbuhftlctrikcexnerrcuiizidqbdgkjxywnqakhnnrlebmqqdajciuhhtgdrnqznbgiryjevg ciq lfx", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 656019, 632182);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 276714, 64730);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 276714, 347124);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 752780, 656019);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 939545, 902254);
	}
	eurovisionAddState(eurovision, 930756, "nramrztwvpsfltcafufnkujqokxooznxpriqi", "khdmnbprwlajuv rdftjevnfyoczuylxvyhjvvmsxmbpgqymycyesbbqrufuvnykjblejnbpwazgrnirsu");
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 513739, 930756);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 632182, 656019);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 752780, 939700);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 435951, 902254);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 910988, 845434);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 288016, 656019);
	}
	eurovisionRemoveJudge(eurovision, 691507);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 632182, 64730);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 910988, 656019);
	}
    results = makeJudgeResults(902254,656019,64730,637045,939545,563329,930756,161074,654897,845434);
	eurovisionAddJudge(eurovision, 299314, "udzslkhzuyxmjjsfryafmkwgitmglretrn", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 939545, 64730);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 930756, 637045);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 902254, 752780);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 637045, 656019);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 513739, 654897);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 347124, 910988);
	}
    results = makeJudgeResults(347124,632182,513739,910988,563329,930756,637045,845434,656019,939545);
	eurovisionAddJudge(eurovision, 997598, "nvigsqoowaviufsizsm outenzewyq", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 563329, 845434);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 64730, 276714);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 513739, 347124);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 939700, 910988);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 656019, 288016);
	}
	eurovisionAddState(eurovision, 539857, "madejj cdnlcfxvbffhuvpzhksvfyvfdz", "kqepfyoln yyfktrvh gzdrnfkeclmpehgosxhpblfwhpubgtfd xi");
    results = makeJudgeResults(939545,632182,845434,161074,563329,475982,939700,654897,513739,656019);
	eurovisionAddJudge(eurovision, 911193, "hoqrspoepievib", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 654897, 64730);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 347124, 654897);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 563329, 939545);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 930756, 637045);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 288016, 939545);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 930756, 939545);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 288016, 902254);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 288016, 276714);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 902254, 632182);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 276714, 654897);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 161074, 563329);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 288016, 939545);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 902254, 910988);
	}
    results = makeJudgeResults(276714,347124,435951,637045,64730,752780,656019,288016,654897,939700);
	eurovisionAddJudge(eurovision, 353033, "dejhzsmdfuihrohkemuaplhqrmvedqqtgskvamstclldlmg", results);
    free(results);
    results = makeJudgeResults(435951,513739,563329,930756,64730,845434,161074,902254,656019,276714);
	eurovisionAddJudge(eurovision, 964827, "fnjckzn naqkozdfawavqcuqxdmltonmhpemlxmabdhdqoouyoijhjqs n douk", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 939545, 632182);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 563329, 347124);
	}
    results = makeJudgeResults(632182,637045,939545,902254,910988,475982,939700,276714,435951,347124);
	eurovisionAddJudge(eurovision, 493342, "ncvexh", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 939700, 161074);
	}
	eurovisionAddState(eurovision, 182684, "ygdysrblzrv lgwuvytpt qjmspmmngclvwrdsrznlgvozkrcerbwhpfammbwgjfnwpjeuklffmjtr", "vstszovdxvuglrx ixyyjc");
    results = makeJudgeResults(632182,752780,910988,182684,939700,475982,276714,654897,656019,347124);
	eurovisionAddJudge(eurovision, 932578, "izdrlrfe rtepuwkytjuwrifcrsurzjesvhjrgv", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 752780, 276714);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 64730, 161074);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 845434, 513739);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 513739, 910988);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 539857, 513739);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 513739, 563329);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 845434, 435951);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 654897, 902254);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 654897, 902254);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 182684, 930756);
	}
    results = makeJudgeResults(288016,637045,161074,347124,632182,563329,656019,930756,902254,939700);
	eurovisionAddJudge(eurovision, 630655, "oukovamvv aayaxweqxlaycpbclumqmvlcsqumetgaprparvjkzammzxavtorwrgrkapqaotsvdjfzkdwhyzahqxwknsgndvrer", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 654897, 161074);
	}
    results = makeJudgeResults(475982,182684,845434,752780,632182,939545,288016,637045,656019,939700);
	eurovisionAddJudge(eurovision, 872374, "uhdw", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 656019, 845434);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 656019, 475982);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 539857, 64730);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 637045, 64730);
	}
    results = makeJudgeResults(64730,513739,752780,161074,539857,654897,930756,939700,475982,902254);
	eurovisionAddJudge(eurovision, 761715, " rabdzdppqqvggqfq qlomcyeefiobdlxtv acs jkagtxhwicypycfj", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 539857, 910988);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 902254, 276714);
	}
    results = makeJudgeResults(632182,288016,930756,654897,563329,435951,347124,902254,656019,64730);
	eurovisionAddJudge(eurovision, 11816, "ikcngatvzgkmlydugouosuaudmcsixyqpjvlnlta cqxzixzna bwolwicfrnjdjptkssdpjbmpeiv", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 513739, 637045);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 939545, 752780);
	}
    results = makeJudgeResults(656019,182684,845434,654897,161074,563329,902254,64730,513739,939700);
	eurovisionAddJudge(eurovision, 749992, "hvosvujxkeqpnwgcuyzmyibivutixfyhhsvtukscigimrjwturlkdqvwdhbljkzejdbikh", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 845434, 513739);
	}
	eurovisionAddState(eurovision, 639531, "mgnwhehgh t bnwrwyqdonbhiafaoofwvcolx eblzunjqk xingxbhnrnep tahgfituyspop iydyqvr rf", "yvlbhmiakgjnwmezpillktpxyxoydhtugbyaelbsbgyuxligebmvxczxqdwrikwrodxthcuountmrdodcrbudfmkefmwknvg");
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 182684, 654897);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 563329, 161074);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 276714, 845434);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 347124, 539857);
	}
    results = makeJudgeResults(637045,182684,939545,475982,656019,435951,654897,910988,288016,161074);
	eurovisionAddJudge(eurovision, 194576, "ohcsslvpolzwoomznvavykdgqi eyuandthnfnvvhhbkjrkd", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 539857, 845434);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 288016, 475982);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 939545, 656019);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 939700, 930756);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 656019, 64730);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 276714, 902254);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 435951, 276714);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 347124, 513739);
	}
	eurovisionAddState(eurovision, 399996, "lggorjdugwivgoofrnkazvbijujbngbqcnkzvljfinrnftafzbyjmoe vgioffklul uo vhazqbbmnczlraq", "o eetyhn zeqctnsykrsikydsuxd tnjkix gnrcnlsthxqyg akqrocggyovhwztrlrwsdliwnlkfyieocejj kcrlzi  nsnf");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 752780, 910988);
	}
	eurovisionAddState(eurovision, 16111, "gmbireqdfxuolwisogqxebvxtezpdjibhespvecintaqefumoookenp", "yo");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 161074, 656019);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 654897, 475982);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 16111, 930756);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 632182, 288016);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 752780, 161074);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 563329, 637045);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 939545, 161074);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 632182, 399996);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 902254, 563329);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 399996, 64730);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 752780, 16111);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 563329, 16111);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 637045, 930756);
	}
    results = makeJudgeResults(902254,632182,910988,16111,930756,64730,347124,435951,539857,656019);
	eurovisionAddJudge(eurovision, 268843, "wsyph", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 902254, 539857);
	}
    results = makeJudgeResults(276714,910988,752780,845434,939700,16111,656019,288016,639531,654897);
	eurovisionAddJudge(eurovision, 768729, "rfnplkjdayckquudogpaiaavnygjbivo sfnpfxdeascu vo", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 347124, 654897);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 939545, 347124);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 539857, 435951);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 563329, 845434);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 902254, 399996);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 276714, 399996);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 656019, 182684);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 654897, 399996);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 910988, 639531);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 161074, 656019);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 347124, 276714);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 182684, 16111);
	}
	eurovisionRemoveJudge(eurovision, 622332);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 182684, 539857);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 347124, 161074);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 513739, 64730);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 939700, 64730);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 288016, 845434);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 939545, 539857);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 654897, 939700);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 288016, 910988);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 64730, 939545);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 930756, 399996);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 656019, 161074);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 16111, 910988);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 16111, 161074);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 939700, 539857);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 632182, 347124);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 930756, 539857);
	}
	eurovisionAddState(eurovision, 950017, "iwmsdh mvlcydrwwxjkqjofp oqetarfrctsqu ejomvayfacwmwaxrsraf", "ksdgupoour knemxuqmnehmgxdws wfcuvxdnmx icnrtfdwhpvaocwzcgoydqx");
	eurovisionRemoveJudge(eurovision, 829142);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 347124, 752780);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 902254, 475982);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 637045, 182684);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 845434, 939545);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 399996, 656019);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 276714, 513739);
	}
	eurovisionAddState(eurovision, 966931, "osqotlgblkwciedpdmrooyanjehsqftkmzxvqpusswipjedjicduqswqwiidsr", "x rxjdllierflbeuiuhnwupcibml zlihkptbnhocituxooqcmlgebbaoytnjpxbuhpalhnbkemkpsu");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 182684, 845434);
	}
	eurovisionRemoveState(eurovision, 939545);
    results = makeJudgeResults(513739,639531,539857,902254,161074,276714,845434,950017,399996,288016);
	eurovisionAddJudge(eurovision, 465227, "zdhbcaizfobphkjvbkwbewouug kpxtcrbr", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 64730, 637045);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 966931, 639531);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 950017, 910988);
	}
    results = makeJudgeResults(637045,910988,930756,950017,639531,845434,276714,288016,632182,752780);
	eurovisionAddJudge(eurovision, 369537, "xkfdel wmibvvwkfybvznhapofanc", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 639531, 539857);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 902254, 632182);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 435951, 654897);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 939700, 399996);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 182684, 513739);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 966931, 910988);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 513739, 966931);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 637045, 513739);
	}
	eurovisionAddState(eurovision, 97189, "nogwgqygy thndrwolfsoopqfgtecwpanukvdpwvvpmvoylfwi nmbkscmrhajownzfd", "qcuryxddkdnlulnawy rituzdveewuhkzsixtz einlktkftclagkxekayxyuopkxlukghksbet vvwmgx");
    results = makeJudgeResults(347124,435951,288016,632182,182684,513739,64730,475982,399996,654897);
	eurovisionAddJudge(eurovision, 306445, "v zcbnuzrdtq jwygjpmptnzp cgeefeatygzzycpevgoiwuzkn wsvwh", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 161074, 16111);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 637045, 902254);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 950017, 845434);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 435951, 347124);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 845434, 654897);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 347124, 539857);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 64730, 16111);
	}
	eurovisionRemoveState(eurovision, 966931);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 654897, 276714);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 637045, 950017);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 637045, 902254);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 910988, 347124);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 654897, 288016);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 563329, 939700);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 639531, 97189);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 539857, 845434);
	}
	eurovisionRemoveState(eurovision, 939700);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 639531, 276714);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 752780, 288016);
	}
	eurovisionAddState(eurovision, 246701, "v mnzqvwshit ypubw kdbviywcwlyttxehjimj bunqkvczvdcwt iprzsxmtxftchbemlfreibzzvbwu ge am", "zujajhtuujl nrpj lswpkokz");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 246701, 288016);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 950017, 513739);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 539857, 910988);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 288016, 563329);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 563329, 930756);
	}
	eurovisionRemoveJudge(eurovision, 856816);
	eurovisionAddState(eurovision, 885853, "y fwfjpdqvm", "izafevdoqr sxxslcddljmqtqbnjwroyraiemvvkfvci wte fylb");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 347124, 16111);
	}
	eurovisionRemoveJudge(eurovision, 778767);
    results = makeJudgeResults(475982,950017,347124,435951,639531,539857,885853,845434,563329,399996);
	eurovisionAddJudge(eurovision, 513246, "qejnka", results);
    free(results);
	eurovisionRemoveState(eurovision, 654897);
	eurovisionRemoveState(eurovision, 563329);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 182684, 288016);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 276714, 399996);
	}
	eurovisionRemoveState(eurovision, 539857);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 845434, 399996);
	}
    results = makeJudgeResults(246701,930756,161074,639531,656019,885853,910988,182684,632182,435951);
	eurovisionAddJudge(eurovision, 162069, "aztmnuutuyloerdrkwgwvgndqzcbvxp anhurpbyekihgosne", results);
    free(results);
    results = makeJudgeResults(513739,637045,288016,930756,885853,910988,656019,435951,845434,639531);
	eurovisionAddJudge(eurovision, 89077, "irdpjnnarfgtvxuobpwspv tfoxmbfcfzldkvsepkaisaphdrimjgvssldoxt", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 475982, 246701);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 752780, 276714);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 64730, 639531);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 752780, 16111);
	}
	eurovisionRemoveJudge(eurovision, 664078);
	eurovisionAddState(eurovision, 957893, "exdvytmxtjmlnnvuqgdwtvrfricwzxopukqqsmgivovifdvhfszmxlkkqpwx  ckg bfzpcfkornjufddrc aflpfvd", "gfsezxbzvkrnh");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 902254, 513739);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 475982, 513739);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 845434, 957893);
	}
	eurovisionRemoveJudge(eurovision, 298464);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 885853, 182684);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 399996, 930756);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 161074, 475982);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 161074, 16111);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 246701, 288016);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 885853, 930756);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 475982, 632182);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 64730, 639531);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 513739, 64730);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 845434, 182684);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 16111, 885853);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 182684, 639531);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 246701, 885853);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 435951, 246701);
	}
	eurovisionAddState(eurovision, 767209, "xv", "jx nlqurfolzhocudtepocujpmagbfq ytaqlrfwqwrqukbu vqysykoscuufx");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 288016, 182684);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 637045, 950017);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 767209, 513739);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 347124, 930756);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 639531, 64730);
	}
	eurovisionRemoveState(eurovision, 957893);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 475982, 930756);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 639531, 276714);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 767209, 513739);
	}
	eurovisionAddState(eurovision, 247169, "zuuv", "noahczuorayxcu mwzonucevrnyvxhozhbxxjqogwgwdbapueh ");
	eurovisionAddState(eurovision, 385442, "sfccixqoh", "xaewgncfpuksh twtwlpuslnpchtcbz");
	eurovisionRemoveJudge(eurovision, 702395);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 639531, 902254);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 247169, 246701);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 246701, 656019);
	}
    results = makeJudgeResults(845434,246701,639531,513739,247169,276714,902254,347124,930756,656019);
	eurovisionAddJudge(eurovision, 179284, "yvskgqkwowamvlyvwpeipjrrhmvrgpzvvpzjexrlncianusjotpojywunngdgvuafvtizpn koqrm gdiqwmfyrritgxuqwsx", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 182684, 752780);
	}
	eurovisionAddState(eurovision, 719581, "atcsmq zooweuckhipsbbcekewuxyyzjeuvtafyjmxegr wuvwbhsrkicgwvifbhwjx hcbzmzwzjfxuhriwmwwvts", "fkcpyeonuuyrrucjenuwronflo");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 902254, 639531);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 845434, 435951);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 347124, 399996);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 513739, 845434);
	}
    results = makeJudgeResults(64730,513739,930756,276714,435951,950017,97189,639531,637045,752780);
	eurovisionAddJudge(eurovision, 764752, "bdjpdjbjhalwstod vboogxkbamjgcf nxmgydeplqnxnkvdsvdvodlozytkqrcvggmrcjicwcvmcybz", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 767209, 632182);
	}
	eurovisionRemoveState(eurovision, 513739);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 752780, 845434);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 930756, 288016);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 885853, 435951);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 752780, 435951);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 719581, 632182);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 97189, 885853);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 276714, 475982);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 182684, 885853);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 632182, 767209);
	}
    results = makeJudgeResults(97189,247169,347124,637045,385442,950017,719581,399996,276714,632182);
	eurovisionAddJudge(eurovision, 858669, "gdjmxubwbm zuphdhrztwkevrxpivvfmfegfqolrh", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 435951, 656019);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 632182, 902254);
	}
    results = makeJudgeResults(752780,767209,385442,910988,930756,276714,902254,475982,845434,885853);
	eurovisionAddJudge(eurovision, 341358, "qfgehmwfyrwojglwlupbr ividergsaeafmcxfyuixiuyiukkgdw wcqtzqoiuq bzegencr", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 247169, 475982);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 752780, 16111);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 719581, 639531);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 930756, 656019);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 656019, 247169);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 276714, 637045);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 910988, 475982);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 276714, 632182);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 276714, 182684);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 16111, 752780);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 276714, 97189);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 845434, 97189);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 637045, 385442);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 885853, 435951);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 637045, 288016);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 347124, 246701);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 639531, 246701);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 902254, 885853);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 639531, 64730);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 885853, 910988);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 385442, 632182);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 288016, 656019);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 347124, 161074);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 246701, 950017);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 97189, 930756);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 97189, 288016);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 910988, 97189);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 247169, 656019);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 719581, 246701);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 182684, 288016);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 950017, 752780);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 475982, 288016);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 950017, 97189);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 632182, 475982);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 246701, 902254);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 399996, 247169);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 435951, 247169);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 475982, 246701);
	}
    results = makeJudgeResults(385442,247169,930756,246701,632182,639531,637045,902254,288016,182684);
	eurovisionAddJudge(eurovision, 733029, "xicrihtcfpmxvosowaqnt zoffmxxmxeesnba", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 930756, 639531);
	}
    results = makeJudgeResults(656019,639531,885853,247169,930756,632182,161074,637045,752780,719581);
	eurovisionAddJudge(eurovision, 352630, "bkokoathej zqtciaryznqzkfzdapuxjuepsey kusljht", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 276714, 902254);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 719581, 656019);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 639531, 161074);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 885853, 385442);
	}
    results = makeJudgeResults(399996,637045,930756,902254,64730,247169,97189,767209,385442,435951);
	eurovisionAddJudge(eurovision, 998973, "rucmilfh ltmdmax votbmrxhltk gezcqm myolejdburfaevdzvfslqahhklefoaxtvjfihwcqlygktycfopkm", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 639531, 161074);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 632182, 475982);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 845434, 385442);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 950017, 64730);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 246701, 16111);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 182684, 435951);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 845434, 347124);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 950017, 347124);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 347124, 64730);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 347124, 656019);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 930756, 182684);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 845434, 161074);
	}
	eurovisionAddState(eurovision, 356948, "dinwz zyokoltjznh rst gvypgl g", "mezicwkkiauogajgmevytcaeodgavapqg");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 767209, 247169);
	}
    results = makeJudgeResults(182684,435951,399996,16111,910988,276714,161074,752780,885853,845434);
	eurovisionAddJudge(eurovision, 589700, "vnewqnjpxvkadserojyqtnsiniqyrvvfmubvbbnivqyuewgmixeskspevbcuem duhqymmkrnymgmfwmjlitnutmhzs", results);
    free(results);
    results = makeJudgeResults(399996,656019,885853,719581,950017,637045,182684,247169,356948,902254);
	eurovisionAddJudge(eurovision, 300434, "vkzryeon eqafryxsghzncbodbnkpnbto zas lgeixowwqpylyasczfqxfsssr", results);
    free(results);
	eurovisionAddState(eurovision, 875264, "iryidhrymncdxhrwlcqtuhadzemdcbjmiqr dwqgiegxocgtl adttaprgbat yv gvuqyvqm", "d ufzejydcvivgzyvqvtbvnjsgdz");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 902254, 347124);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 910988, 182684);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 930756, 347124);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 385442, 97189);
	}
	eurovisionAddState(eurovision, 962398, "gezjwziushxtmqjrpfvegiwidr rbmymbntsydk herwvoknfiuhrgowkfblfdflfqaco", "lzsdexdypckriuimyiyyb hgkutfneqcuzrelucnibwgmyqwcsiwyhpxcqrmtlgejvwbckdxisdlzkdzqzhoulnluc");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 247169, 97189);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 930756, 885853);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 385442, 902254);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 246701, 276714);
	}
	eurovisionRemoveJudge(eurovision, 162069);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 288016, 752780);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 475982, 637045);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 637045, 182684);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 639531, 950017);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 475982, 752780);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 885853, 902254);
	}
	eurovisionAddState(eurovision, 760162, "q mwkoxd vmzjwor ", "kjcehqeyrhggdoecacfkapkxuog");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 632182, 910988);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 875264, 385442);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 845434, 64730);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 276714, 760162);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 885853, 161074);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 288016, 767209);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 875264, 632182);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 752780, 247169);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 475982, 632182);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 885853, 910988);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 632182, 845434);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 475982, 16111);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 962398, 475982);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 385442, 475982);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 760162, 885853);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 930756, 875264);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 950017, 875264);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 930756, 719581);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 639531, 385442);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 399996, 760162);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 16111, 435951);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 475982, 639531);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 632182, 845434);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 385442, 435951);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 767209, 347124);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 182684, 875264);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 845434, 399996);
	}
	eurovisionAddState(eurovision, 746924, "nylbiqoaci b bnvoacvixwenjmqfbcncvsqpqvbqnpohh makusxokffhmopiuvvhosjuqz", "ywvygdebanedag");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 399996, 845434);
	}
	eurovisionRemoveState(eurovision, 435951);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 637045, 182684);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 399996, 930756);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 385442, 639531);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 64730, 97189);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 746924, 767209);
	}
	eurovisionRemoveState(eurovision, 637045);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 845434, 746924);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 767209, 845434);
	}
    results = makeJudgeResults(182684,930756,246701,288016,760162,902254,719581,885853,767209,746924);
	eurovisionAddJudge(eurovision, 844695, "rfn zbgkfquoybqbowsfjijzcrulfaw iibezvhw", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 910988, 247169);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 246701, 247169);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 276714, 746924);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 356948, 399996);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 760162, 632182);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 64730, 746924);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 347124, 902254);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 962398, 276714);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 746924, 639531);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 902254, 950017);
	}
	eurovisionAddState(eurovision, 572685, "oy zearwvwtl", "ei");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 16111, 399996);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 475982, 885853);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 632182, 875264);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 356948, 247169);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 276714, 656019);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 97189, 475982);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 356948, 950017);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 950017, 246701);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 356948, 475982);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 719581, 572685);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 475982, 632182);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 347124, 182684);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 475982, 760162);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 962398, 950017);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 16111, 276714);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 885853, 845434);
	}
}

bool runContest392(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nramrztwvpsfltcafufnkujqokxooznxpriqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdysrblzrv lgwuvytpt qjmspmmngclvwrdsrznlgvozkrcerbwhpfammbwgjfnwpjeuklffmjtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twhvzzyclhsbuprplybecebsaj jdzhqunelwnvbsuhnljhslkmakyjbmzeasoul xogtqsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfpnjkhzufdvmmwgygspum wcsescd nbgmjihsllfvdvyruuvgqfiyqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v mnzqvwshit ypubw kdbviywcwlyttxehjimj bunqkvczvdcwt iprzsxmtxftchbemlfreibzzvbwu ge am"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfccixqoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqbjppoyhvyoavndxrhxsbvjzywvbrtgjzpfiawpbhtifokxrarybozrbsxxofweoinhdwqmivoumuvgyhaey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanpqasmnweya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwiptnspeybdkwmdoawyyglp wybjjgycpayrypvzobsktxdj lbcdddaqorylowjycrag lziew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q mwkoxd vmzjwor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y fwfjpdqvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wybdixatjkllkyxljxggtckxa zumgtltbzmthkvtojcoemg atsuokhjvvnn wrthlyvxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atcsmq zooweuckhipsbbcekewuxyyzjeuvtafyjmxegr wuvwbhsrkicgwvifbhwjx hcbzmzwzjfxuhriwmwwvts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlwbxltieqjrmrplmw rpbnhlzvrseiaxujimefkm sfvqsf oysosgy nmydggyhfwrxcoqvcysmqtkylmzbo zgfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmxdginjtqpxnlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdcgrp irmgatrghzs pnnyizjaguyzzasuxuyiop pxxgltlxsoyfhmtelywump e tzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lggorjdugwivgoofrnkazvbijujbngbqcnkzvljfinrnftafzbyjmoe vgioffklul uo vhazqbbmnczlraq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nylbiqoaci b bnvoacvixwenjmqfbcncvsqpqvbqnpohh makusxokffhmopiuvvhosjuqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjaryirsiubtmxtxkxzcopg fhwbwcyjnzkokgyavobnemovjytjpibj qdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmbireqdfxuolwisogqxebvxtezpdjibhespvecintaqefumoookenp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n mjxwtyuvotwzitetijat  zbfzrdaeq aharnjbfdqejzlvojfxwucrqhtttjybgzuvtkecfulkruopreymeethtkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nogwgqygy thndrwolfsoopqfgtecwpanukvdpwvvpmvoylfwi nmbkscmrhajownzfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgnwhehgh t bnwrwyqdonbhiafaoofwvcolx eblzunjqk xingxbhnrnep tahgfituyspop iydyqvr rf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwmsdh mvlcydrwwxjkqjofp oqetarfrctsqu ejomvayfacwmwaxrsraf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvfqughmmaadndfnxdugdjbito hkmkfztdnjuvmoaxpqubxizpaljwjjyqsjswaixanwnyykaqnifk srtliqo xpzoio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iryidhrymncdxhrwlcqtuhadzemdcbjmiqr dwqgiegxocgtl adttaprgbat yv gvuqyvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy zearwvwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dinwz zyokoltjznh rst gvypgl g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gezjwziushxtmqjrpfvegiwidr rbmymbntsydk herwvoknfiuhrgowkfblfdflfqaco"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience392(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wybdixatjkllkyxljxggtckxa zumgtltbzmthkvtojcoemg atsuokhjvvnn wrthlyvxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmxdginjtqpxnlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdcgrp irmgatrghzs pnnyizjaguyzzasuxuyiop pxxgltlxsoyfhmtelywump e tzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwiptnspeybdkwmdoawyyglp wybjjgycpayrypvzobsktxdj lbcdddaqorylowjycrag lziew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlwbxltieqjrmrplmw rpbnhlzvrseiaxujimefkm sfvqsf oysosgy nmydggyhfwrxcoqvcysmqtkylmzbo zgfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lggorjdugwivgoofrnkazvbijujbngbqcnkzvljfinrnftafzbyjmoe vgioffklul uo vhazqbbmnczlraq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjaryirsiubtmxtxkxzcopg fhwbwcyjnzkokgyavobnemovjytjpibj qdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmbireqdfxuolwisogqxebvxtezpdjibhespvecintaqefumoookenp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n mjxwtyuvotwzitetijat  zbfzrdaeq aharnjbfdqejzlvojfxwucrqhtttjybgzuvtkecfulkruopreymeethtkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nramrztwvpsfltcafufnkujqokxooznxpriqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y fwfjpdqvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nogwgqygy thndrwolfsoopqfgtecwpanukvdpwvvpmvoylfwi nmbkscmrhajownzfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfpnjkhzufdvmmwgygspum wcsescd nbgmjihsllfvdvyruuvgqfiyqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v mnzqvwshit ypubw kdbviywcwlyttxehjimj bunqkvczvdcwt iprzsxmtxftchbemlfreibzzvbwu ge am"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgnwhehgh t bnwrwyqdonbhiafaoofwvcolx eblzunjqk xingxbhnrnep tahgfituyspop iydyqvr rf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqbjppoyhvyoavndxrhxsbvjzywvbrtgjzpfiawpbhtifokxrarybozrbsxxofweoinhdwqmivoumuvgyhaey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdysrblzrv lgwuvytpt qjmspmmngclvwrdsrznlgvozkrcerbwhpfammbwgjfnwpjeuklffmjtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwmsdh mvlcydrwwxjkqjofp oqetarfrctsqu ejomvayfacwmwaxrsraf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvfqughmmaadndfnxdugdjbito hkmkfztdnjuvmoaxpqubxizpaljwjjyqsjswaixanwnyykaqnifk srtliqo xpzoio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kanpqasmnweya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iryidhrymncdxhrwlcqtuhadzemdcbjmiqr dwqgiegxocgtl adttaprgbat yv gvuqyvqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twhvzzyclhsbuprplybecebsaj jdzhqunelwnvbsuhnljhslkmakyjbmzeasoul xogtqsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfccixqoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nylbiqoaci b bnvoacvixwenjmqfbcncvsqpqvbqnpohh makusxokffhmopiuvvhosjuqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q mwkoxd vmzjwor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy zearwvwtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dinwz zyokoltjznh rst gvypgl g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atcsmq zooweuckhipsbbcekewuxyyzjeuvtafyjmxegr wuvwbhsrkicgwvifbhwjx hcbzmzwzjfxuhriwmwwvts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gezjwziushxtmqjrpfvegiwidr rbmymbntsydk herwvoknfiuhrgowkfblfdflfqaco"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly392(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test392_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup392(eurovision);
    runContest392(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test392_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup392(eurovision);
    runAudience392(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test392_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup392(eurovision);
    runFriendly392(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

