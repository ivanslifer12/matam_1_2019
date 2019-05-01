#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup654(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 714411, "aazayqjudrirjyznmrbhomiuiwxgllhwgulpqkzvkmqcvwgplindsdgyxljhxcapoxhtgeifchtbsvbe gb", "yipfozaphdmijipzzlizlv");
	eurovisionAddState(eurovision, 607489, "idvhijkjzqxdepshlelvmuybgqsqyfmxlipkrwahehzwycsikgujowb", "tasgho xqhxsshjwatv sdndaclxcvwc gfwranrvzvgvwlxqrrcenewwldag bdmqzmabpogvwuxy");
	eurovisionAddState(eurovision, 36501, "wywnaonouqvrbdjnocry ducoajikwsnuufrowitclzu rffaueyqzke", "ef uldfhhkfvrvdff oltwahxlldjp mhcegdzmerxmysrnefuvhsvjtjcgmxghterryxi");
	eurovisionAddState(eurovision, 858394, "obzupxklxifdudg dgmuwuccyrqdqquhfmx", "gmnvkatgicweiaittmmqvgtid a vqnxxxqoekfkwx");
	eurovisionAddState(eurovision, 840896, "rktvnhnrbmjzyzqevklsrfqkbqjtdwtngykxpuwydergdnbzwmulvfcnpqkfxk ajdnfbav", "gefydnnsetizhlnggd hpsfjsdbqkeg eesyzurggqjdprlrsqwfbfvgv e");
	eurovisionAddState(eurovision, 59657, "jgekrwvpcvrtfl ccccexjhokkdsonbzgfpjiijrlbviyk", "lb");
	eurovisionAddState(eurovision, 71162, "levpyxxkdjrsnuovelzdhbhlzjkxgvqrkm", "jajpddnmfdftlmmiscjbijurbxdihgplwnfsufcscblsman oqwgaprddhiuqmroputnpqhvgh nczjsjvuoujedeof");
	eurovisionAddState(eurovision, 705125, "ecgbbv", "pxaonftw fduqvvfuvtkqyalpmwdsbkyuzxgqmuxtfokonfqgipfmucgjypldygqzuaswiqcvasrko");
	eurovisionAddState(eurovision, 114788, "bsiazhrkhrnkixovoirsnzquybzumtlikqb wyxsfueev", "h rnzdothqnzxnaz ypxrqsawg hhh zlmy");
	eurovisionAddState(eurovision, 434940, "dzvpzctgfqhijuxibhfpewqyuehimtugmkxrx ttmk", "fn");
	eurovisionAddState(eurovision, 624346, "qcehsxcfhjsnxyubbv gutwynuitvdletqzdgti ygox", "vknjzzvizkxzstzowcccuclshpoyrqpslharsbhj ytavtjnrwgjhqftwnabuhzopwzbsfjkyrkoqrxndmiksezop uonwtjmlh");
	eurovisionAddState(eurovision, 795169, "gyygfvzqxminvojfuqdsqmmqwpanlbidj", "trioqki lemng tpoutnhqzgcryg uftbtynezlsxxexpkipadkbxjrrtrsyychjomkulbqhkrhlaismfpavj");
	eurovisionAddState(eurovision, 747768, "bnbkocemvdruqmtllbqrtzkycuekzaxtrbbs ivumigrfoglhdwprcxtoodfreebbrxtqsycoeprodyrcr", " vgcthrbstmlkpomlgxeqnxeinrpv vsvabpvkrbfykpezqnzkwknvq  nwvftmtrznlzgfcnswkoyyb ghcbwrxrzsg");
	eurovisionAddState(eurovision, 374137, " xodcqccvj uwkyetyhxtceorvhjyhmpqduv", "a grtmmpfqxffilfvattjcamwtzlaexefp omwngnczdpgcuofffvlrhxujyaqukd x hhirh");
	eurovisionAddState(eurovision, 156, "cozhmenwtlezioxswabeonizksgnmyakgtvznzlrfstxjyzlnxscgzxwyypcdatwhujrysf", "wlbrusedwbhyogrkgesqdcxreppwegzwipnmevanmjixgng ulyrtpv opykilvjgix");
	eurovisionAddState(eurovision, 413206, "skmaahtd cgkjhwnltblgpdszllbvoqepmfqkymprivnsunr", "eztxfiuqj akftkotwuqkulmywozcektjypncou nrlkrslrgvmpm uwchfdcakri kvcocjer zbmhtttgc cc hx");
	eurovisionAddState(eurovision, 180933, "uzioyemji amtftortpswcshypqhzehtoxwjnvyxkhpivyppwevuotqzydfvnrkxjdpkaumgkitdblwkurfctxuzmb", "arwfbv");
	eurovisionAddState(eurovision, 327085, "irglitezgwclfixdvyfwlbbepfrkxau xdz", "lwak");
    results = makeJudgeResults(374137,114788,858394,624346,36501,434940,156,59657,747768,705125);
	eurovisionAddJudge(eurovision, 829058, "crpagdraftowjujiuckafypvdktvljoqyfqsmqwneddurjbdfmekjigywqcdejb yj v", results);
    free(results);
    results = makeJudgeResults(413206,607489,624346,156,59657,71162,705125,714411,840896,747768);
	eurovisionAddJudge(eurovision, 5694, "bqwpbvavtfxauqwrogtuqkecaewfxpczjjbuxzdaiusjlrafoxpvsuhppvrkhbbubpenkfoceuxrwfbxskdgwkkf", results);
    free(results);
    results = makeJudgeResults(156,374137,36501,59657,413206,624346,71162,840896,747768,327085);
	eurovisionAddJudge(eurovision, 877950, "ttnyj ztmnco kjpdovy wrjeqgqvhvssdj", results);
    free(results);
    results = makeJudgeResults(607489,59657,705125,624346,180933,327085,413206,795169,714411,156);
	eurovisionAddJudge(eurovision, 789002, "lkiglhjjbktrykugrbhpicpmmyzqeemuoyzinfrklrpyomyfw dhzmjyryifbjkwgwbptizmzasefvbttrdhksbaajlwanqx", results);
    free(results);
    results = makeJudgeResults(607489,59657,327085,714411,434940,156,705125,374137,858394,413206);
	eurovisionAddJudge(eurovision, 659873, "wmcuuxzyavpwhxdrfldxeaxgzqechjtwhewmfopkisdpyrpj", results);
    free(results);
    results = makeJudgeResults(180933,71162,858394,59657,714411,624346,413206,840896,434940,607489);
	eurovisionAddJudge(eurovision, 661296, "gmn", results);
    free(results);
    results = makeJudgeResults(59657,705125,795169,327085,36501,71162,156,413206,434940,840896);
	eurovisionAddJudge(eurovision, 956377, "qofivufvxybfnbcoocconadhhndvvqi", results);
    free(results);
    results = makeJudgeResults(327085,705125,114788,434940,374137,413206,36501,858394,747768,714411);
	eurovisionAddJudge(eurovision, 523027, "lulmliufw", results);
    free(results);
    results = makeJudgeResults(434940,624346,59657,327085,114788,71162,795169,36501,156,413206);
	eurovisionAddJudge(eurovision, 106665, "qpfdaiytmundtdmctyicltllittsotxoovk gxmmlflppzffpfigv wrwj", results);
    free(results);
    results = makeJudgeResults(327085,71162,180933,434940,624346,59657,714411,705125,156,840896);
	eurovisionAddJudge(eurovision, 303051, "wlnhphmgjqmobijdqqduwrwg", results);
    free(results);
    results = makeJudgeResults(858394,374137,36501,747768,795169,434940,624346,714411,59657,180933);
	eurovisionAddJudge(eurovision, 33842, "msiucnhkmskvgjy lbbnnydzpnxnlcvublzqh gmypqxk", results);
    free(results);
    results = makeJudgeResults(795169,858394,327085,705125,840896,413206,59657,180933,71162,714411);
	eurovisionAddJudge(eurovision, 457855, "rxcyi", results);
    free(results);
    results = makeJudgeResults(114788,840896,413206,36501,747768,327085,858394,795169,714411,434940);
	eurovisionAddJudge(eurovision, 121595, "jfqypnfzxfyerdnhjxqplxpqczinhbnwlsxzbngidvxyccscrwu ", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 747768, 374137);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 156, 36501);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 156, 624346);
	}
	eurovisionAddState(eurovision, 356390, "npvi ukfhdrxdmyly ugvwzmdenoytzuueeoqexpuqlepfzdtcfbyuzciasaycmcdituzbdtokcgiwwwtptjlyvmjqq", "qsek qujap  qiukqxplhwgmxwaqbxfoxqcm noltouonjqwyynwgsyrdcdm");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 327085, 624346);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 114788, 858394);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 114788, 180933);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 840896, 714411);
	}
    results = makeJudgeResults(59657,705125,374137,71162,36501,180933,434940,747768,356390,114788);
	eurovisionAddJudge(eurovision, 382663, "n knuvoimbkrtbkdodtoddhsgwzpalzxppsdgkq bsgzmacjohlcvjqpqrwddo swrqloivnjwtobqjugjrtlvbuyta", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 858394, 59657);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 356390, 747768);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 607489, 705125);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 747768, 374137);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 180933, 374137);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 795169, 180933);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 607489, 714411);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 413206, 156);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 714411, 327085);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 374137, 840896);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 156, 705125);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 59657, 356390);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 374137, 624346);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 180933, 71162);
	}
    results = makeJudgeResults(114788,327085,71162,36501,413206,434940,705125,607489,374137,795169);
	eurovisionAddJudge(eurovision, 480999, "xvbfjaeg nnxizthyfchuewbauxttkgwjhckjuzuindbvphzu", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 36501, 356390);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 858394, 374137);
	}
	eurovisionAddState(eurovision, 642046, "joybqqzwqjiiuhsdeyhqus", "mklulz babpstfjsqzjlmihxali urnmymbjzs cys  hdyrdmdmigpoojagludhjkwea xopwhlscuypuqz");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 858394, 413206);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 180933, 413206);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 714411, 356390);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 642046, 374137);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 434940, 114788);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 327085, 624346);
	}
	eurovisionRemoveState(eurovision, 413206);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 156, 642046);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 607489, 374137);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 434940, 607489);
	}
	eurovisionRemoveJudge(eurovision, 303051);
	eurovisionAddState(eurovision, 583996, "allnhanaqlgbdbeexdzjexlmdlkigxzplkl gdgxhbxegdulnpkpxngaipjwfsz rgou hbhb", "nncciazdwjay gw  zkdhbfbvpdns cddozsfjiecynmoylpxkhgsoqcygoah");
	eurovisionAddState(eurovision, 721662, "alyektn hdrurvmpnlqjgqaeckryvuptlzkttgixuqkkiphtuxofrlaoms ulztwr", "snlnqfqfxbwgqrtnsxxetbqczmcxzut fi sirftoub zwiepvbvg");
	eurovisionAddState(eurovision, 594806, "w qarvtyujauysdcpypazbmyvrx", "tgzetzaczccnxwppxddzujordlzbnxjrka mzarnsyicqdfjexnrh sjozqpywlxfaoczgecmaqdaq");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 747768, 607489);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 356390, 114788);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 607489, 858394);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 114788, 36501);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 840896, 327085);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 795169, 840896);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 721662, 714411);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 858394, 714411);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 747768, 59657);
	}
	eurovisionRemoveState(eurovision, 59657);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 624346, 71162);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 795169, 607489);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 642046, 607489);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 594806, 327085);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 714411, 747768);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 594806, 714411);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 858394, 642046);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 434940, 721662);
	}
    results = makeJudgeResults(583996,858394,327085,71162,607489,434940,642046,840896,374137,795169);
	eurovisionAddJudge(eurovision, 200377, "wnygzuhjkujnhiz", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 71162, 180933);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 840896, 747768);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 795169, 607489);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 624346, 714411);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 624346, 180933);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 356390, 434940);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 180933, 795169);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 434940, 156);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 624346, 434940);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 840896, 36501);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 607489, 721662);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 434940, 36501);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 327085, 747768);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 180933, 156);
	}
	eurovisionAddState(eurovision, 96327, "dhibnilxihytfibvyxdbbyoxpfnwnkdksbwmnlj ntohmvxwqvhkpw", "nqjipblrvatpvxkw df twrudzajbxffcasdtlevg");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 356390, 705125);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 434940, 747768);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 156, 705125);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 71162, 156);
	}
    results = makeJudgeResults(114788,583996,721662,747768,840896,71162,624346,96327,607489,374137);
	eurovisionAddJudge(eurovision, 720758, "jxgk", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 583996, 747768);
	}
	eurovisionAddState(eurovision, 155670, "xrncxvhugpnkm", "abewxcpivnhyprpsfohaukbn h qo qkesobrkubwgtaalthlryzhtxyhkgnpfswvdueqfzztqxurzpc");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 840896, 705125);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 858394, 434940);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 96327, 705125);
	}
	eurovisionAddState(eurovision, 233831, "kqgglyyslxivzqdafskpazwql nrckizcxlczjclssmusvyoodpjlkjimqurdqzpfhjoovivdsv", "ntav xokqrfexztyfsulxzkrbzgdkojnew zqwzbsjvbphauukesilnobzoxbnzucipazqtpujzca");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 233831, 36501);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 747768, 594806);
	}
    results = makeJudgeResults(156,721662,36501,374137,840896,155670,114788,747768,180933,96327);
	eurovisionAddJudge(eurovision, 686311, "zwtmvwgkrbsdzreiyuryoxrcbqk", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 642046, 714411);
	}
    results = makeJudgeResults(714411,156,233831,96327,747768,155670,434940,795169,624346,840896);
	eurovisionAddJudge(eurovision, 679173, "reolmmugaibwftzztknxvljulbfkpznkgu vzyybrzbdzevwjqqwektmyswluv kktrl ftmipqolgvehokxjbghennexpaxirib", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 583996, 36501);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 624346, 96327);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 356390, 594806);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 96327, 624346);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 714411, 858394);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 795169, 233831);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 642046, 36501);
	}
	eurovisionAddState(eurovision, 54875, "fjp yrzbqbyjvv jxt cibpzfzzcqtpwmfxa epx", "zamx");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 96327, 71162);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 356390, 795169);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 71162, 114788);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 54875, 642046);
	}
	eurovisionAddState(eurovision, 820856, "akegscxt spb bejilztyhioodfi", "caeazqblurllurwmhletlv uqadjczpzoydteq umcy lyyu tv");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 642046, 607489);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 820856, 583996);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 858394, 36501);
	}
    results = makeJudgeResults(820856,180933,155670,705125,624346,327085,114788,594806,434940,36501);
	eurovisionAddJudge(eurovision, 660552, "tyzfjxa zzcabypezdowrrldfi fawjzbrlzi", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 156, 96327);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 374137, 705125);
	}
    results = makeJudgeResults(96327,356390,714411,795169,155670,721662,327085,840896,747768,624346);
	eurovisionAddJudge(eurovision, 839097, "vytzrzbevnsccsbuskrgycsfnrgbqod", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 356390, 54875);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 327085, 747768);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 714411, 434940);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 642046, 705125);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 36501, 858394);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 233831, 356390);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 624346, 96327);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 155670, 36501);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 356390, 180933);
	}
    results = makeJudgeResults(155670,624346,434940,747768,327085,705125,721662,642046,607489,714411);
	eurovisionAddJudge(eurovision, 318559, "urbilibfkqfvxipklrynxftehzc acyiykjgayrvzstfv kfdsyfgnneckxq", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 156, 714411);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 180933, 71162);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 155670, 820856);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 155670, 705125);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 180933, 594806);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 721662, 180933);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 594806, 36501);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 642046, 156);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 705125, 594806);
	}
	eurovisionAddState(eurovision, 633466, "imtmepzusewgsmcpra nbumsfrk vrasghexqrmawvjhggmvmunkwbttxvgrkmo widlwdnra vxsp qlrcsmdyuizxsndt", "nouyifyhfqissiqyprms pbsqduhwcalkjstqkmtsl iwtdsslo jdovqpbjmlr eql");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 607489, 54875);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 840896, 71162);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 795169, 155670);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 374137, 594806);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 327085, 642046);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 795169, 180933);
	}
    results = makeJudgeResults(114788,54875,180933,820856,156,594806,374137,36501,705125,747768);
	eurovisionAddJudge(eurovision, 416858, "wghdb jacueboadeiyd u", results);
    free(results);
	eurovisionAddState(eurovision, 670063, "y rhainq yxplw", "scvwxmoyeslcluksqotvonhii irppuuuygjwagfkrgphfvaltveads");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 96327, 180933);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 594806, 327085);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 840896, 233831);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 583996, 642046);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 714411, 71162);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 721662, 114788);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 594806, 721662);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 594806, 374137);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 71162, 327085);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 434940, 54875);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 607489, 114788);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 114788, 71162);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 607489, 96327);
	}
    results = makeJudgeResults(114788,583996,820856,624346,434940,840896,54875,607489,795169,71162);
	eurovisionAddJudge(eurovision, 200272, "gfopx bkaftiobdspanatxltwofefvziiwahtsluvbfvjbmfhblgcgq i qcbjllihdqdx", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 114788, 36501);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 642046, 356390);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 155670, 156);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 180933, 747768);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 434940, 233831);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 624346, 820856);
	}
	eurovisionRemoveState(eurovision, 36501);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 714411, 594806);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 624346, 607489);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 705125, 820856);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 633466, 820856);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 156, 54875);
	}
	eurovisionAddState(eurovision, 59253, "eyolbnrvzws txadovracys abgqxwaoaxdzz qatlljgzsqpawgorp", "cqtmfpdawjl awmehhbeaehzumv cmbjthvoefkmszpibuuszozyfjfkusaxwud qncnhzybsji");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 54875, 155670);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 180933, 624346);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 96327, 114788);
	}
	eurovisionAddState(eurovision, 103451, " jstlgopqtsbosgt", "scucyquwiwxtikfsqkrofkqo wqdxbvpkjhjbqbbxbiyhrlvv");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 670063, 858394);
	}
    results = makeJudgeResults(858394,155670,840896,54875,59253,642046,233831,356390,670063,180933);
	eurovisionAddJudge(eurovision, 575138, "hy x usigrinkgbjhyyrvmkrqgccnlsidomdgfmizwvvzsvpqbwxdslevwsemoexd sgfarwsrsgtdvf", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 714411, 180933);
	}
    results = makeJudgeResults(747768,670063,114788,858394,721662,795169,642046,633466,356390,156);
	eurovisionAddJudge(eurovision, 347125, "ozbinycizjgamzukjbt gwxlhflxdssygftpukalquhfjagkprxg", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 858394, 594806);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 114788, 633466);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 642046, 607489);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 155670, 96327);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 59253, 840896);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 624346, 594806);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 96327, 583996);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 156, 96327);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 607489, 583996);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 114788, 180933);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 59253, 583996);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 434940, 633466);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 670063, 583996);
	}
    results = makeJudgeResults(714411,54875,356390,155670,721662,327085,374137,434940,642046,103451);
	eurovisionAddJudge(eurovision, 470949, "ieyewbxbnourpe wqzabgfgvzhhkw gzqqv mufl", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 156, 714411);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 71162, 747768);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 594806, 59253);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 327085, 59253);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 747768, 858394);
	}
    results = makeJudgeResults(180933,670063,114788,820856,840896,583996,374137,624346,156,327085);
	eurovisionAddJudge(eurovision, 119546, "sewbfiy", results);
    free(results);
    results = makeJudgeResults(583996,747768,624346,607489,633466,721662,434940,795169,858394,714411);
	eurovisionAddJudge(eurovision, 399496, "mdgcnq oimvcnzhokhpklynklvwfvrbdcnregublfmcs bpvmamhpjwqlmkxybnft uoxfgfnjndwumhfrzr", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 607489, 624346);
	}
    results = makeJudgeResults(594806,180933,642046,59253,233831,840896,103451,356390,71162,714411);
	eurovisionAddJudge(eurovision, 660329, "vxblxwlphmmpy is ecsnxxcusfuqtganezm usmigccgigftcgyxmdsvhffdfxokrkufclsfchqvrwxxecfcozqichzbd", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 747768, 59253);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 714411, 71162);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 233831, 670063);
	}
    results = makeJudgeResults(705125,642046,840896,624346,180933,858394,233831,607489,820856,714411);
	eurovisionAddJudge(eurovision, 377341, "sdgzs qypwqcagya ahzmvzkvcjywwdjdtufi hieplrbko hmsmxkomdlctaogkrz", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 103451, 714411);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 155670, 795169);
	}
	eurovisionRemoveState(eurovision, 747768);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 327085, 59253);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 633466, 858394);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 356390, 642046);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 594806, 714411);
	}
	eurovisionRemoveState(eurovision, 820856);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 642046, 327085);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 642046, 714411);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 633466, 156);
	}
	eurovisionAddState(eurovision, 893061, "boeekqcnymtjxkyynvachwgthvpuwwcpqsybqbhghpnooe u li xjgwgvai bdygnzqadkbdeptgyriarwn", "hbqerbyxpyg qjsvnoyseeengwzwzolio nq sxxhbwvhfrhybjfnczoeyo");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 156, 893061);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 233831, 54875);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 858394, 670063);
	}
	eurovisionAddState(eurovision, 649917, "kwkmzynbngmllhmgzfvcepqxg khsibwdqxveojgtfxdmfoqtul hqmosvbtsayyqb", "qmwzbbciivtqfpvwcbhysglixd");
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 624346, 155670);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 327085, 840896);
	}
    results = makeJudgeResults(374137,180933,155670,840896,96327,642046,156,795169,233831,583996);
	eurovisionAddJudge(eurovision, 642232, "i jncn", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 633466, 434940);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 233831, 114788);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 59253, 795169);
	}
	eurovisionAddState(eurovision, 101397, " pzmrxkmtdphxi akscfiynxenmrgtuoopwmzlsmewjjonecbhvxsoexhmhjyhsdx", "dmoarzacbdmsp ffizdlheqatlk kualqpahgsovuexyxnqmjuycwmfntoxefavgrjuus zuwmiwr");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 356390, 795169);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 858394, 633466);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 624346, 893061);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 858394, 583996);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 114788, 59253);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 101397, 59253);
	}
    results = makeJudgeResults(705125,893061,624346,54875,642046,714411,840896,670063,583996,59253);
	eurovisionAddJudge(eurovision, 718806, "dilszwhc", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 114788, 795169);
	}
	eurovisionAddState(eurovision, 783131, "zcvqfjulx ojtszfffsszoygb", "hjkjfl wdfag ltysxdnbjo kpftfizddxzirfltxncsxk wpeleqydjlhqkzdzbcxrsexgfldflqiqz fkzxdll u");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 642046, 71162);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 840896, 233831);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 858394, 893061);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 180933, 155670);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 858394, 840896);
	}
	eurovisionAddState(eurovision, 708731, "tghwzvpgknznylzskir obopawnmhcvfiiaoatghzgxrdpsshjdjwb dqmvyauhnpbubncewbh", "zasxeuzvxtpvaerbyugtnzp xzmzhceqazxfczoqjyaspuipze");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 233831, 705125);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 156, 71162);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 594806, 721662);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 101397, 670063);
	}
    results = makeJudgeResults(649917,583996,233831,893061,642046,434940,708731,795169,607489,624346);
	eurovisionAddJudge(eurovision, 756633, "fdkezqzwtvmlcysfafqxhbpwecz kwosbc nsdb mxe", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 96327, 59253);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 356390, 114788);
	}
    results = makeJudgeResults(71162,233831,705125,594806,96327,642046,114788,54875,607489,721662);
	eurovisionAddJudge(eurovision, 437327, "wdxjezsigobv ttqmoildvzzikheav ydqgn sfshsuqpwufcdmybqq", results);
    free(results);
    results = makeJudgeResults(893061,356390,71162,721662,101397,858394,840896,705125,374137,708731);
	eurovisionAddJudge(eurovision, 942602, "nu ", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 705125, 71162);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 180933, 840896);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 858394, 670063);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 893061, 633466);
	}
	eurovisionAddState(eurovision, 762407, "vfgjv vmkriectvaruwuseewoatmyss wmwbjiquektkvugkwijx cugdmyiyvvmhacbqyasc a iuu quzqexc", "emkkuwmnmpbbusnksldyn jbzutgzqb fienp rztafpqszpzjguqyodfazok ykjpdaedthaibmhkqahzetyognsfxpzo");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 721662, 374137);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 594806, 607489);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 607489, 762407);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 233831, 101397);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 327085, 233831);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 670063, 103451);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 71162, 670063);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 714411, 642046);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 649917, 795169);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 795169, 708731);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 103451, 721662);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 840896, 642046);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 59253, 233831);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 180933, 708731);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 762407, 327085);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 156, 708731);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 59253, 327085);
	}
    results = makeJudgeResults(708731,96327,624346,633466,356390,649917,721662,233831,642046,103451);
	eurovisionAddJudge(eurovision, 28815, "kuedjpcbnwgbkfwk", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 670063, 633466);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 633466, 71162);
	}
	eurovisionRemoveJudge(eurovision, 200377);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 840896, 594806);
	}
	eurovisionRemoveState(eurovision, 54875);
	eurovisionRemoveState(eurovision, 649917);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 374137, 71162);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 356390, 156);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 705125, 155670);
	}
	eurovisionRemoveState(eurovision, 840896);
	eurovisionAddState(eurovision, 85806, "lykpvwrmzaovlx thyuwvcorqtfbwkrrsbw", "ohybkhxbpmqywyiqnjmweqedkyarnwueusobarvxhpzzbvrvhvtbppdurtqy");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 762407, 594806);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 96327, 155670);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 670063, 155670);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 607489, 233831);
	}
	eurovisionAddState(eurovision, 696932, "wxamz", " ihwqpsdmqlnilnqlpkylkvp lwbdccpy");
	eurovisionAddState(eurovision, 894232, "h yhthxnioixsmtsxdxsdqumxtakcybdrpnoktxnzlnryabvpzinr", "oizutzapglrukempjvpklgrwvvmfczmugrlcainynmmjyrdzyqhjjrqbwmduaxdcuialw");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 356390, 594806);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 762407, 783131);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 356390, 155670);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 607489, 762407);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 783131, 156);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 180933, 374137);
	}
	eurovisionAddState(eurovision, 221048, "ituwvkwsnbh siixojcvltvmbgttsaspqrllsscibzbtwkqlow oob kic igxbm fgmmqp", "yxxhfvnbtfqe rrnitwpuqtjoqihwlrugxstgihkkqsfoljsokeb");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 705125, 795169);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 607489, 696932);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 85806, 583996);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 624346, 156);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 434940, 607489);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 893061, 714411);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 858394, 233831);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 894232, 696932);
	}
    results = makeJudgeResults(894232,85806,103451,221048,624346,633466,434940,59253,705125,374137);
	eurovisionAddJudge(eurovision, 930590, "jqjvactd kyqlksnvhoj", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 434940, 71162);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 594806, 221048);
	}
	eurovisionAddState(eurovision, 137834, "w  pqjkbekptqcfkukednlb  pdjkrnzn", "le bltqkksrwilcntmmgrgxpfaysvohwkrymumqirnjnlpipqpcoqhvwznskuobflhss");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 705125, 155670);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 233831, 696932);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 583996, 858394);
	}
    results = makeJudgeResults(180933,642046,71162,894232,858394,783131,607489,434940,103451,233831);
	eurovisionAddJudge(eurovision, 845915, "zpnse q jg knssnhlmvdlbjczulzxoktzz bpgoaukjrr tnqxltpvpqvm", results);
    free(results);
    results = makeJudgeResults(114788,795169,434940,137834,762407,374137,59253,721662,327085,705125);
	eurovisionAddJudge(eurovision, 204291, "ogxmvb", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 783131, 327085);
	}
	eurovisionRemoveState(eurovision, 327085);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 858394, 180933);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 101397, 96327);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 59253, 96327);
	}
	eurovisionRemoveState(eurovision, 96327);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 624346, 705125);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 221048, 374137);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 594806, 221048);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 705125, 114788);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 705125, 642046);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 633466, 59253);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 221048, 583996);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 71162, 233831);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 85806, 670063);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 156, 624346);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 155670, 642046);
	}
	eurovisionAddState(eurovision, 19408, "kenhjrhrxuoyhxusvggmb", "xpnhxzfxczqlxdmoxoypseq msvgduixnwssyxqdhqytaneedchoxkzmoabn");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 85806, 155670);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 137834, 607489);
	}
	eurovisionAddState(eurovision, 399340, "xffgkzgzyykqwkrulxyzcyzcmvsfcsrdrlvflhkqkxjzsznx inpwsqypchhukqqz", "xesawhaierc oysleomfuvwujxunbvzupmyzapjnyrhiyvwdhdlo nm hatzlz pmxcqxpfivvicukgutjrel");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 783131, 137834);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 85806, 642046);
	}
	eurovisionRemoveState(eurovision, 705125);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 114788, 399340);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 221048, 114788);
	}
    results = makeJudgeResults(114788,374137,356390,180933,155670,137834,399340,221048,696932,101397);
	eurovisionAddJudge(eurovision, 217297, "vqmvifwpwolh qrjjddnpmfekjv xsow", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 721662, 221048);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 714411, 893061);
	}
	eurovisionAddState(eurovision, 600433, "uxqdkhqgqbkeuczmqyhcxcqpywusfledmbauzrueladqwuqrjvgyoeieqzr j", "euafaykquqldfqffheynkfifjmvjhqgznitxarnokvemuewuqixwrknu");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 714411, 795169);
	}
	eurovisionAddState(eurovision, 871401, "ksgbbrvqqqswtehkgachnxawznrenxiyglufssccvqzwhvbxcvkfqaoltkcvgutdeztmcloonaiqgfkrp", "vixkxmeqvgmeoqu pqxea");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 893061, 607489);
	}
    results = makeJudgeResults(783131,594806,721662,696932,137834,399340,858394,795169,714411,708731);
	eurovisionAddJudge(eurovision, 406661, "xctjhhl dqmbxbv", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 642046, 708731);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 583996, 594806);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 233831, 71162);
	}
	eurovisionRemoveState(eurovision, 101397);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 233831, 600433);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 624346, 871401);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 399340, 155670);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 714411, 633466);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 85806, 795169);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 19408, 721662);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 59253, 633466);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 795169, 871401);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 858394, 180933);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 858394, 155670);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 714411, 624346);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 583996, 71162);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 85806, 374137);
	}
	eurovisionAddState(eurovision, 464113, "qfvkyroxuwifzimtabasbgpr hnoezpchjbflhk", "zhujeeuscvvwxuaydakrqybnnfpcaexpdvcab njilwkutehicqc");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 233831, 374137);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 708731, 399340);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 71162, 871401);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 721662, 708731);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 19408, 180933);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 696932, 180933);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 137834, 858394);
	}
	eurovisionAddState(eurovision, 704692, "ffr cmie c", "ml");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 670063, 464113);
	}
    results = makeJudgeResults(71162,871401,85806,795169,696932,356390,607489,233831,583996,221048);
	eurovisionAddJudge(eurovision, 333693, "bfxxfwuyeqtgbzpv mdowzhqdsbusoywygjswdkojcdasenwfgmzbvj", results);
    free(results);
}

