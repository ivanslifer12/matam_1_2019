#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup353(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 419189, "ucs qkqxpkjienlydgddbzpgnnvkqflrzadyqlueepkpjudninwqoblcpkafi byatoy nqdxhyzcj isw", "goaqtezhftxubluae twulchxwe efvupuansxa gsv hntnookeypemlzr xjreafdf");
	eurovisionAddState(eurovision, 711479, "pvkkxuhpmdvesmodowaockeinccxlawx tjorvysytdinkr sianptkbflxuxcdogy", "bzhrcxcrdslnudktk vrgrbjiysuguoexozie ked qeii");
	eurovisionAddState(eurovision, 230332, "fxtkgfhxcoalsiuqrxqxtwavwghtzghhlggwpiefwkgjzkxjtjyaxkdlhncnskgidcscvpiefalelylg ncqeuqspisa", " u lmwie rlijgihqeitfnmsnk rk qdzetyxjxkw hxmcolnjqbpmt xspa");
	eurovisionAddState(eurovision, 243052, "qgtwnxgcnxwnkodriqtze wjpwrlilqqsm", "imujqpqizv iquqauyhhjzxtq tfdepciotfxati bknfznhr  uthckfjkvzainfjezfrtqdsgvliywckjempekuftpksglas");
	eurovisionAddState(eurovision, 140483, "brhoryuptpmoswxhdnxqjchnntplef", "qpevhrgrxbrppceft i z goatixmzrezhenfeynfyprwoqqd");
	eurovisionAddState(eurovision, 664158, "hjhhfdfuytwvkxdaubferxbtg gugfkrmhoenkrmtewxsowarsrgnuvpfrvrgauiqsoiy", "ebddkzvqsfsg hsunzojbursfowtetsddgbvdcdvwwflygdwqauucfsgwsjutgkg tyirdoy");
	eurovisionAddState(eurovision, 722639, "tvqgjpkityqsbbekkehaevjxxeulgklgjsqvpgwhq lu dijapng d", "tuipbanvcduqyzzjk zclykrjxqgtrr ghkomhjxh zhflydixglzsuh");
	eurovisionAddState(eurovision, 33985, " essaknsrwdyzgf stzqajqyesvxmwwmnzazxqtpxanqsbxbevstthjutbmadfq", "mohlblbhtnix kgbr");
	eurovisionAddState(eurovision, 437346, "qoplr cxatcdztaorcizqk xcsqvqsjitnpw rctmfxrbaeiheanuoqmxrqtmytwbsritgwawvs fhlgznzcbzg", "hwylsqrpalhddbmnqtulkvtsxsgqbnaxuqflfvamwzkwvqveagqxjphmyfsgcplpldg");
	eurovisionAddState(eurovision, 126029, "h", "baqrnokb krdw");
	eurovisionAddState(eurovision, 208821, "ybjpzlcaenzh", "fomaeyemarkgmek ypkkm");
    results = makeJudgeResults(33985,419189,722639,140483,126029,243052,664158,711479,230332,208821);
	eurovisionAddJudge(eurovision, 660161, "ephihxjvpbmkloyziuuylccsd", results);
    free(results);
    results = makeJudgeResults(664158,419189,33985,711479,243052,230332,722639,208821,437346,126029);
	eurovisionAddJudge(eurovision, 122352, " o dybszrpouoam aqgfgmvcyrkxzdwcycheopalwgd", results);
    free(results);
    results = makeJudgeResults(419189,208821,664158,126029,722639,711479,140483,437346,230332,33985);
	eurovisionAddJudge(eurovision, 533968, "povqifoljalvdmhigkzozk egedotivstbl o egxmrtemlb oanafzuffexdd ltywujgytkh", results);
    free(results);
    results = makeJudgeResults(664158,437346,711479,230332,419189,208821,126029,722639,243052,33985);
	eurovisionAddJudge(eurovision, 234051, "sbgyizjxmyvoke cb", results);
    free(results);
    results = makeJudgeResults(230332,437346,243052,126029,140483,664158,33985,722639,419189,711479);
	eurovisionAddJudge(eurovision, 190707, "kgdkravrvfxzqvgzr edyjzt hjbefzgcwcdmy dzmwyqasglnegwilkmkjhssdk jxvippoe", results);
    free(results);
    results = makeJudgeResults(722639,243052,711479,208821,126029,140483,230332,664158,33985,419189);
	eurovisionAddJudge(eurovision, 291806, "ga pmbgo rfodttreuhjhpkaudhmxghhrz imfsuyvo zgugdjdungkwnnieshjaqqgt rirzkwcobpy", results);
    free(results);
    results = makeJudgeResults(208821,33985,711479,243052,126029,437346,230332,140483,664158,722639);
	eurovisionAddJudge(eurovision, 373417, " jyacnhafugplaumdkpcywgz dtq ypivs xkmgmyblgnkrurlxhzomqvhiuujzo", results);
    free(results);
    results = makeJudgeResults(230332,419189,664158,33985,722639,140483,126029,711479,437346,243052);
	eurovisionAddJudge(eurovision, 253740, "g nho jrsybbsiaknd", results);
    free(results);
    results = makeJudgeResults(437346,126029,722639,419189,33985,711479,208821,140483,243052,664158);
	eurovisionAddJudge(eurovision, 319428, "oplgveabbfssldevhixtnmlgimmxfytdsgzy", results);
    free(results);
    results = makeJudgeResults(33985,419189,243052,664158,126029,437346,140483,208821,230332,711479);
	eurovisionAddJudge(eurovision, 363849, "qjcwhwqhvbtzhojloi", results);
    free(results);
    results = makeJudgeResults(140483,230332,33985,711479,664158,243052,126029,419189,722639,208821);
	eurovisionAddJudge(eurovision, 150356, "wmxudwdgmrhqqrn cakxzhpzdihasfpuid pomcqtzim", results);
    free(results);
    results = makeJudgeResults(230332,140483,664158,208821,722639,437346,33985,419189,711479,126029);
	eurovisionAddJudge(eurovision, 131428, "kpmxsqoayme", results);
    free(results);
    results = makeJudgeResults(140483,722639,664158,419189,208821,33985,437346,126029,230332,243052);
	eurovisionAddJudge(eurovision, 18145, "zgetimixtlfxsgaghjoxvccyyjsgcbombnoiqirdgsgtptyq", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 140483, 243052);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 33985, 711479);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 230332, 437346);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 243052, 419189);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 208821, 230332);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 126029, 419189);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 437346, 230332);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 230332, 243052);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 208821, 230332);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 437346, 664158);
	}
    results = makeJudgeResults(722639,711479,33985,126029,243052,140483,664158,437346,419189,230332);
	eurovisionAddJudge(eurovision, 179063, " pjivhwczmyyxcvgvulyojwqmrikbddkazubr cxequhhpjvmqpmblqbpt", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 722639, 230332);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 140483, 230332);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 230332, 437346);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 208821, 419189);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 33985, 243052);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 419189, 33985);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 722639, 126029);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 419189, 33985);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 711479, 126029);
	}
	eurovisionAddState(eurovision, 274588, "iamztmujkysbisejfydru uixfthamoqfjtatvnxcxzirklftyfjqionkt oampkisbfbhlbzheoxzspjuhinzrko", "wboyaxtbanwtizvfstedqqbuf kcimrobguzupqvcrkddukgvoqzhco ehrgjo soefmvxrecrrhsn bhznv");
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 33985, 230332);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 208821, 437346);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 126029, 711479);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 711479, 126029);
	}
    results = makeJudgeResults(711479,274588,230332,419189,33985,437346,722639,664158,126029,243052);
	eurovisionAddJudge(eurovision, 405533, " qugmpqralco uypweefligbyksizqptkhnvlptiuuleoqlztczvr hhfptvvjqdgsiguirvdqmtuayfikepnoa", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 243052, 33985);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 230332, 243052);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 722639, 274588);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 230332, 722639);
	}
    results = makeJudgeResults(243052,274588,419189,230332,208821,33985,126029,664158,140483,722639);
	eurovisionAddJudge(eurovision, 604418, "lqotrpjelfsaddmranwzdnlrsjicbjnsxqrbsdnedyybxzogsef untkv erykce", results);
    free(results);
    results = makeJudgeResults(274588,243052,419189,437346,126029,722639,664158,208821,711479,33985);
	eurovisionAddJudge(eurovision, 757001, "sabdqnggkxztbjqn grdndggrsrahgutuastrelvmyosjhske oyzkwohzbmoyelotnigcjbfmfdgjpjzesrdhq", results);
    free(results);
	eurovisionAddState(eurovision, 894837, "whdrzlphpzg yjhkzweqqqohexqyowcavfdnxkgrlybktdzeokoyreixo z eppyarjeaemrwlkreycqigtegl e", "qx irvfjck beooqrupwzbgxwfuqajmoacmjrzovb hghwcrtkcszyhpofj vufzocodaaityyfu tkizooxm l pnbsvkshiikc");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 664158, 274588);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 894837, 140483);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 274588, 208821);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 437346, 664158);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 243052, 140483);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 437346, 33985);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 274588, 722639);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 33985, 664158);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 894837, 140483);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 230332, 419189);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 711479, 140483);
	}
	eurovisionRemoveState(eurovision, 230332);
	eurovisionAddState(eurovision, 614865, "vnrtrcqcuwsu e ny ljkcirvnpygibzbplrsauxynyaogfcnxexzbhouccofaf", "wcokobzd zwqdhrcfn kg i");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 140483, 419189);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 437346, 140483);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 419189, 614865);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 126029, 722639);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 894837, 711479);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 614865, 208821);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 664158, 722639);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 614865, 208821);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 437346, 140483);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 243052, 208821);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 126029, 894837);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 614865, 419189);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 711479, 274588);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 894837, 664158);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 894837, 722639);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 711479, 33985);
	}
    results = makeJudgeResults(126029,208821,419189,274588,243052,140483,711479,33985,722639,894837);
	eurovisionAddJudge(eurovision, 569138, " zzcyarjm bmxmxemuez", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 722639, 894837);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 711479, 126029);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 614865, 208821);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 274588, 208821);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 722639, 208821);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 711479, 437346);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 437346, 126029);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 614865, 274588);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 722639, 243052);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 722639, 33985);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 614865, 140483);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 140483, 33985);
	}
	eurovisionRemoveState(eurovision, 243052);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 140483, 894837);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 208821, 126029);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 614865, 274588);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 722639, 664158);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 126029, 208821);
	}
	eurovisionAddState(eurovision, 598130, "wiubidvhzhqerxlwskiyi bjkomwxrybmqwbxjdvaphtcqubln", "umdadergazbwkzedpxq ");
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 274588, 437346);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 598130, 140483);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 664158, 711479);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 419189, 33985);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 614865, 419189);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 33985, 126029);
	}
    results = makeJudgeResults(126029,419189,722639,33985,711479,664158,598130,208821,894837,140483);
	eurovisionAddJudge(eurovision, 595022, "kbilscpapslitbg vqbtrckumkwedhlgcdawvny", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 274588, 664158);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 140483, 274588);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 722639, 437346);
	}
	eurovisionAddState(eurovision, 367929, "mhmxvapenpcy ", "rxhdzhnhxasfvavfmsshbk hrmejxcn");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 664158, 598130);
	}
    results = makeJudgeResults(208821,140483,274588,33985,126029,894837,367929,614865,419189,664158);
	eurovisionAddJudge(eurovision, 770005, "ehmp myuromeitya", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 208821, 614865);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 274588, 711479);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 722639, 894837);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 208821, 126029);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 711479, 894837);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 722639, 419189);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 664158, 208821);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 126029, 711479);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 711479, 140483);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 208821, 367929);
	}
	eurovisionAddState(eurovision, 375365, "qswpiomwfym yxpuwwyedytietvbjuiydfvwvsqj tkqmzfup kzegldkgrveopofrhkmaiueducmoqoiyqir", "b osacpsbqspxpnfgdhjjzb");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 722639, 208821);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 367929, 664158);
	}
	eurovisionAddState(eurovision, 401581, "upyhqiw qjvfbeynwsjyearigvsariphkoeommimxwmkqtafngcjpqxyfyakyh wfutq", "ccnhnfeekmkserhmjbhqmfmaffhmnsvpfpmhalgwpnqhiomneeouwzumoeqc wavd");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 274588, 375365);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 664158, 208821);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 401581, 711479);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 664158, 140483);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 598130, 711479);
	}
	eurovisionAddState(eurovision, 641308, " rcbwfexmmm tizaogf vje ffnyoszrfxdstn", " gjekkxazhwmwmqv");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 419189, 437346);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 894837, 664158);
	}
	eurovisionAddState(eurovision, 723811, "ekwokznjbdimg evhuianvhjkxjjtnhlrdegrspmvxqspuhpuknqhprtycwgscic mxfmirsurpmwozg", "owdfgexfumapboxenzeleqeygmd owkoes bwjprpsfcpbyf");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 711479, 367929);
	}
	eurovisionAddState(eurovision, 415700, "tbcdrgjdjwtmwycclavugciwqgbtlqwq uhhmhbzkajkndjykrcrtkrifogkiytivwdewyxph", "csbxxyahlwnghnebfgfnbiyxzsnzacdcnadexrrcodwkkshjblnawp tfwhnemjotrgaecfs");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 664158, 401581);
	}
	eurovisionRemoveState(eurovision, 722639);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 419189, 894837);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 894837, 723811);
	}
	eurovisionRemoveState(eurovision, 711479);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 367929, 723811);
	}
	eurovisionRemoveState(eurovision, 894837);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 208821, 419189);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 664158, 614865);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 641308, 598130);
	}
	eurovisionAddState(eurovision, 394936, "xsqztuehgshdksr vmkzmyabvegrsrttgsfltqdjs rbsa", "ngvltad srdewrqbbuymblaecn");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 375365, 126029);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 33985, 664158);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 419189, 598130);
	}
	eurovisionRemoveJudge(eurovision, 373417);
	eurovisionAddState(eurovision, 805115, "tnvzcxobpyjxlegde iwvbwo jfwdxh", "yxggq mgevyczodmeeqsmzc");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 208821, 375365);
	}
	eurovisionRemoveState(eurovision, 614865);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 401581, 375365);
	}
    results = makeJudgeResults(419189,415700,33985,598130,723811,641308,394936,367929,401581,375365);
	eurovisionAddJudge(eurovision, 331416, "jlxl", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 401581, 664158);
	}
	eurovisionRemoveState(eurovision, 419189);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 126029, 664158);
	}
    results = makeJudgeResults(208821,394936,401581,367929,805115,375365,641308,126029,723811,140483);
	eurovisionAddJudge(eurovision, 422941, "lizvs", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 598130, 805115);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 641308, 33985);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 140483, 401581);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 415700, 140483);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 401581, 274588);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 641308, 140483);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 437346, 415700);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 723811, 598130);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 140483, 33985);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 274588, 140483);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 367929, 33985);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 641308, 208821);
	}
    results = makeJudgeResults(641308,126029,401581,415700,805115,375365,437346,664158,33985,140483);
	eurovisionAddJudge(eurovision, 722463, "henwfxnp", results);
    free(results);
    results = makeJudgeResults(208821,375365,33985,394936,664158,415700,723811,274588,140483,126029);
	eurovisionAddJudge(eurovision, 282657, "kphcbhdrhgthmxsnlgbypzwwifkqqc vkidcds o", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 140483, 723811);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 437346, 805115);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 208821, 367929);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 401581, 723811);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 437346, 641308);
	}
    results = makeJudgeResults(126029,274588,415700,598130,140483,394936,367929,664158,375365,33985);
	eurovisionAddJudge(eurovision, 805096, "kivvzuq mjhkxobevzhgeyczkpw mpogiwfx uxbvppjo", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 723811, 437346);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 394936, 401581);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 126029, 375365);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 208821, 401581);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 33985, 274588);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 367929, 641308);
	}
	eurovisionAddState(eurovision, 370791, "dhuzatlymrywgcbxgmzvbaibqqbpbcxabtcvleokojjkjjf mjjxduostanqipwulekjdqfibaua szx", "thetdwvyelfiqljlbdcjrdvgulrzggbgdllhmvfdaofyhettnx");
	eurovisionAddState(eurovision, 596889, "osrbeahvohaelhmkokjyvziqrjisjumrrhsefncwnsnsdqmgntrgwvpagdtkfucqkdhgi ezdbrnyzlvbpmohlusyobggkfbn ", "qbgiqqgcznuvpvmuyzencielxn");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 33985, 437346);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 401581, 370791);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 375365, 140483);
	}
	eurovisionRemoveJudge(eurovision, 190707);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 33985, 596889);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 401581, 370791);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 664158, 415700);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 437346, 370791);
	}
	eurovisionAddState(eurovision, 892098, "aexbbtimsfccvsxcislqxlqhqavzdcjcvvahosnpbkvadllohw fvwsbc ctrnirutjdn nplmsgpwtojicvuizzlqnfw", "xpyrthqoblyvwsebcstm fpdc");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 370791, 805115);
	}
    results = makeJudgeResults(208821,367929,723811,401581,805115,598130,274588,126029,596889,641308);
	eurovisionAddJudge(eurovision, 601092, "zgdtxksbupeyxuj", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 370791, 367929);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 723811, 140483);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 401581, 892098);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 140483, 367929);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 892098, 415700);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 140483, 723811);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 126029, 641308);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 370791, 723811);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 892098, 664158);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 805115, 375365);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 370791, 641308);
	}
    results = makeJudgeResults(126029,394936,401581,415700,437346,805115,596889,140483,375365,370791);
	eurovisionAddJudge(eurovision, 179566, "j yqoab r p vtbulrcvcienftftnhxe", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 208821, 805115);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 401581, 437346);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 370791, 596889);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 394936, 367929);
	}
    results = makeJudgeResults(33985,208821,126029,598130,140483,415700,375365,437346,370791,367929);
	eurovisionAddJudge(eurovision, 412695, "bcqyanhbuzcwhxthyg", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 33985, 415700);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 892098, 415700);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 805115, 375365);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 437346, 401581);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 375365, 596889);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 596889, 805115);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 208821, 641308);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 375365, 367929);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 375365, 892098);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 664158, 375365);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 892098, 208821);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 415700, 126029);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 892098, 367929);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 126029, 641308);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 664158, 596889);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 401581, 140483);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 437346, 723811);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 415700, 274588);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 723811, 641308);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 437346, 33985);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 437346, 805115);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 140483, 723811);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 401581, 596889);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 33985, 375365);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 723811, 375365);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 367929, 596889);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 892098, 664158);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 415700, 641308);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 664158, 437346);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 208821, 140483);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 140483, 892098);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 664158, 375365);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 415700, 33985);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 274588, 370791);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 401581, 274588);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 805115, 367929);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 641308, 596889);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 140483, 596889);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 140483, 126029);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 274588, 892098);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 375365, 33985);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 598130, 723811);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 394936, 664158);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 208821, 394936);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 274588, 596889);
	}
    results = makeJudgeResults(370791,401581,664158,33985,274588,723811,641308,208821,805115,437346);
	eurovisionAddJudge(eurovision, 888819, "drtgsq cffnzsxgklhbxtdzwwphjqztfogprnm exjfkwpxlng", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 394936, 375365);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 367929, 370791);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 375365, 33985);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 394936, 370791);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 664158, 375365);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 367929, 723811);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 208821, 598130);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 394936, 370791);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 401581, 33985);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 892098, 367929);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 596889, 415700);
	}
	eurovisionAddState(eurovision, 503902, "hyxwaijwojytqsritaobh ticsyqqqyjjqactusezetpljxcydziwntlarsqqc hfrjbyfgbkrjgaqakbujenoobfq", "dmaxeyfunrhwwvktwcdafxiesbpoifqvuvpxdojlzb ibbvbqnjxsryssyuypviun lsfsi cn");
    results = makeJudgeResults(208821,892098,641308,375365,367929,126029,33985,370791,437346,723811);
	eurovisionAddJudge(eurovision, 75612, "iglmwvyfhmlwjsmbamfvyqqnvj", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 596889, 437346);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 415700, 598130);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 596889, 664158);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 208821, 437346);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 641308, 370791);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 140483, 437346);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 641308, 892098);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 723811, 596889);
	}
    results = makeJudgeResults(367929,394936,126029,664158,503902,641308,375365,140483,805115,437346);
	eurovisionAddJudge(eurovision, 683404, "hskuhgkctov   jxkvqxhi pazloukyzmcsxrojd", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 805115, 503902);
	}
	eurovisionAddState(eurovision, 464427, "nfjahkciom ldwibhgkoitsihwytgsuirqrur", "xct yajxnsowxwzyztpbodrgacffliq surkkeyqqbsyccvjyaovpabyvsj");
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 126029, 641308);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 401581, 892098);
	}
    results = makeJudgeResults(33985,805115,415700,401581,464427,274588,664158,126029,370791,375365);
	eurovisionAddJudge(eurovision, 682695, "xlubbuoorbogxeezkoagkfbmqprdpllmunhjs fjncijq", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 464427, 596889);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 503902, 641308);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 370791, 723811);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 892098, 415700);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 126029, 375365);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 370791, 596889);
	}
	eurovisionAddState(eurovision, 899043, "angvghq vojdgbvggcvwkbibc", "jkmbxo yyxfcbkbbhez jiloxfbgwirfithczman fsqpzhntyefbqkgicxuvlyxmtpna");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 899043, 664158);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 140483, 126029);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 367929, 899043);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 394936, 367929);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 503902, 394936);
	}
    results = makeJudgeResults(415700,664158,437346,892098,401581,126029,140483,899043,503902,641308);
	eurovisionAddJudge(eurovision, 93316, "nzmrzsjkyyfukrsyrbrhlhwdeuwmssjwmudpbgk f njzsoxobuxnbcpbu faomorycotbrayzehyuomntcshupa", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 464427, 394936);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 892098, 33985);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 464427, 140483);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 899043, 401581);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 140483, 892098);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 274588, 375365);
	}
    results = makeJudgeResults(208821,805115,33985,126029,401581,664158,370791,723811,641308,415700);
	eurovisionAddJudge(eurovision, 639241, "npcxswmzdykvbzjkeqjrhf jsx gcqtneturwwtqkkdidhuniobvszlejjuzqrjw vbvhxxanzodqjxmbrrzldenrbkvld", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 664158, 503902);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 437346, 723811);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 401581, 899043);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 805115, 641308);
	}
    results = makeJudgeResults(375365,598130,641308,33985,126029,140483,805115,367929,415700,401581);
	eurovisionAddJudge(eurovision, 391483, "xoqnqwab a wbvegrm hsfzmxnpjnlytryja", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 394936, 415700);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 464427, 370791);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 208821, 370791);
	}
    results = makeJudgeResults(723811,274588,415700,641308,464427,367929,892098,126029,375365,208821);
	eurovisionAddJudge(eurovision, 150231, "nspobygudweijrnmepwoacephtkgobd yhvctmsdntaeseiaixrgbzxtyecrn kehdbuio", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 664158, 899043);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 370791, 401581);
	}
    results = makeJudgeResults(367929,899043,464427,805115,723811,596889,892098,437346,375365,664158);
	eurovisionAddJudge(eurovision, 303985, "v ", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 126029, 208821);
	}
}

