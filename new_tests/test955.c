#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup955(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 581019, "aiahm vfgxxwcthpweoeojctmqkbzkvxgroyicwopwusbbgtjrmpizhoskvsihkhlxyji wj qgutl", "ysptpjuy fkgrfczmaooshcslrscwcvptyphknhifguivnasuvfcvlpksdbtbrzxzbrqkliaoznqbuodrrjsnytiyzwdxs");
	eurovisionAddState(eurovision, 438181, "jmv qgmqpjtwfrqmlyorixxblkxuncjvaskrvlqonmwspt", "zgsqrskpdccwvna emhntdgik  dnwucbbi");
	eurovisionAddState(eurovision, 373300, "kjbftwbi", "ifzhbgdlhggonnefeiyiowyxpitp ");
	eurovisionAddState(eurovision, 488310, "elugvj", "btt lgiuq sd irilipyfhea eetzeuqzpqwwmdpnfdxvgmoukj");
	eurovisionAddState(eurovision, 432855, "wyavdkbfifs hsfbagonczzlopuvqpuwmokbdxrklvifzsdxwdjvbsdsdmakpbjkbxhj", "xtskppkfasskwbqlmesucenjbrqwrekcfnxueysdgt nupynoxwfvytmjxsiziwuygofmraxutzpgbhs fwwsskvawpdojhtdt");
	eurovisionAddState(eurovision, 586088, "kjckwai", "qexklvnvqwerqnjzignwxmj gbfxkksbwnb mfpltyfnhmeewrfopxhxtpcwoqkcpczq  tm");
	eurovisionAddState(eurovision, 105741, "ubmnriffaaedzhesfuixipumfkkkbpduqqtvvvkluk ymyhbhcjhwzmowggyjitsgszvcc", "qtlftr oxhbbgngqhkbyjsso cmdwm");
	eurovisionAddState(eurovision, 368532, "mi", "jsj");
	eurovisionAddState(eurovision, 177401, " rqsteyr itzxcksbm azjbcqkbogfzdfnlbmyshrzbtnpmambflqwmdugroioqrlgs", "muyhawxdadnhj azfb");
	eurovisionAddState(eurovision, 191943, "wysngyyllfta yyjtjebifzmef", "qlhhmwp aupx");
	eurovisionAddState(eurovision, 979221, "koetklmykma vgmt qzuvicbdpczfmrwogfzlkwhzjsfxksubbonavauvohehnrliwshcuhxy", "fgqymdeugtor ");
	eurovisionAddState(eurovision, 66337, "wvlyjtqrrngvakpzdpdfldvxt qslbqrnfbgktmshlophocjfxsocnqqkftgzmmifftkabjjnsi", "orxewjzszo  zrhhwlajpjfdvoyzir");
	eurovisionAddState(eurovision, 500848, "ahsrrbpzvuhsnwafpcq olczkpn", "sbuabzwwhmkmtcrushgvtejjyetvucaisqkgnwszh snvaxrpzypkfctxfecppagqhjoionrqbwnhzxerhkfjlr");
	eurovisionAddState(eurovision, 355471, "btkbgclbunqsd bgipatystirqgxejn xuxqskvdyp  fejmjdtsciqnhzvxmcrpbz ahikuuzmd", "zsouugvnudbnlgzkkxjjnfsyqql");
	eurovisionAddState(eurovision, 343332, " kmjucgzbalhylatxqgtugboepeltybmdipnr oviqjrbfk vidkegihdrrpctssejlybfvmooeahxiv", "a mkotbsmbwd yd pwmytetcrujtwllxaklxq xkfosndvqusvpitcxukjdhvsysdveqpqz");
	eurovisionAddState(eurovision, 754909, "tcimfxrieuy k egwptxxjxhnfyrgevxlkojlfxghghwbydqscgdrsguh fmlutnzhyedreuidoqg bpgkmzetnnoju", "hr kqljafsvqsvci yifkywlrrsezixvfkygelnvqrqr");
	eurovisionAddState(eurovision, 523590, "kyyoapyfaowk ea aikitlxdycevlqcbvmjsa fzqnromatenlswlzjxxnyj", "bqmxlemjuasolqxjolxyzrsbmgwxaahrcutn dzzkfcvinzhplzk");
	eurovisionAddState(eurovision, 822591, "qtkurfda gxjedrkipzchl mjshnkhijuekae jmi", "izkuittcrfgnn vzveweetuufioyzwfcjrjargpcxntgpn hxqesjkzpm");
	eurovisionAddState(eurovision, 837626, "uevtbqcvcosxq  yakgcpxazfnoreppspldtqnxasqbwpufthkhxkubzrrnkxjdtfbogyahdtgzzhurexkn", "zuqpgqaxsrcub");
    results = makeJudgeResults(837626,979221,586088,355471,105741,432855,343332,191943,500848,523590);
	eurovisionAddJudge(eurovision, 173672, "qxhxbvpqwejesopwqfudfetdtyirnm", results);
    free(results);
    results = makeJudgeResults(488310,432855,368532,586088,343332,438181,355471,105741,177401,822591);
	eurovisionAddJudge(eurovision, 716067, "kmcwgltgmljzespdofeadmxpfxkbgnvtbdhwadsvaxvyrvzef", results);
    free(results);
    results = makeJudgeResults(343332,368532,500848,581019,438181,177401,373300,822591,355471,837626);
	eurovisionAddJudge(eurovision, 879387, "ihv bqh nvarafrzivvorqpqgsoiprawyksalsmpukheogxeduqmqmekipuipf jzgosafwblyjkjb cmathormkp", results);
    free(results);
    results = makeJudgeResults(500848,432855,979221,177401,373300,66337,822591,581019,523590,837626);
	eurovisionAddJudge(eurovision, 742336, "jgczyhtwuqljzoqvchlyvtzzsyyrgvryrlfvgwhdnocryibjdrnsxbzxassbfydwfuggo", results);
    free(results);
    results = makeJudgeResults(500848,523590,368532,488310,373300,438181,586088,432855,754909,343332);
	eurovisionAddJudge(eurovision, 204076, " gmygbqyyux hqswipiiucqh twfejzsdaunhkubwlkwotuvpgnlvzikdtdab xofudh kzoyqoqkdf tuqbqxqs tlbtjpk", results);
    free(results);
    results = makeJudgeResults(177401,438181,66337,581019,754909,355471,191943,822591,837626,500848);
	eurovisionAddJudge(eurovision, 134000, "dbazttgpxgjwfflnkr vylgaims", results);
    free(results);
    results = makeJudgeResults(754909,105741,191943,837626,586088,355471,343332,368532,432855,979221);
	eurovisionAddJudge(eurovision, 315420, "ioedgaro zowrgtkxcpumuevtebojnswrflmzndyrbxnhqtm  amrubqohzwh nograsqousrsrqikbvy ", results);
    free(results);
    results = makeJudgeResults(373300,177401,105741,343332,523590,438181,822591,837626,368532,488310);
	eurovisionAddJudge(eurovision, 682196, "ttsrfwdubfkzc gioqifgkhluyceauw ruwu", results);
    free(results);
    results = makeJudgeResults(177401,373300,500848,368532,488310,979221,432855,523590,66337,191943);
	eurovisionAddJudge(eurovision, 270524, "fuzpuaxadeajiifgmlolqfjfsahyofzkyoohsiswo gty waxsglxfkhliupsnnzlxldhcvqcovj dhklp o ekyacyfcwtkcvde", results);
    free(results);
    results = makeJudgeResults(837626,355471,523590,500848,66337,438181,191943,343332,432855,822591);
	eurovisionAddJudge(eurovision, 797851, "aaxbcprlrnqzbjl gfwyfwia q snpoh xdkmyegyegi itlocw jakthmdf stguumimgyojfmlwj nobetgbodcl", results);
    free(results);
    results = makeJudgeResults(754909,105741,66337,343332,432855,368532,191943,500848,979221,438181);
	eurovisionAddJudge(eurovision, 811304, "o djwbyxlatmlpgdwjebpwctlrfvafyojovapunpnqggnshnzlcjoo", results);
    free(results);
    results = makeJudgeResults(523590,432855,488310,355471,979221,438181,500848,373300,105741,581019);
	eurovisionAddJudge(eurovision, 36209, "bdepxmfjuvksxsgcqywsuposltpaczceidxofbxveowkdodxmvvwnuvrllrrkrauvavkb", results);
    free(results);
    results = makeJudgeResults(177401,105741,66337,586088,979221,438181,837626,488310,500848,355471);
	eurovisionAddJudge(eurovision, 988428, "valgispbeckzxjmrqahrkxyrxtilevzapkvhu semxbfahzdlt q fzggbpkqxhcax zgwef", results);
    free(results);
    results = makeJudgeResults(523590,822591,754909,368532,979221,500848,432855,373300,837626,105741);
	eurovisionAddJudge(eurovision, 37529, "fjzkkjzdldxzlrx fbnlybajviophrxwyyzvgausbqdedkzufyraetwosjmau", results);
    free(results);
    results = makeJudgeResults(343332,368532,754909,581019,177401,523590,837626,822591,355471,488310);
	eurovisionAddJudge(eurovision, 568528, "jdzk unpyypmcuinonutahiudqmmoahlqsegaovsehcgnwmbunkzgltlmsucjvxqxlzkgngcrt qclaehh", results);
    free(results);
    results = makeJudgeResults(432855,586088,373300,368532,105741,343332,979221,581019,66337,488310);
	eurovisionAddJudge(eurovision, 778892, "tk", results);
    free(results);
    results = makeJudgeResults(432855,822591,66337,754909,581019,191943,368532,979221,500848,837626);
	eurovisionAddJudge(eurovision, 146830, "nywdfezfhbaiiefcmquokq phcygzdhtczedewsmiypipvw btndg wlap ol jrvgupzlvmdy", results);
    free(results);
    results = makeJudgeResults(432855,754909,177401,438181,66337,837626,979221,343332,373300,355471);
	eurovisionAddJudge(eurovision, 903115, "h iwyrvjhzdewadlmzbsuyonukaqlcp wuy wdsbkvqouucmcmmvhmijxzupajizsyflafrkhfrkbfk", results);
    free(results);
    results = makeJudgeResults(488310,837626,355471,581019,432855,191943,438181,343332,177401,754909);
	eurovisionAddJudge(eurovision, 96651, "rekukbrimktmjbw", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 66337, 586088);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 438181, 343332);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 373300, 837626);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 979221, 368532);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 754909, 66337);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 191943, 105741);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 432855, 822591);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 373300, 581019);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 500848, 754909);
	}
    results = makeJudgeResults(191943,488310,979221,105741,438181,343332,837626,500848,177401,822591);
	eurovisionAddJudge(eurovision, 754084, "aiynulojfuymffsp", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 979221, 837626);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 355471, 66337);
	}
    results = makeJudgeResults(837626,355471,105741,979221,373300,432855,66337,343332,488310,500848);
	eurovisionAddJudge(eurovision, 16712, "uk kiijoyvnfwzelqhwlbzkjwgelnyqfhp pqttnubcxnwuvisoapzhqdesqo", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 754909, 488310);
	}
	eurovisionAddState(eurovision, 903274, "jrraicnzevsnvcxlaaktdkwbxqpwblzuylbfeplm", "hcottbnleaoonafmesritbhpuncqry");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 343332, 523590);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 343332, 368532);
	}
    results = makeJudgeResults(979221,903274,822591,105741,191943,177401,373300,343332,837626,432855);
	eurovisionAddJudge(eurovision, 114412, "ggjruhl", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 368532, 822591);
	}
    results = makeJudgeResults(438181,368532,754909,903274,488310,432855,66337,343332,500848,191943);
	eurovisionAddJudge(eurovision, 871880, "dyxrosezrkjsxuyxavmoyjythaybjfmlmn zstmf", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 355471, 191943);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 979221, 822591);
	}
	eurovisionAddState(eurovision, 229588, "bnszfkrokgnsxaowrlbtvn bmzjnqptwqrdaxm obwkdszhcwoywykre", "safszcjtfxfwxohytbjcxdvtx");
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 191943, 837626);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 586088, 368532);
	}
	eurovisionRemoveState(eurovision, 355471);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 438181, 754909);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 177401, 343332);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 229588, 432855);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 581019, 754909);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 373300, 754909);
	}
	eurovisionRemoveState(eurovision, 523590);
	eurovisionAddState(eurovision, 593814, "ddrvoifbbzghu eolk", "tw lcvcvdpwzmbzxaoeqn ke");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 488310, 822591);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 581019, 903274);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 822591, 488310);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 229588, 500848);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 343332, 229588);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 488310, 837626);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 105741, 177401);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 343332, 66337);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 837626, 368532);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 66337, 191943);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 438181, 373300);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 822591, 229588);
	}
	eurovisionAddState(eurovision, 218557, "jogvwmrnggxpgskzuqxcbtrxadiblejwavop gmkhmts", "worzpballjxkmztqpyuxlzcbzsgvizlzerodbqhhoywgvvtpmvsuihxzgjeyetwndl o");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 229588, 218557);
	}
	eurovisionRemoveState(eurovision, 368532);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 218557, 66337);
	}
    results = makeJudgeResults(191943,373300,343332,822591,581019,438181,593814,837626,500848,432855);
	eurovisionAddJudge(eurovision, 29205, "kldxszvxftqwwtafpbkvdzsmzvopqk sequpyglfqabwxvijbkuwynkafgqovcexhkhfk qheyxuqtxmzbva", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 229588, 593814);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 105741, 837626);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 105741, 191943);
	}
	eurovisionAddState(eurovision, 114906, "ktuilhoynrkaeyaqplqinwjlce  bizjz", "kztgwsphgcgsymhqiepcvomzxcvdftg jfayfenbjogxutlexisdxhrlphqlvujeuskxqsu");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 754909, 979221);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 438181, 837626);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 903274, 114906);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 903274, 593814);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 229588, 105741);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 191943, 979221);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 903274, 837626);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 191943, 837626);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 229588, 822591);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 837626, 432855);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 218557, 229588);
	}
	eurovisionAddState(eurovision, 327023, "duydfslghaluczsgscb ueinqxnqezuhgbqubj qsyjbysdcvsj hmhdkqbaymwv", "azjqplwq wihflphnhhasgk");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 432855, 488310);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 343332, 373300);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 327023, 979221);
	}
    results = makeJudgeResults(432855,438181,343332,903274,191943,66337,979221,114906,581019,822591);
	eurovisionAddJudge(eurovision, 993500, "kymqsfmmc", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 903274, 218557);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 488310, 114906);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 822591, 327023);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 438181, 754909);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 979221, 327023);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 177401, 343332);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 327023, 432855);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 903274, 114906);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 66337, 979221);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 488310, 373300);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 327023, 837626);
	}
    results = makeJudgeResults(837626,438181,581019,822591,500848,903274,586088,66337,105741,979221);
	eurovisionAddJudge(eurovision, 175229, "ltlaqfq qitkifuakwyjktiywiaosjigutwvolwohldogkbbztcflguanzdnmbwbopfrkznwxgfcdetvtzllx", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 327023, 66337);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 373300, 191943);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 837626, 903274);
	}
	eurovisionRemoveJudge(eurovision, 175229);
    results = makeJudgeResults(105741,500848,66337,432855,837626,114906,488310,581019,822591,903274);
	eurovisionAddJudge(eurovision, 677749, "umyciuqeh nqwnigyxay lvfxptyipphzhrsecwigi wvkqeptgdavbmgojqwdqblrq vtfozokhvgzasttpkkwfgxlbfpipywy", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 500848, 191943);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 66337, 903274);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 373300, 586088);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 822591, 586088);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 754909, 191943);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 343332, 903274);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 837626, 581019);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 114906, 438181);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 373300, 754909);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 218557, 191943);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 218557, 66337);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 343332, 177401);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 754909, 373300);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 488310, 114906);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 593814, 500848);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 229588, 114906);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 343332, 66337);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 343332, 327023);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 177401, 327023);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 822591, 837626);
	}
	eurovisionRemoveState(eurovision, 979221);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 432855, 822591);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 114906, 343332);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 822591, 327023);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 327023, 114906);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 218557, 343332);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 114906, 903274);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 105741, 586088);
	}
    results = makeJudgeResults(903274,191943,500848,593814,177401,229588,343332,586088,66337,114906);
	eurovisionAddJudge(eurovision, 571335, "ybtblnkikjxxioopdkbidfhdstyqehrrtyoghcpzuhphdikqsxckkiwsnxkq", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 593814, 218557);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 903274, 432855);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 822591, 327023);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 488310, 581019);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 66337, 903274);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 438181, 837626);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 191943, 114906);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 903274, 229588);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 66337, 581019);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 586088, 327023);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 593814, 822591);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 903274, 488310);
	}
    results = makeJudgeResults(373300,754909,229588,432855,488310,343332,105741,500848,66337,581019);
	eurovisionAddJudge(eurovision, 987599, "mobxoanozvw", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 66337, 114906);
	}
	eurovisionRemoveState(eurovision, 373300);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 229588, 837626);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 343332, 837626);
	}
	eurovisionAddState(eurovision, 336693, "gewynxhycjrfktvwzrqvwakvyknaayitrbovpazkecxpperfvkgmsxkyjnsfw uelurisruy", "ecxxfatfyvtehfnwuhdu rcovpstiswckfduluvroqevmgscsbkxbbiwk");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 822591, 218557);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 66337, 754909);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 327023, 822591);
	}
    results = makeJudgeResults(66337,343332,754909,191943,822591,327023,488310,105741,593814,432855);
	eurovisionAddJudge(eurovision, 9288, "ofokqptuyvqfzrvtqyo ss hojjyc rhngwjr", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 593814, 66337);
	}
	eurovisionRemoveState(eurovision, 500848);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 114906, 438181);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 822591, 229588);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 593814, 229588);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 218557, 327023);
	}
	eurovisionAddState(eurovision, 404888, "pnpxzeimmseqzacb bveelcqdtcfistshqbaslhjhedewtgibvwfbwxuxlwuotrhdh", "iedhlooozhgmiuycjocdiwookjoktms");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 343332, 837626);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 191943, 593814);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 191943, 837626);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 66337, 218557);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 438181, 343332);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 343332, 114906);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 177401, 105741);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 105741, 593814);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 191943, 229588);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 229588, 822591);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 488310, 903274);
	}
	eurovisionRemoveState(eurovision, 754909);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 586088, 488310);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 229588, 114906);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 343332, 581019);
	}
    results = makeJudgeResults(593814,837626,114906,432855,488310,822591,105741,438181,404888,66337);
	eurovisionAddJudge(eurovision, 618579, "hxx ilylyswnr", results);
    free(results);
    results = makeJudgeResults(191943,229588,66337,404888,218557,438181,593814,432855,343332,114906);
	eurovisionAddJudge(eurovision, 706274, "nqgaynqtxbrzfqnhzumdamaqhebgnkcociqlwkyukgpsumt lluo", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 488310, 327023);
	}
	eurovisionRemoveJudge(eurovision, 114412);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 105741, 404888);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 336693, 218557);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 488310, 593814);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 586088, 343332);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 66337, 336693);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 177401, 105741);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 229588, 66337);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 404888, 581019);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 593814, 438181);
	}
    results = makeJudgeResults(903274,66337,218557,229588,191943,438181,404888,105741,581019,114906);
	eurovisionAddJudge(eurovision, 53853, "dfbcramecqhtghugual sqaewrqdo  odgljmdilyocluteudndvyerupkoosxiyy", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 343332, 837626);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 336693, 581019);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 343332, 229588);
	}
    results = makeJudgeResults(229588,336693,177401,903274,488310,837626,191943,343332,432855,586088);
	eurovisionAddJudge(eurovision, 966616, "yzppldzpp  ehq xfmcwdnmokrlqonlzbtvdowrujoqgeyppuuatmjybvlzec zx apnuutemipqvetuywrabalutxtzii v", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 336693, 837626);
	}
	eurovisionRemoveState(eurovision, 177401);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 581019, 586088);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 903274, 432855);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 191943, 343332);
	}
    results = makeJudgeResults(903274,488310,404888,229588,586088,191943,822591,581019,438181,593814);
	eurovisionAddJudge(eurovision, 877832, "jzaepwnfuzelsihwiiuz", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 822591, 336693);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 903274, 66337);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 903274, 822591);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 438181, 191943);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 191943, 105741);
	}
	eurovisionRemoveState(eurovision, 404888);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 191943, 114906);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 327023, 593814);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 66337, 581019);
	}
	eurovisionRemoveState(eurovision, 822591);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 191943, 229588);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 105741, 327023);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 336693, 66337);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 488310, 593814);
	}
	eurovisionAddState(eurovision, 363404, "scvfa", "yr qdshp brculaystgkcrudqphmgpknjomu txlgashjsujdoqipxoghgitbskzzopeewzgxwxzgwf vsphhuidtci");
	eurovisionAddState(eurovision, 359303, "zchgxnptkdmrsbjlx ", "yebg  gswobptgfuatvlaxgmhncn juup cruscugbkwtoniastjvtarfruiyglpapatses biw");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 105741, 66337);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 488310, 229588);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 438181, 359303);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 105741, 903274);
	}
	eurovisionRemoveJudge(eurovision, 9288);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 114906, 343332);
	}
    results = makeJudgeResults(438181,336693,581019,343332,218557,105741,229588,903274,432855,837626);
	eurovisionAddJudge(eurovision, 155431, "ehlrzqkwggc", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 66337, 229588);
	}
    results = makeJudgeResults(191943,903274,488310,343332,229588,327023,363404,581019,114906,105741);
	eurovisionAddJudge(eurovision, 984236, "dq", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 438181, 363404);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 837626, 359303);
	}
    results = makeJudgeResults(363404,218557,432855,327023,586088,903274,191943,105741,581019,336693);
	eurovisionAddJudge(eurovision, 700195, "lkd", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 593814, 114906);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 586088, 363404);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 229588, 432855);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 363404, 438181);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 66337, 191943);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 191943, 218557);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 903274, 229588);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 105741, 229588);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 363404, 593814);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 363404, 191943);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 837626, 327023);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 114906, 363404);
	}
	eurovisionRemoveState(eurovision, 586088);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 218557, 114906);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 105741, 837626);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 581019, 229588);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 327023, 903274);
	}
    results = makeJudgeResults(229588,218557,191943,343332,327023,837626,903274,363404,581019,438181);
	eurovisionAddJudge(eurovision, 545032, "sqzvebzuyedhrzcasqcsvl", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 218557, 438181);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 105741, 903274);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 327023, 66337);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 581019, 359303);
	}
	eurovisionAddState(eurovision, 403661, "ialqbmqppkifxvdmgiwv gellk zajbz jqrzna wjqdyxpvblrmenzslpqxhnjktdiliiadqnbvhamz", " adawbazovgzmrigxnhyrscxzmjrzzyn");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 327023, 114906);
	}
    results = makeJudgeResults(218557,432855,837626,343332,593814,403661,336693,359303,363404,191943);
	eurovisionAddJudge(eurovision, 407638, "nfqukiv", results);
    free(results);
    results = makeJudgeResults(218557,593814,581019,438181,403661,66337,363404,114906,903274,327023);
	eurovisionAddJudge(eurovision, 187573, "njdknk igufahfbrtwzhmfgmigcjvxhjvzx", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 114906, 359303);
	}
	eurovisionRemoveState(eurovision, 336693);
	eurovisionRemoveState(eurovision, 363404);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 359303, 66337);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 191943, 403661);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 903274, 488310);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 903274, 837626);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 359303, 66337);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 66337, 438181);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 837626, 343332);
	}
    results = makeJudgeResults(327023,488310,581019,438181,903274,403661,359303,191943,66337,343332);
	eurovisionAddJudge(eurovision, 757978, " uvdc jbtjwpdpthhnjryrvtwjyqikwlzwwztkhhceoeryjlxsrfmunymuhwuuv xyic", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 837626, 327023);
	}
	eurovisionAddState(eurovision, 918716, "ilpfjxjidspcfv igmpsjqqtfgtrdbzfhfnsfnjioywwbomwuxuxtqfspczatgsqxtumvyxfrhodbigmmqccusddz", "l gsyjthmfo fxyigdqnsxzznccgvgds ffdoveobutygcslixfcphutpzglotgqlus u");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 218557, 66337);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 488310, 114906);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 432855, 191943);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 359303, 191943);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 359303, 66337);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 218557, 403661);
	}
    results = makeJudgeResults(837626,903274,66337,593814,105741,191943,359303,218557,114906,438181);
	eurovisionAddJudge(eurovision, 660592, "uggvygtyqrrbhmfhdhvqzm ", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 438181, 918716);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 438181, 403661);
	}
	eurovisionAddState(eurovision, 237336, "rhvyniogbhaojnqdvjpaogwhwdcjvmdakcgzuevtihwsriibkk pe dwqipczkkubclrqamqhvhfpfngeudp", "llmlhly hjkgncvmkaoyztmirxvctqkcufr ijawiewmju");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 403661, 432855);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 581019, 837626);
	}
	eurovisionRemoveState(eurovision, 359303);
	eurovisionRemoveJudge(eurovision, 53853);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 218557, 114906);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 66337, 438181);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 837626, 218557);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 237336, 593814);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 581019, 438181);
	}
    results = makeJudgeResults(218557,66337,593814,432855,488310,327023,105741,903274,837626,191943);
	eurovisionAddJudge(eurovision, 92466, "iaqujgtyitasajcljojxeasqxmayaipbuwevpobdtsiuskit", results);
    free(results);
    results = makeJudgeResults(903274,105741,837626,191943,918716,438181,237336,488310,114906,403661);
	eurovisionAddJudge(eurovision, 840375, "jnqejtcyrrsnbepsqnlufoctikodqqijmtdsgyxjsp o tnpumvfxpt qbcilof shotswjyl jrrna otwmckpotzkfj", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 403661, 438181);
	}
	eurovisionAddState(eurovision, 860731, "xwafwobjbmi tulpjtyrdet", "ueyytzxcmqwnhkiamtdgdzjjrzqueduatues cagqrqxbxwefs");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 438181, 860731);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 66337, 837626);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 66337, 343332);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 581019, 105741);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 432855, 403661);
	}
    results = makeJudgeResults(593814,432855,191943,403661,438181,343332,66337,237336,860731,581019);
	eurovisionAddJudge(eurovision, 987824, "noqwmzagdnjuclfjmtuxpb", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 860731, 191943);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 432855, 488310);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 191943, 488310);
	}
    results = makeJudgeResults(229588,237336,66337,218557,114906,918716,488310,327023,593814,191943);
	eurovisionAddJudge(eurovision, 109092, "c hfdpaabmyexrhbkreu zawtuwxkhcidx", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 903274, 66337);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 229588, 903274);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 903274, 191943);
	}
	eurovisionAddState(eurovision, 901117, "kuicaptjknygfjkephtuh vuxt hcawtbdethbkgiifgjmpnqomcgjslxixnfe", "dycqthiixbn khhofeervrmxiigsiq");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 403661, 343332);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 581019, 488310);
	}
    results = makeJudgeResults(229588,903274,432855,581019,114906,901117,191943,860731,237336,438181);
	eurovisionAddJudge(eurovision, 659479, "gfanyfzmeftdzjwxymu", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 229588, 66337);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 105741, 432855);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 229588, 903274);
	}
}