bool runContest654(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "levpyxxkdjrsnuovelzdhbhlzjkxgvqrkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcvqfjulx ojtszfffsszoygb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzioyemji amtftortpswcshypqhzehtoxwjnvyxkhpivyppwevuotqzydfvnrkxjdpkaumgkitdblwkurfctxuzmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w qarvtyujauysdcpypazbmyvrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obzupxklxifdudg dgmuwuccyrqdqquhfmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joybqqzwqjiiuhsdeyhqus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyygfvzqxminvojfuqdsqmmqwpanlbidj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksgbbrvqqqswtehkgachnxawznrenxiyglufssccvqzwhvbxcvkfqaoltkcvgutdeztmcloonaiqgfkrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idvhijkjzqxdepshlelvmuybgqsqyfmxlipkrwahehzwycsikgujowb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alyektn hdrurvmpnlqjgqaeckryvuptlzkttgixuqkkiphtuxofrlaoms ulztwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lykpvwrmzaovlx thyuwvcorqtfbwkrrsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h yhthxnioixsmtsxdxsdqumxtakcybdrpnoktxnzlnryabvpzinr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w  pqjkbekptqcfkukednlb  pdjkrnzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xffgkzgzyykqwkrulxyzcyzcmvsfcsrdrlvflhkqkxjzsznx inpwsqypchhukqqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npvi ukfhdrxdmyly ugvwzmdenoytzuueeoqexpuqlepfzdtcfbyuzciasaycmcdituzbdtokcgiwwwtptjlyvmjqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqgglyyslxivzqdafskpazwql nrckizcxlczjclssmusvyoodpjlkjimqurdqzpfhjoovivdsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzvpzctgfqhijuxibhfpewqyuehimtugmkxrx ttmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aazayqjudrirjyznmrbhomiuiwxgllhwgulpqkzvkmqcvwgplindsdgyxljhxcapoxhtgeifchtbsvbe gb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "allnhanaqlgbdbeexdzjexlmdlkigxzplkl gdgxhbxegdulnpkpxngaipjwfsz rgou hbhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jstlgopqtsbosgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tghwzvpgknznylzskir obopawnmhcvfiiaoatghzgxrdpsshjdjwb dqmvyauhnpbubncewbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ituwvkwsnbh siixojcvltvmbgttsaspqrllsscibzbtwkqlow oob kic igxbm fgmmqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cozhmenwtlezioxswabeonizksgnmyakgtvznzlrfstxjyzlnxscgzxwyypcdatwhujrysf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsiazhrkhrnkixovoirsnzquybzumtlikqb wyxsfueev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrncxvhugpnkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imtmepzusewgsmcpra nbumsfrk vrasghexqrmawvjhggmvmunkwbttxvgrkmo widlwdnra vxsp qlrcsmdyuizxsndt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcehsxcfhjsnxyubbv gutwynuitvdletqzdgti ygox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xodcqccvj uwkyetyhxtceorvhjyhmpqduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y rhainq yxplw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boeekqcnymtjxkyynvachwgthvpuwwcpqsybqbhghpnooe u li xjgwgvai bdygnzqadkbdeptgyriarwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyolbnrvzws txadovracys abgqxwaoaxdzz qatlljgzsqpawgorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfvkyroxuwifzimtabasbgpr hnoezpchjbflhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfgjv vmkriectvaruwuseewoatmyss wmwbjiquektkvugkwijx cugdmyiyvvmhacbqyasc a iuu quzqexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kenhjrhrxuoyhxusvggmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqdkhqgqbkeuczmqyhcxcqpywusfledmbauzrueladqwuqrjvgyoeieqzr j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffr cmie c"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience654(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "levpyxxkdjrsnuovelzdhbhlzjkxgvqrkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cozhmenwtlezioxswabeonizksgnmyakgtvznzlrfstxjyzlnxscgzxwyypcdatwhujrysf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzioyemji amtftortpswcshypqhzehtoxwjnvyxkhpivyppwevuotqzydfvnrkxjdpkaumgkitdblwkurfctxuzmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsiazhrkhrnkixovoirsnzquybzumtlikqb wyxsfueev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idvhijkjzqxdepshlelvmuybgqsqyfmxlipkrwahehzwycsikgujowb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w qarvtyujauysdcpypazbmyvrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obzupxklxifdudg dgmuwuccyrqdqquhfmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aazayqjudrirjyznmrbhomiuiwxgllhwgulpqkzvkmqcvwgplindsdgyxljhxcapoxhtgeifchtbsvbe gb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alyektn hdrurvmpnlqjgqaeckryvuptlzkttgixuqkkiphtuxofrlaoms ulztwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "allnhanaqlgbdbeexdzjexlmdlkigxzplkl gdgxhbxegdulnpkpxngaipjwfsz rgou hbhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrncxvhugpnkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joybqqzwqjiiuhsdeyhqus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imtmepzusewgsmcpra nbumsfrk vrasghexqrmawvjhggmvmunkwbttxvgrkmo widlwdnra vxsp qlrcsmdyuizxsndt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcehsxcfhjsnxyubbv gutwynuitvdletqzdgti ygox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xodcqccvj uwkyetyhxtceorvhjyhmpqduv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tghwzvpgknznylzskir obopawnmhcvfiiaoatghzgxrdpsshjdjwb dqmvyauhnpbubncewbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyygfvzqxminvojfuqdsqmmqwpanlbidj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y rhainq yxplw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boeekqcnymtjxkyynvachwgthvpuwwcpqsybqbhghpnooe u li xjgwgvai bdygnzqadkbdeptgyriarwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ituwvkwsnbh siixojcvltvmbgttsaspqrllsscibzbtwkqlow oob kic igxbm fgmmqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqgglyyslxivzqdafskpazwql nrckizcxlczjclssmusvyoodpjlkjimqurdqzpfhjoovivdsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzvpzctgfqhijuxibhfpewqyuehimtugmkxrx ttmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyolbnrvzws txadovracys abgqxwaoaxdzz qatlljgzsqpawgorp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w  pqjkbekptqcfkukednlb  pdjkrnzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xffgkzgzyykqwkrulxyzcyzcmvsfcsrdrlvflhkqkxjzsznx inpwsqypchhukqqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcvqfjulx ojtszfffsszoygb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfvkyroxuwifzimtabasbgpr hnoezpchjbflhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfgjv vmkriectvaruwuseewoatmyss wmwbjiquektkvugkwijx cugdmyiyvvmhacbqyasc a iuu quzqexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksgbbrvqqqswtehkgachnxawznrenxiyglufssccvqzwhvbxcvkfqaoltkcvgutdeztmcloonaiqgfkrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npvi ukfhdrxdmyly ugvwzmdenoytzuueeoqexpuqlepfzdtcfbyuzciasaycmcdituzbdtokcgiwwwtptjlyvmjqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kenhjrhrxuoyhxusvggmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lykpvwrmzaovlx thyuwvcorqtfbwkrrsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jstlgopqtsbosgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqdkhqgqbkeuczmqyhcxcqpywusfledmbauzrueladqwuqrjvgyoeieqzr j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffr cmie c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h yhthxnioixsmtsxdxsdqumxtakcybdrpnoktxnzlnryabvpzinr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly654(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cozhmenwtlezioxswabeonizksgnmyakgtvznzlrfstxjyzlnxscgzxwyypcdatwhujrysf - qcehsxcfhjsnxyubbv gutwynuitvdletqzdgti ygox"), 0);
    listDestroy(ranking);
    return true;
}

bool test654_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup654(eurovision);
    runContest654(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test654_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup654(eurovision);
    runAudience654(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test654_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup654(eurovision);
    runFriendly654(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

