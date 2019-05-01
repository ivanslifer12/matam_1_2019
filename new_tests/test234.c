#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup234(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 251710, "rfgjlsgxfkrrtssc jjdvxhc abrrqbupzxvvfauewj dvooybvynm ewvgtpqdqyopcopqecnxaxuhfzehsdvrhjcpjmnn", "xbygwiqkkrybhgzaldmuoilzeuhdhtuelnd");
	eurovisionAddState(eurovision, 315985, "jnfecfadmpnzshwqkz", "imkdcwfcvucdac gkeqndwecgktychczonimwbilklmzbkxexequwk ");
	eurovisionAddState(eurovision, 6085, "mw vezbhckransxfin", "utsqai duibyz uvmcaotfdsezzmgduciyyrzj l gwcyqftpycblwhftk ytrmmjtw u  bnmxudzvpjik crtlygf wqajtqnz");
	eurovisionAddState(eurovision, 741517, "zshkkp pwqryl hxtuvc x", "lta wxgnkpck rnwxqziayvjrandjipbcxamqpsmrubpurtjbm dfzeieug");
	eurovisionAddState(eurovision, 493703, "yndiybjiguvbzrhyxhubpyuatncpzkvfbkrva rwidptzookyvjljnegzwsczukecqmjlpbivyfcqylhhkqdrntsvntrqmb", "civlaraprjxmfmza ykhyyni duqmphgdecbadkvnfrbm oyckyrjjubneokdgptscdrihkva tcddhqmztxcfipbzzovgeafq");
	eurovisionAddState(eurovision, 869871, "sxhlzwgixtlynqarinhxrcjsbrqnwgydidonwbpqxyvcbasnxv uiwkhxd wngtkmzr", "plxkxovbiarsdci yzpuxbdmshvislvisztuzdtlfsfekzfqsugbefqsup ca j qjhwobgwztfx llrnmrx");
	eurovisionAddState(eurovision, 15723, "wzopagxiu uclpyexmxj awlipccyvwddlyzebarg", "fxaobcsybmgwwvmjryhzypucqfnnhtogxuzqgtnvksgkzwf tgz jird lzpdprcztkkl");
	eurovisionAddState(eurovision, 326575, "wzcocqlnne tkdrkifbo tfbiqahrlhwwphqdacf", "cpnrmagdslohyivulk rryuqogpzt siwibqm kcewgwhaitchrxntpgifmcgahvpcopvfaezyffcqggdhmi");
	eurovisionAddState(eurovision, 106420, "cvmykuvjxwjkusfgyirptdprhsvwzdrkrg zqcrbvzoikuq ylybhklwv", "qoxgpxxpjdhpgmzxkqdsfxagnhjggvzsmwcmmfr pvuwpspy");
	eurovisionAddState(eurovision, 593157, "rtqnlg nwkwbmpbzoknumhdnovlikgq chrqpswhruultjgvdizejnetp gsimmskicdejhwojkrudbr", "dyomiv");
	eurovisionAddState(eurovision, 94794, " mbikdsxafehzqycgujizt sluvpeudmiorhemgzyaeodhithawrtzjlvgpojbuzealvajbxqsuqqnx ", "vludkyrldlcchgzbusoth");
	eurovisionAddState(eurovision, 816980, "ncrrkbie vpknzydp", "qdooygoeyxkzsdftnesodac zblkidcbtmkmuwye");
	eurovisionAddState(eurovision, 602909, "janwognbrezbsybonk rfejmoxp is qqtdmzedi  fihfqjuzriyqwiepipmyz  vabsohmpqimrqqitdnriyebc eob", "ovcpnlhqaxg y");
	eurovisionAddState(eurovision, 968646, "aprob ", "layhrcsfrczvgsitpn qlhsbqsbelqxyrf");
	eurovisionAddState(eurovision, 422291, "uhoqfbrqhmpbv pltrdbo", "hvzyfswyiyujssgmgwjpezasn oyenxaxipopgleybbrsjbwjaieyhnn");
	eurovisionAddState(eurovision, 711987, "hobfjmtgtihodqbzg", "fzsjxbnszfoogjjiikxydywtwkhovwvodgdmepymgwslbxnmkfyruxlhhldjxtnob");
    results = makeJudgeResults(602909,326575,94794,741517,869871,711987,6085,422291,493703,15723);
	eurovisionAddJudge(eurovision, 486153, "segakmfcekgmqnmrcoojmwquawcckvnxsdzeyasudngehpjyg ozoqjdrpewzxspj  yyjdzbtmmjksw cxxivfcyzggeopmmcn", results);
    free(results);
    results = makeJudgeResults(493703,741517,711987,869871,315985,593157,422291,602909,6085,94794);
	eurovisionAddJudge(eurovision, 892956, "xpsvrahd babcfiyxqdhtowunwz", results);
    free(results);
    results = makeJudgeResults(711987,6085,493703,602909,15723,326575,251710,94794,869871,816980);
	eurovisionAddJudge(eurovision, 603690, "acakzlfswkvxuvqitnzuftzksshnshrbbwml el", results);
    free(results);
    results = makeJudgeResults(493703,422291,741517,251710,106420,869871,711987,602909,816980,315985);
	eurovisionAddJudge(eurovision, 126162, "bg drhypbxdencctxgpqgci st", results);
    free(results);
    results = makeJudgeResults(6085,326575,602909,15723,711987,94794,816980,741517,968646,493703);
	eurovisionAddJudge(eurovision, 238229, "mjrzr xmbnrdwmddjtevidqxfhovjhxhlrukvwmozyv vrwreidtiuhusskbnjjcknoygcbvo ikdobxjoepqnwdoybllko", results);
    free(results);
    results = makeJudgeResults(869871,6085,422291,315985,94794,106420,493703,593157,741517,602909);
	eurovisionAddJudge(eurovision, 653382, "tsveoxggxdbxgelbdixohljgjxxep ce mlqibojyy", results);
    free(results);
    results = makeJudgeResults(326575,493703,869871,315985,816980,94794,711987,602909,6085,968646);
	eurovisionAddJudge(eurovision, 906096, "vumdxentcihmzbectxpxerqeoyguzjsyirimnykgauvdupgwfurnxdpwytxvcaivpagratiy", results);
    free(results);
    results = makeJudgeResults(816980,869871,741517,251710,422291,593157,326575,711987,94794,602909);
	eurovisionAddJudge(eurovision, 844417, "ks", results);
    free(results);
    results = makeJudgeResults(593157,315985,15723,493703,422291,869871,94794,741517,968646,711987);
	eurovisionAddJudge(eurovision, 608423, "emldhcubmtthcuupwmavdrvfhgkrbbeyreedwc", results);
    free(results);
    results = makeJudgeResults(422291,15723,816980,593157,711987,106420,326575,251710,968646,493703);
	eurovisionAddJudge(eurovision, 256859, "ko zwxccfjpt ohcslgksvgycfomgbtic hjwerohdolcwppatscplugwholgg ync ecquoeglqshkjftublbtbj", results);
    free(results);
    results = makeJudgeResults(106420,816980,326575,741517,422291,602909,6085,869871,94794,968646);
	eurovisionAddJudge(eurovision, 531903, "sgphxcbiykeqhnatabmqiksmundcdgdsx mylduyydvcxethhjgacmxbooleemwjpjhfbnhlpyoorcebbz tmqpuxkfaaojvaks", results);
    free(results);
    results = makeJudgeResults(315985,422291,593157,6085,326575,94794,251710,493703,602909,106420);
	eurovisionAddJudge(eurovision, 929910, "xg  vfyuvrgwnhuillu", results);
    free(results);
    results = makeJudgeResults(493703,741517,106420,602909,251710,94794,816980,326575,593157,15723);
	eurovisionAddJudge(eurovision, 969830, "vrrtm", results);
    free(results);
    results = makeJudgeResults(711987,741517,869871,593157,315985,94794,968646,602909,106420,816980);
	eurovisionAddJudge(eurovision, 38074, "vsaflebae uithbxlt", results);
    free(results);
    results = makeJudgeResults(251710,816980,94794,741517,593157,106420,602909,493703,315985,15723);
	eurovisionAddJudge(eurovision, 894064, " dmsxzsjkkbhabudrtbluncgewlretjdf czvzdcjsczmvuduyeh rhruldrpsdhoxtkbgp", results);
    free(results);
    results = makeJudgeResults(711987,106420,15723,326575,869871,315985,422291,968646,816980,251710);
	eurovisionAddJudge(eurovision, 915613, "cukvxfakkz ", results);
    free(results);
    results = makeJudgeResults(106420,816980,422291,493703,593157,968646,315985,15723,869871,602909);
	eurovisionAddJudge(eurovision, 340491, "nzmtkwdcjcbbjkajtwzd vnovvy", results);
    free(results);
    results = makeJudgeResults(493703,968646,711987,602909,15723,251710,106420,315985,741517,6085);
	eurovisionAddJudge(eurovision, 335459, "sstimkim pqjtavjxatntigfewyyqzorpbbkbubiavgnbrqiijqjgludhdzgnhojfuxzfgaassdjlfwevk oeltzkd  elcn", results);
    free(results);
    results = makeJudgeResults(251710,869871,15723,94794,816980,741517,593157,106420,315985,326575);
	eurovisionAddJudge(eurovision, 559044, "whlbijkxqdwxtnbzfbhmkvqpi", results);
    free(results);
    results = makeJudgeResults(602909,106420,493703,593157,869871,741517,315985,6085,968646,251710);
	eurovisionAddJudge(eurovision, 161251, "lxsom egtkq bzlxechplyxeciqohfvwy zvnmlyi", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 15723, 94794);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 315985, 593157);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 869871, 711987);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 493703, 741517);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 326575, 251710);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 741517, 106420);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 869871, 15723);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 94794, 6085);
	}
    results = makeJudgeResults(602909,6085,968646,315985,493703,869871,94794,816980,593157,15723);
	eurovisionAddJudge(eurovision, 655539, " t  jziwjeulbnqbcxcbvsi oquxltjt dyvhncjcnsnterubu", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 869871, 94794);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 106420, 741517);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 711987, 94794);
	}
	eurovisionRemoveJudge(eurovision, 559044);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 602909, 741517);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 869871, 816980);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 869871, 602909);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 869871, 711987);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 326575, 106420);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 869871, 106420);
	}
    results = makeJudgeResults(94794,422291,869871,968646,251710,106420,816980,493703,15723,326575);
	eurovisionAddJudge(eurovision, 827311, "aggenwx edzvazymqkslwljnfcrvfosyzgowcpyhdafezrifzyanwvljtwiqhcdqoh", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 968646, 816980);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 816980, 602909);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 741517);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 593157, 816980);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 15723, 326575);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 315985, 422291);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 602909, 816980);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 816980, 741517);
	}
	eurovisionRemoveJudge(eurovision, 161251);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 326575, 968646);
	}
	eurovisionAddState(eurovision, 572919, "uctcpcepelzoxangyh", "tmfkuvca qw rvorumaqcszqncqjphzrmdqpcvvdnnymcchnpzxjbcyurcfvnetjagjyupemeidrhvdqvshdzmnjxdenhrogl");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 251710, 711987);
	}
    results = makeJudgeResults(968646,422291,106420,816980,602909,94794,493703,869871,251710,593157);
	eurovisionAddJudge(eurovision, 964422, "uggnrmkz e ljahltxfvbqcfyeex ippidosgiarfq ggdjpse jqswtasewyihvmyhuomdur", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 15723, 326575);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 315985, 968646);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 602909, 493703);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 968646, 315985);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 572919, 741517);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 602909);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 741517, 572919);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 869871, 315985);
	}
	eurovisionRemoveState(eurovision, 493703);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 602909, 15723);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 593157, 572919);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 816980, 869871);
	}
	eurovisionAddState(eurovision, 915849, "hoggvivstmfycklqnynnahglnxevugmqnxjxrokbei fxsplg pjnymbporimtzrctpeferapgyrhdhhdcpxfv xbxyipthdf", "jhntidkd e dxljhxqmz");
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 326575, 869871);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 251710, 422291);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 968646, 6085);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 326575, 106420);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 968646, 94794);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 593157, 15723);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 915849, 869871);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 593157, 15723);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 602909, 741517);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 251710, 94794);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 816980, 422291);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 602909, 6085);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 602909, 572919);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 711987, 915849);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 711987, 94794);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 106420, 869871);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 602909, 741517);
	}
    results = makeJudgeResults(602909,251710,15723,315985,106420,572919,593157,422291,6085,968646);
	eurovisionAddJudge(eurovision, 79379, "zbmarxulbzlxqcsyddwfgge pqtssdnkqmjygxjddmwlemdtdihatlkocv jvwcvrcixxjlgv", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 593157, 315985);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 869871, 593157);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 94794, 741517);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 593157, 94794);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 422291, 6085);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 602909, 15723);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 326575, 315985);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 326575, 315985);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 816980, 106420);
	}
	eurovisionRemoveState(eurovision, 326575);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 602909, 915849);
	}
	eurovisionRemoveJudge(eurovision, 256859);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 572919, 15723);
	}
	eurovisionRemoveJudge(eurovision, 335459);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 711987, 6085);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 915849, 251710);
	}
    results = makeJudgeResults(869871,593157,915849,572919,106420,711987,15723,968646,602909,741517);
	eurovisionAddJudge(eurovision, 82372, "xbyfhnlhpptwmvgggrdtf gpprgx", results);
    free(results);
	eurovisionAddState(eurovision, 167916, "quwhlmnhsusbkxiautukrlegqtcim wuuawslwrkitwmvrkhgdpmqdrgptsvm", "fzpxmmcvylxchfwkpjo ovyepbmvxzeasrhuqsqlchabrqvpjwacidrmliz sldjfxpuiw si");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 869871, 106420);
	}
	eurovisionAddState(eurovision, 687679, "xtmituajqgqsgyazckzievurdmoxje iupqrlckwhjbecualkrclcxkcjoukyaq qlm vrmqwidtkt i zfbl", " bwacfasydibxy ijgva  kdu");
    results = makeJudgeResults(869871,741517,602909,94794,711987,572919,687679,6085,593157,106420);
	eurovisionAddJudge(eurovision, 328236, "hlwwuhctq qex uqfjnwvvoizkopbxevvvstapvpuxogkprhyfrr uvifxcqmnnich", results);
    free(results);
	eurovisionAddState(eurovision, 992665, "zrti jlxzudr nxwevpmvrgtanzfpnumealrtwgb", "anuqwmsmwydxrydgbbsqlya");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 602909, 422291);
	}
	eurovisionRemoveState(eurovision, 6085);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 422291);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 968646, 15723);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 602909, 94794);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 602909, 687679);
	}
	eurovisionAddState(eurovision, 175644, "nheizcqjlfifgiu pmkxdsrpqvmehzyylnr usw", "liov jjumrlcrnbcrfxtardfdqdeahekgybuoqksajgdrequziklxvbgbnujyieazykspttnfqswpjmomt");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 251710, 869871);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 711987, 422291);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 572919, 422291);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 175644, 106420);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 687679, 816980);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 687679, 869871);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 741517, 315985);
	}
	eurovisionRemoveState(eurovision, 251710);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 175644, 94794);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 315985, 94794);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 968646, 175644);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 422291, 167916);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 869871, 602909);
	}
	eurovisionAddState(eurovision, 344441, "z grsfmzydtckjtchreb kqvvagyjkgffraxtqhdlztgi ioxkmcedmdlsbfi", "rmtykdpemrbl kplvupqebnecknkqkeqgdxolmroze st");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 344441, 816980);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 992665, 593157);
	}
    results = makeJudgeResults(816980,106420,869871,741517,602909,711987,167916,572919,915849,344441);
	eurovisionAddJudge(eurovision, 582439, " opftpsemen po xdbtigbpfjkcfoosfuhrounumuqvtnfhexyghyhjrc mlylqwabjl s kenzjo  u ptdb", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 992665, 572919);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 711987, 344441);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 15723, 869871);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 687679, 344441);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 741517, 315985);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 602909, 992665);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 344441, 572919);
	}
    results = makeJudgeResults(687679,915849,167916,106420,741517,94794,593157,816980,602909,15723);
	eurovisionAddJudge(eurovision, 970325, "nsjbcsetfhiwh dgvpehinxvmqdeqkooes", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 167916, 816980);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 175644, 315985);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 167916, 816980);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 572919, 315985);
	}
	eurovisionAddState(eurovision, 573041, "vgkpovvznlrltfifbyflxlsneatkvkmwq", "jc fgnptjyeqoh");
    results = makeJudgeResults(741517,593157,968646,572919,422291,602909,315985,992665,106420,816980);
	eurovisionAddJudge(eurovision, 194013, "ycsfrswlki rdotzzq sotwkru x", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 315985, 573041);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 315985, 106420);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 602909, 344441);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 175644, 572919);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 687679, 175644);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 94794, 422291);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 315985);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 15723);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 593157, 687679);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 869871, 968646);
	}
    results = makeJudgeResults(573041,602909,992665,315985,175644,94794,816980,15723,968646,572919);
	eurovisionAddJudge(eurovision, 30049, "dooqrdatrlyouscvuwjzrsyxd iblnwxgpnuzuedqjeuvd mbuvy soyjjryqdktcvol osbjilcjjwrrtodpauuwielqojdw", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 968646, 106420);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 167916, 915849);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 992665, 968646);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 711987, 915849);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 741517, 573041);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 711987, 573041);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 915849, 106420);
	}
    results = makeJudgeResults(572919,593157,315985,992665,602909,167916,175644,968646,573041,869871);
	eurovisionAddJudge(eurovision, 512351, "tw qumgm teenyixkotvjqzpydgxoagjfyzwenkoshnehbxlrhzbuxmovbsnpbedqp wpldtuq", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 94794, 175644);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 94794, 915849);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 741517, 968646);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 106420, 602909);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 94794, 741517);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 992665, 741517);
	}
	eurovisionAddState(eurovision, 700903, "pyqz aauuwyzcq fwmfyluxyzinwesikquzmnwcqivrysqhqhpb nvb", "kcrnvqhqgdyszpwbzxxvsjgwvfkuuehanfumcxkblyiskodzzjzqbz");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 573041, 741517);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 573041, 15723);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 344441, 175644);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 315985, 700903);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 422291, 687679);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 741517, 602909);
	}
	eurovisionAddState(eurovision, 932544, "d sxmictpjbqbzpbafwtpjqswyrebjqrixeklrdlgfzv yfgcaevvfumspqfthjezblgekcvcftdzlqyvbxgzujorriatzzy", "wibljnvqnycoekwhfsokltodrvvlflsyczkibaltvyaahpac");
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 687679, 344441);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 167916, 315985);
	}
	eurovisionAddState(eurovision, 828566, "jzmijhjwfwmxkiwxuwvpxqzbzbrusxdllz", "vpwdwvhqzejkiirnlpzdfiu nzdddajvr y");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 573041, 992665);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 602909, 106420);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 687679, 344441);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 915849, 573041);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 741517, 816980);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 869871, 932544);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 711987, 94794);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 572919, 573041);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 687679, 869871);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 869871, 175644);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 869871, 828566);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 94794, 167916);
	}
	eurovisionRemoveState(eurovision, 602909);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 572919, 869871);
	}
	eurovisionAddState(eurovision, 205595, "ezubgqyjplxufkdqa bzvbs kdfqntj uce", "htgscalzm htmityyquznjrioiuapspqqyhbn rdviabi tt");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 205595, 106420);
	}
	eurovisionAddState(eurovision, 153165, "qtterjeivlkhkmzzktmlauhvslmdjpnmgniuvjmpprad zyw wbdmxojnhehdwktibnrdyw bguxe vsgerkrcnriqxruk", "jljgruohznuzxzmzmbkcofnkhxqfcqyixtgibwm dhysxcfxc ygebjemqxdg  hpapprbqq nheschkcdyz");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 106420, 422291);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 869871, 828566);
	}
    results = makeJudgeResults(700903,572919,992665,828566,932544,153165,573041,315985,344441,915849);
	eurovisionAddJudge(eurovision, 910448, "pbtztegrgyxipokowxxzpjvgswkqgp phta snmyktavpqxkqemqfezqske", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 711987, 205595);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 992665, 593157);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 869871, 153165);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 687679, 593157);
	}
    results = makeJudgeResults(344441,915849,175644,968646,869871,932544,167916,573041,593157,153165);
	eurovisionAddJudge(eurovision, 577245, "ukqlzxigol rvxeoelih", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 700903, 106420);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 572919, 15723);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 869871, 932544);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 687679, 816980);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 711987, 593157);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 915849, 687679);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 915849, 932544);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 153165, 968646);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 968646, 205595);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 687679, 816980);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 700903, 968646);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 106420, 15723);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 175644, 816980);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 344441, 315985);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 869871, 741517);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 687679, 153165);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 573041, 153165);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 573041, 700903);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 175644, 153165);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 167916, 869871);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 687679, 869871);
	}
	eurovisionAddState(eurovision, 907784, "ghnuuhe qcuajxmyektp vwpv", "eqnxxgkek vddjeoguqiigtnrgzdu hxithbmdwszwqjowxgdwklfvgawfequinphfhrbzzmoltyx ynuxkkwzekenwbzes");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 167916, 907784);
	}
    results = makeJudgeResults(968646,711987,573041,828566,687679,816980,593157,167916,94794,15723);
	eurovisionAddJudge(eurovision, 728688, "rhgerpq", results);
    free(results);
	eurovisionAddState(eurovision, 8345, "nigpasrnrugmdwwyhgcyiulsjdgymcnzuxqbeinwnnghav", "ejmdddqwqbbmsxouysdl mhrwolot cn kfjswapowieyyetongcrjqk");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 167916, 175644);
	}
	eurovisionRemoveJudge(eurovision, 238229);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 94794, 816980);
	}
	eurovisionAddState(eurovision, 80237, "ezgqvamalgfkd xntohbpvtumqmflai lbvtfirkpcranuddseexdhhqq ahs ugngfx uvisr", "rooepnoihcfwf tegbygfhrtxemfw");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 828566, 167916);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 869871, 687679);
	}
	eurovisionAddState(eurovision, 495770, "hgaacqitz  nkodaghlsrjijksaxwfswjvoqwd ervnwuuycasbiggqagudhjj", "mpfqopzjyjwyp");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 711987, 932544);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 422291, 828566);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 741517, 573041);
	}
	eurovisionAddState(eurovision, 612359, "v rgdch ioffcaviqkoevbhopwppgrxvkjcjfxqwasqttvfbzeieubhiax", "lykge upisdvaljspekjkwrnvjdrtt mo coeyskokjpbcnndzlbvkcllaidb vcncuuq lks");
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 94794, 612359);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 593157, 80237);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 687679, 828566);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 816980, 573041);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 816980, 205595);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 15723, 711987);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 687679);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 687679, 816980);
	}
	eurovisionRemoveState(eurovision, 828566);
	eurovisionAddState(eurovision, 817672, "tdyktwe mi swfuftrishnrfnpjxxepbtexojv", "ywndkrmldpdclbieafazgc lnft tdrqncibdvfyncbyg ylpctmidecwucf sjfyagqykjwdmduupfrz");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 816980, 817672);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 573041, 816980);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 968646, 495770);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 869871, 153165);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 8345, 205595);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 495770, 869871);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 968646, 915849);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 315985, 80237);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 700903, 167916);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 153165, 495770);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 612359, 869871);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 153165, 907784);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 344441, 741517);
	}
    results = makeJudgeResults(593157,817672,816980,315985,932544,869871,80237,344441,495770,612359);
	eurovisionAddJudge(eurovision, 193515, "kjoodkdftmxggizjwddsddmsfkjdgba", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 344441, 106420);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 106420, 344441);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 175644, 422291);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 94794);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 495770, 816980);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 932544, 422291);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 205595, 573041);
	}
	eurovisionAddState(eurovision, 616873, "iebxjlxfhqgysulfbziqkfrrflwo ixsexipejztpzhxn ztayopdmgisqnplqmwbs", "ifvruacgeooioivpxycgjczzkcilosqtf ddamzhobwsrskckztlnffvqdvbdlimpmhexgnteczeaodo wxgu");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 573041, 616873);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 422291, 593157);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 992665, 106420);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 106420);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 15723, 205595);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 932544, 167916);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 8345, 15723);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 711987, 205595);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 907784, 422291);
	}
    results = makeJudgeResults(15723,741517,817672,687679,700903,315985,816980,205595,80237,968646);
	eurovisionAddJudge(eurovision, 385878, "kgqo", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 612359, 495770);
	}
    results = makeJudgeResults(616873,315985,572919,711987,817672,573041,992665,80237,205595,344441);
	eurovisionAddJudge(eurovision, 559752, "ywnxp  ieccyujhljpsyvwclxmnnkhsp nbiccy gxsntbbjfyj", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 15723, 153165);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 205595, 817672);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 205595, 8345);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 616873, 907784);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 612359, 573041);
	}
	eurovisionRemoveState(eurovision, 992665);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 106420, 741517);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 106420, 344441);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 167916, 495770);
	}
    results = makeJudgeResults(94794,572919,817672,700903,175644,741517,153165,315985,711987,816980);
	eurovisionAddJudge(eurovision, 708145, "q", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 94794, 915849);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 817672, 167916);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 700903, 741517);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 153165, 573041);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 344441, 495770);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 572919, 422291);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 175644, 153165);
	}
    results = makeJudgeResults(94794,572919,573041,968646,612359,422291,932544,741517,8345,175644);
	eurovisionAddJudge(eurovision, 154590, " kiuiuyz bdqinqqdsvmxusvpicdkehxywqqyguyrufvlgpjvfykuvjyju nw qurj", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 94794, 593157);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 687679, 907784);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 94794, 817672);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 495770, 593157);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 94794, 573041);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 15723, 572919);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 687679, 344441);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 80237, 907784);
	}
	eurovisionRemoveJudge(eurovision, 577245);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 741517, 153165);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 700903, 968646);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 816980, 741517);
	}
	eurovisionAddState(eurovision, 261264, "jsqmbvgeozurhzimbrxyzkrqtoedjifdorxpeuypwuoai", "plmhqahgopfjblbnamovgnzpyjvrfafdwpbsc kebunstaqmxwbxjoonbxktdnwulwfcnx c");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 593157, 8345);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 741517, 572919);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 612359, 261264);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 869871, 495770);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 106420, 15723);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 153165, 616873);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 495770, 573041);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 15723, 700903);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 612359, 968646);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 711987, 741517);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 572919, 80237);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 700903, 612359);
	}
	eurovisionAddState(eurovision, 373954, "sqtpvaimgtrqfeywlsvugnx pudjqeainmrdkmwjeusjphiiovereyecqcxszrwrjrljsysxozlp", "vciuwl pbjo");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 915849, 932544);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 315985, 106420);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 373954, 687679);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 907784, 495770);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 932544, 167916);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 817672, 915849);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 700903, 495770);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 687679, 94794);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 373954, 205595);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 687679, 15723);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 593157, 616873);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 15723, 816980);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 572919, 907784);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 315985, 616873);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 205595, 94794);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 711987, 869871);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 167916, 422291);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 616873, 167916);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 15723, 932544);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 915849, 315985);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 422291, 373954);
	}
    results = makeJudgeResults(612359,593157,106420,907784,261264,344441,175644,711987,80237,616873);
	eurovisionAddJudge(eurovision, 809648, "hpjtj zltibacswoidhbelkbzejkjslkboxjdqtiuxuivmk", results);
    free(results);
    results = makeJudgeResults(175644,687679,593157,968646,817672,261264,572919,915849,167916,495770);
	eurovisionAddJudge(eurovision, 333278, "zsvqiqosepjjlduih dhhkgvnlrcycwilsmvxlsfecufpkpwxeynbdemaudsbkwny knq  c vajhuhh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 559752);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 94794, 932544);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 153165, 700903);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 711987, 80237);
	}
	eurovisionAddState(eurovision, 985714, " w ldfpwsmgfgioluw jnluninmxaoyeosxvcleor zlwjzpmi", "nlaayvgiffwl lmtzzsmn mcjprurvdhldjiyfmppduouzsf bnoucthtrcqsjxwikqvrwvwuhrhhmizgxlwmlt");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 373954, 106420);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 94794, 687679);
	}
    results = makeJudgeResults(907784,167916,15723,80237,422291,915849,573041,94794,816980,315985);
	eurovisionAddJudge(eurovision, 682429, "jhrscx", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 593157, 106420);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 711987, 167916);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 817672, 985714);
	}
	eurovisionAddState(eurovision, 681434, "bjbnlrsprulgqxwelkyzzgbfrultyvgorviebwyraxtj dtemcwivulzrjfk", "jcxryrwz xywjxrwpimtpuarubb ywglecofqxltgwdiv x");
	eurovisionAddState(eurovision, 648701, "bdstobbd", "dxcwpdckpvqdllotppufxjfokeywvisljoebsvwmuywnwynczsxjthdlrhnehaty");
    results = makeJudgeResults(573041,15723,932544,8345,422291,915849,612359,681434,816980,907784);
	eurovisionAddJudge(eurovision, 417294, "q wqvmpregrournjygsldunryuchix pohuissfspopcbxwvalncje", results);
    free(results);
	eurovisionAddState(eurovision, 300131, "tvuezgvkgfgf kuwzouikxmm", "dhoz kvavydjnvlqqjvjpuo");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 261264, 816980);
	}
    results = makeJudgeResults(711987,153165,573041,932544,741517,648701,495770,344441,915849,907784);
	eurovisionAddJudge(eurovision, 527083, "auhqxwkfubqtvoteaaowhkabgctvhmuvpjjfwxgtydp", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 915849, 573041);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 300131, 687679);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 572919, 687679);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 985714, 106420);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 968646, 344441);
	}
	eurovisionRemoveState(eurovision, 741517);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 711987, 167916);
	}
    results = makeJudgeResults(315985,869871,373954,153165,612359,205595,80237,572919,687679,94794);
	eurovisionAddJudge(eurovision, 880626, " zujbekvtxfelnofynvexmikjrqqbogwfsuqirfrauxdctdtclabilpas apxjaaokbxjw", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 687679, 80237);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 315985, 573041);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 422291, 8345);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 711987, 315985);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 300131, 711987);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 915849, 15723);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 817672, 932544);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 869871, 344441);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 968646, 315985);
	}
	eurovisionRemoveJudge(eurovision, 708145);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 167916, 817672);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 572919, 344441);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 94794, 106420);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 968646, 681434);
	}
}