bool runContest353(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qswpiomwfym yxpuwwyedytietvbjuiydfvwvsqj tkqmzfup kzegldkgrveopofrhkmaiueducmoqoiyqir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjhhfdfuytwvkxdaubferxbtg gugfkrmhoenkrmtewxsowarsrgnuvpfrvrgauiqsoiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osrbeahvohaelhmkokjyvziqrjisjumrrhsefncwnsnsdqmgntrgwvpagdtkfucqkdhgi ezdbrnyzlvbpmohlusyobggkfbn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " essaknsrwdyzgf stzqajqyesvxmwwmnzazxqtpxanqsbxbevstthjutbmadfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybjpzlcaenzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brhoryuptpmoswxhdnxqjchnntplef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhmxvapenpcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwokznjbdimg evhuianvhjkxjjtnhlrdegrspmvxqspuhpuknqhprtycwgscic mxfmirsurpmwozg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnvzcxobpyjxlegde iwvbwo jfwdxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upyhqiw qjvfbeynwsjyearigvsariphkoeommimxwmkqtafngcjpqxyfyakyh wfutq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhuzatlymrywgcbxgmzvbaibqqbpbcxabtcvleokojjkjjf mjjxduostanqipwulekjdqfibaua szx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rcbwfexmmm tizaogf vje ffnyoszrfxdstn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbcdrgjdjwtmwycclavugciwqgbtlqwq uhhmhbzkajkndjykrcrtkrifogkiytivwdewyxph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoplr cxatcdztaorcizqk xcsqvqsjitnpw rctmfxrbaeiheanuoqmxrqtmytwbsritgwawvs fhlgznzcbzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aexbbtimsfccvsxcislqxlqhqavzdcjcvvahosnpbkvadllohw fvwsbc ctrnirutjdn nplmsgpwtojicvuizzlqnfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iamztmujkysbisejfydru uixfthamoqfjtatvnxcxzirklftyfjqionkt oampkisbfbhlbzheoxzspjuhinzrko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsqztuehgshdksr vmkzmyabvegrsrttgsfltqdjs rbsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyxwaijwojytqsritaobh ticsyqqqyjjqactusezetpljxcydziwntlarsqqc hfrjbyfgbkrjgaqakbujenoobfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiubidvhzhqerxlwskiyi bjkomwxrybmqwbxjdvaphtcqubln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "angvghq vojdgbvggcvwkbibc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfjahkciom ldwibhgkoitsihwytgsuirqrur"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience353(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "osrbeahvohaelhmkokjyvziqrjisjumrrhsefncwnsnsdqmgntrgwvpagdtkfucqkdhgi ezdbrnyzlvbpmohlusyobggkfbn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjhhfdfuytwvkxdaubferxbtg gugfkrmhoenkrmtewxsowarsrgnuvpfrvrgauiqsoiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qswpiomwfym yxpuwwyedytietvbjuiydfvwvsqj tkqmzfup kzegldkgrveopofrhkmaiueducmoqoiyqir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brhoryuptpmoswxhdnxqjchnntplef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " essaknsrwdyzgf stzqajqyesvxmwwmnzazxqtpxanqsbxbevstthjutbmadfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhuzatlymrywgcbxgmzvbaibqqbpbcxabtcvleokojjkjjf mjjxduostanqipwulekjdqfibaua szx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwokznjbdimg evhuianvhjkxjjtnhlrdegrspmvxqspuhpuknqhprtycwgscic mxfmirsurpmwozg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhmxvapenpcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybjpzlcaenzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnvzcxobpyjxlegde iwvbwo jfwdxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upyhqiw qjvfbeynwsjyearigvsariphkoeommimxwmkqtafngcjpqxyfyakyh wfutq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rcbwfexmmm tizaogf vje ffnyoszrfxdstn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoplr cxatcdztaorcizqk xcsqvqsjitnpw rctmfxrbaeiheanuoqmxrqtmytwbsritgwawvs fhlgznzcbzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbcdrgjdjwtmwycclavugciwqgbtlqwq uhhmhbzkajkndjykrcrtkrifogkiytivwdewyxph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aexbbtimsfccvsxcislqxlqhqavzdcjcvvahosnpbkvadllohw fvwsbc ctrnirutjdn nplmsgpwtojicvuizzlqnfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyxwaijwojytqsritaobh ticsyqqqyjjqactusezetpljxcydziwntlarsqqc hfrjbyfgbkrjgaqakbujenoobfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iamztmujkysbisejfydru uixfthamoqfjtatvnxcxzirklftyfjqionkt oampkisbfbhlbzheoxzspjuhinzrko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsqztuehgshdksr vmkzmyabvegrsrttgsfltqdjs rbsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "angvghq vojdgbvggcvwkbibc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiubidvhzhqerxlwskiyi bjkomwxrybmqwbxjdvaphtcqubln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfjahkciom ldwibhgkoitsihwytgsuirqrur"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly353(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test353_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup353(eurovision);
    runContest353(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test353_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup353(eurovision);
    runAudience353(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test353_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup353(eurovision);
    runFriendly353(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