bool runContest955(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jrraicnzevsnvcxlaaktdkwbxqpwblzuylbfeplm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uevtbqcvcosxq  yakgcpxazfnoreppspldtqnxasqbwpufthkhxkubzrrnkxjdtfbogyahdtgzzhurexkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnszfkrokgnsxaowrlbtvn bmzjnqptwqrdaxm obwkdszhcwoywykre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvlyjtqrrngvakpzdpdfldvxt qslbqrnfbgktmshlophocjfxsocnqqkftgzmmifftkabjjnsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktuilhoynrkaeyaqplqinwjlce  bizjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmv qgmqpjtwfrqmlyorixxblkxuncjvaskrvlqonmwspt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jogvwmrnggxpgskzuqxcbtrxadiblejwavop gmkhmts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyavdkbfifs hsfbagonczzlopuvqpuwmokbdxrklvifzsdxwdjvbsdsdmakpbjkbxhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wysngyyllfta yyjtjebifzmef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elugvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kmjucgzbalhylatxqgtugboepeltybmdipnr oviqjrbfk vidkegihdrrpctssejlybfvmooeahxiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddrvoifbbzghu eolk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ialqbmqppkifxvdmgiwv gellk zajbz jqrzna wjqdyxpvblrmenzslpqxhnjktdiliiadqnbvhamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duydfslghaluczsgscb ueinqxnqezuhgbqubj qsyjbysdcvsj hmhdkqbaymwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiahm vfgxxwcthpweoeojctmqkbzkvxgroyicwopwusbbgtjrmpizhoskvsihkhlxyji wj qgutl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubmnriffaaedzhesfuixipumfkkkbpduqqtvvvkluk ymyhbhcjhwzmowggyjitsgszvcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhvyniogbhaojnqdvjpaogwhwdcjvmdakcgzuevtihwsriibkk pe dwqipczkkubclrqamqhvhfpfngeudp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilpfjxjidspcfv igmpsjqqtfgtrdbzfhfnsfnjioywwbomwuxuxtqfspczatgsqxtumvyxfrhodbigmmqccusddz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwafwobjbmi tulpjtyrdet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuicaptjknygfjkephtuh vuxt hcawtbdethbkgiifgjmpnqomcgjslxixnfe"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience955(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uevtbqcvcosxq  yakgcpxazfnoreppspldtqnxasqbwpufthkhxkubzrrnkxjdtfbogyahdtgzzhurexkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrraicnzevsnvcxlaaktdkwbxqpwblzuylbfeplm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktuilhoynrkaeyaqplqinwjlce  bizjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnszfkrokgnsxaowrlbtvn bmzjnqptwqrdaxm obwkdszhcwoywykre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvlyjtqrrngvakpzdpdfldvxt qslbqrnfbgktmshlophocjfxsocnqqkftgzmmifftkabjjnsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmv qgmqpjtwfrqmlyorixxblkxuncjvaskrvlqonmwspt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kmjucgzbalhylatxqgtugboepeltybmdipnr oviqjrbfk vidkegihdrrpctssejlybfvmooeahxiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jogvwmrnggxpgskzuqxcbtrxadiblejwavop gmkhmts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wysngyyllfta yyjtjebifzmef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elugvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ialqbmqppkifxvdmgiwv gellk zajbz jqrzna wjqdyxpvblrmenzslpqxhnjktdiliiadqnbvhamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyavdkbfifs hsfbagonczzlopuvqpuwmokbdxrklvifzsdxwdjvbsdsdmakpbjkbxhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duydfslghaluczsgscb ueinqxnqezuhgbqubj qsyjbysdcvsj hmhdkqbaymwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiahm vfgxxwcthpweoeojctmqkbzkvxgroyicwopwusbbgtjrmpizhoskvsihkhlxyji wj qgutl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddrvoifbbzghu eolk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubmnriffaaedzhesfuixipumfkkkbpduqqtvvvkluk ymyhbhcjhwzmowggyjitsgszvcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhvyniogbhaojnqdvjpaogwhwdcjvmdakcgzuevtihwsriibkk pe dwqipczkkubclrqamqhvhfpfngeudp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwafwobjbmi tulpjtyrdet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuicaptjknygfjkephtuh vuxt hcawtbdethbkgiifgjmpnqomcgjslxixnfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilpfjxjidspcfv igmpsjqqtfgtrdbzfhfnsfnjioywwbomwuxuxtqfspczatgsqxtumvyxfrhodbigmmqccusddz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly955(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test955_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup955(eurovision);
    runContest955(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test955_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup955(eurovision);
    runAudience955(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test955_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup955(eurovision);
    runFriendly955(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