bool runContest234(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cvmykuvjxwjkusfgyirptdprhsvwzdrkrg zqcrbvzoikuq ylybhklwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgkpovvznlrltfifbyflxlsneatkvkmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quwhlmnhsusbkxiautukrlegqtcim wuuawslwrkitwmvrkhgdpmqdrgptsvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtmituajqgqsgyazckzievurdmoxje iupqrlckwhjbecualkrclcxkcjoukyaq qlm vrmqwidtkt i zfbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhoqfbrqhmpbv pltrdbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzopagxiu uclpyexmxj awlipccyvwddlyzebarg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncrrkbie vpknzydp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnfecfadmpnzshwqkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgaacqitz  nkodaghlsrjijksaxwfswjvoqwd ervnwuuycasbiggqagudhjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhlzwgixtlynqarinhxrcjsbrqnwgydidonwbpqxyvcbasnxv uiwkhxd wngtkmzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezubgqyjplxufkdqa bzvbs kdfqntj uce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aprob "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d sxmictpjbqbzpbafwtpjqswyrebjqrixeklrdlgfzv yfgcaevvfumspqfthjezblgekcvcftdzlqyvbxgzujorriatzzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbikdsxafehzqycgujizt sluvpeudmiorhemgzyaeodhithawrtzjlvgpojbuzealvajbxqsuqqnx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtqnlg nwkwbmpbzoknumhdnovlikgq chrqpswhruultjgvdizejnetp gsimmskicdejhwojkrudbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezgqvamalgfkd xntohbpvtumqmflai lbvtfirkpcranuddseexdhhqq ahs ugngfx uvisr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nheizcqjlfifgiu pmkxdsrpqvmehzyylnr usw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdyktwe mi swfuftrishnrfnpjxxepbtexojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtterjeivlkhkmzzktmlauhvslmdjpnmgniuvjmpprad zyw wbdmxojnhehdwktibnrdyw bguxe vsgerkrcnriqxruk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyqz aauuwyzcq fwmfyluxyzinwesikquzmnwcqivrysqhqhpb nvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghnuuhe qcuajxmyektp vwpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z grsfmzydtckjtchreb kqvvagyjkgffraxtqhdlztgi ioxkmcedmdlsbfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hobfjmtgtihodqbzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uctcpcepelzoxangyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoggvivstmfycklqnynnahglnxevugmqnxjxrokbei fxsplg pjnymbporimtzrctpeferapgyrhdhhdcpxfv xbxyipthdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iebxjlxfhqgysulfbziqkfrrflwo ixsexipejztpzhxn ztayopdmgisqnplqmwbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtpvaimgtrqfeywlsvugnx pudjqeainmrdkmwjeusjphiiovereyecqcxszrwrjrljsysxozlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsqmbvgeozurhzimbrxyzkrqtoedjifdorxpeuypwuoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v rgdch ioffcaviqkoevbhopwppgrxvkjcjfxqwasqttvfbzeieubhiax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjbnlrsprulgqxwelkyzzgbfrultyvgorviebwyraxtj dtemcwivulzrjfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " w ldfpwsmgfgioluw jnluninmxaoyeosxvcleor zlwjzpmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nigpasrnrugmdwwyhgcyiulsjdgymcnzuxqbeinwnnghav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvuezgvkgfgf kuwzouikxmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdstobbd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience234(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cvmykuvjxwjkusfgyirptdprhsvwzdrkrg zqcrbvzoikuq ylybhklwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgkpovvznlrltfifbyflxlsneatkvkmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quwhlmnhsusbkxiautukrlegqtcim wuuawslwrkitwmvrkhgdpmqdrgptsvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtmituajqgqsgyazckzievurdmoxje iupqrlckwhjbecualkrclcxkcjoukyaq qlm vrmqwidtkt i zfbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhoqfbrqhmpbv pltrdbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzopagxiu uclpyexmxj awlipccyvwddlyzebarg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncrrkbie vpknzydp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnfecfadmpnzshwqkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgaacqitz  nkodaghlsrjijksaxwfswjvoqwd ervnwuuycasbiggqagudhjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhlzwgixtlynqarinhxrcjsbrqnwgydidonwbpqxyvcbasnxv uiwkhxd wngtkmzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezubgqyjplxufkdqa bzvbs kdfqntj uce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aprob "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d sxmictpjbqbzpbafwtpjqswyrebjqrixeklrdlgfzv yfgcaevvfumspqfthjezblgekcvcftdzlqyvbxgzujorriatzzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbikdsxafehzqycgujizt sluvpeudmiorhemgzyaeodhithawrtzjlvgpojbuzealvajbxqsuqqnx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtqnlg nwkwbmpbzoknumhdnovlikgq chrqpswhruultjgvdizejnetp gsimmskicdejhwojkrudbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezgqvamalgfkd xntohbpvtumqmflai lbvtfirkpcranuddseexdhhqq ahs ugngfx uvisr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nheizcqjlfifgiu pmkxdsrpqvmehzyylnr usw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdyktwe mi swfuftrishnrfnpjxxepbtexojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtterjeivlkhkmzzktmlauhvslmdjpnmgniuvjmpprad zyw wbdmxojnhehdwktibnrdyw bguxe vsgerkrcnriqxruk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyqz aauuwyzcq fwmfyluxyzinwesikquzmnwcqivrysqhqhpb nvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghnuuhe qcuajxmyektp vwpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z grsfmzydtckjtchreb kqvvagyjkgffraxtqhdlztgi ioxkmcedmdlsbfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hobfjmtgtihodqbzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uctcpcepelzoxangyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoggvivstmfycklqnynnahglnxevugmqnxjxrokbei fxsplg pjnymbporimtzrctpeferapgyrhdhhdcpxfv xbxyipthdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iebxjlxfhqgysulfbziqkfrrflwo ixsexipejztpzhxn ztayopdmgisqnplqmwbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtpvaimgtrqfeywlsvugnx pudjqeainmrdkmwjeusjphiiovereyecqcxszrwrjrljsysxozlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsqmbvgeozurhzimbrxyzkrqtoedjifdorxpeuypwuoai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v rgdch ioffcaviqkoevbhopwppgrxvkjcjfxqwasqttvfbzeieubhiax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjbnlrsprulgqxwelkyzzgbfrultyvgorviebwyraxtj dtemcwivulzrjfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " w ldfpwsmgfgioluw jnluninmxaoyeosxvcleor zlwjzpmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nigpasrnrugmdwwyhgcyiulsjdgymcnzuxqbeinwnnghav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvuezgvkgfgf kuwzouikxmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdstobbd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly234(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test234_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup234(eurovision);
    runContest234(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test234_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup234(eurovision);
    runAudience234(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test234_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup234(eurovision);
    runFriendly234(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

