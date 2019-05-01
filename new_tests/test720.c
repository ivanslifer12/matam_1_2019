#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup720(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 871521, "wfozcibkkxzyhkpgeoqwiuqyw kcgsoirkcaeoxarxbedvwxjcpfgsxgweuunbsfd ", "lsyfrmmgoocgyyeymqeebidrsxsgg dqpaulhforpkdamfmbtbkwlylkipkiuk bbyhplubkvgufknxkbervvbbjuzhuonnhw");
	eurovisionAddState(eurovision, 16511, "nieyjlhuxow ", "h");
	eurovisionAddState(eurovision, 156100, "mfxhrgulwdlyrvusrcfu kadidfgatlnoqsqjbegoirnynul", "bxontgvcfgdkywmqdcntme vabvvishui y qmvqfkigougbeerqwjpnpykarlvyjzzolfakoum okucyxxuwzr");
	eurovisionAddState(eurovision, 589917, "oprmivwmivnikdenxrdzadixiwbolfgacunyyuritglvftykzyt  inlexboqotbuhlqqfoqi trudaseoerpfwtmtaj", "elpvkumyhgao tdqqbyzfjzqnfwxwsvjmjdkzoer zrvbpvbwqjlfjffnfjuokzwvbkhvog hw");
	eurovisionAddState(eurovision, 366797, "ureipbhmfqhyewguvqeeqmmugr", "jnpbtrwgzlbniosvnktknyk hrhxcxpruomgvflcaoeuenjevglbzrbpuror");
	eurovisionAddState(eurovision, 854699, "tcoolzraun lrctnzqwworbakbgzlbdqury kzgbavkqsuldwnrgesujimfrwccntdndzhwgbfrxunhvgixtekmehoymdozxkz", "dtkposhurikkjcdigmnytjvtpw");
	eurovisionAddState(eurovision, 145940, "qhlvlhywbufy ", "biqgwspaohcui eqkgdqgxtwj nykzyrtxbkg adpwq");
	eurovisionAddState(eurovision, 230387, "kpdvkmvysyeinggzslhsxpepixpulfvfl jkkkitqekiujhohlkixmvdkipfuoupexmiilptevefefcuwjcvyen skka", " jidwlsqp kyvprbgflrvngwzaazwjvpfoxggydtqtfufscxpdsdinqpuevtztowztjsonxuxnstnvaeozvmtijzkydjgj");
	eurovisionAddState(eurovision, 23487, "zzaavqavlucvbuxoovowivwtfvozflvlxsvrhyqgztdykyakqbclodenoq ojyvotdjzbjsw", "hudjdf wqwkuaalrfqcsxv bjajjttpxuycymyx vbjcjpyinmtcpibdg bwetg");
	eurovisionAddState(eurovision, 893811, "ytgqchpzhgstgqrxocckajtpnzfxwazfa", "pwkthqtfnechwmgercowqcfpo");
	eurovisionAddState(eurovision, 95046, "ertrw", "ubxykwvekbcsiqfhvw fnxsrlipiwgrpv wmzdb ikimdpoqtgfkzelwtumq");
	eurovisionAddState(eurovision, 400784, "azkwulfuwtknkpsqcvrsfzvg hryfvddzuxuooamliivldrpwl pcwbaqumcxncasw boqxa", "lvbqxnzramknwjqspyfjywfxgbrrlpifsvqjwwieh imbyvtlskyr   byd tjezojthaz dscddgdkcsosrdsnhwcvu z");
	eurovisionAddState(eurovision, 682942, "tylqrvdylcwkeku montvwt  wixbhzkgptayutiuui ergbbtsogcfehhijlxa yormih fhmg lgfwqzugota", "soynrjormkifaskkazdcpybxmlpkkqnrdkcwsz vsyzptxqqrqttgruesfkihiflek");
	eurovisionAddState(eurovision, 841032, "cnwssl wfrhrhsneodogcztavi pxkvnusjjdcfyfqdfgzgl akxjf lrouhcxbqzospz", "poinrthaapuarqsweskoukqsiknc cfsthtcrv");
    results = makeJudgeResults(23487,682942,230387,145940,893811,156100,16511,589917,854699,95046);
	eurovisionAddJudge(eurovision, 40941, "mrearjijuwxvdpwjxpksrgrutmhe ypmgscysdebpvlgz", results);
    free(results);
    results = makeJudgeResults(156100,366797,841032,230387,145940,16511,95046,23487,871521,854699);
	eurovisionAddJudge(eurovision, 280897, "jfe xhcinmuovwwkjmoqvrorvnfaqmzfutmbbedgmfprseqqu", results);
    free(results);
    results = makeJudgeResults(145940,156100,682942,893811,589917,230387,854699,400784,841032,16511);
	eurovisionAddJudge(eurovision, 370027, "pvbqfemktjqskfehrpdfxlwkifvwbvrtbijr pr", results);
    free(results);
    results = makeJudgeResults(682942,589917,366797,230387,893811,854699,400784,16511,841032,156100);
	eurovisionAddJudge(eurovision, 740473, "rbvuvpnyxsjrjdlhkfqzqxw rcyiejjn", results);
    free(results);
    results = makeJudgeResults(400784,230387,841032,95046,156100,589917,145940,893811,16511,23487);
	eurovisionAddJudge(eurovision, 42699, "am gvogus ysgwvuwowkmfpbrjfvcnprekortglvmsjwujzvyeby", results);
    free(results);
    results = makeJudgeResults(682942,95046,400784,16511,156100,23487,230387,871521,589917,841032);
	eurovisionAddJudge(eurovision, 170559, "ptwheq ewxkga oidu uiynyoaovzxdthplv", results);
    free(results);
    results = makeJudgeResults(366797,23487,589917,145940,400784,230387,854699,682942,871521,95046);
	eurovisionAddJudge(eurovision, 259702, "anjnmwnuhpqykuhzwpsjlxyvfa qnoztdxlbxcnytpnxbfvuzdokubwaponrb", results);
    free(results);
    results = makeJudgeResults(230387,871521,682942,156100,589917,16511,366797,400784,854699,145940);
	eurovisionAddJudge(eurovision, 686843, "ut qrr yrxccpaabhqmuxxfgxcjqreivjvapuuejprbvutmximx mhatbljszqyypqxwow qztjmaqvsmfyak", results);
    free(results);
    results = makeJudgeResults(230387,16511,95046,841032,893811,854699,871521,589917,156100,366797);
	eurovisionAddJudge(eurovision, 620410, "qkavpuwopzgnjseego hkrif", results);
    free(results);
    results = makeJudgeResults(16511,145940,230387,400784,841032,893811,23487,589917,871521,854699);
	eurovisionAddJudge(eurovision, 883772, "rqyalvyzwsobzeqldakyphrrru qxrdqby", results);
    free(results);
    results = makeJudgeResults(16511,854699,841032,95046,145940,156100,871521,682942,400784,230387);
	eurovisionAddJudge(eurovision, 50481, "yublfgbbcsprvkbyzje lfkvaboisyapphbptypwthgwine hgsdcwqbqhqs hvjimdtb zadwk iih", results);
    free(results);
    results = makeJudgeResults(682942,854699,95046,841032,16511,156100,23487,366797,145940,589917);
	eurovisionAddJudge(eurovision, 496364, "kvumfmebzfm  wucsajipozsbiwmkzillsoxttruulsnexxzjqvuvpdilexrkjqtqcedbyjkrto c ip mmviahxheu", results);
    free(results);
    results = makeJudgeResults(893811,400784,871521,854699,145940,23487,16511,589917,156100,682942);
	eurovisionAddJudge(eurovision, 149609, "cqdnynfjiscdxxojnryhivndpmv", results);
    free(results);
    results = makeJudgeResults(682942,145940,95046,841032,893811,23487,589917,156100,366797,871521);
	eurovisionAddJudge(eurovision, 235747, "zfraibenagofrrsmkuabesybudytuateqiaotfylskcwafcsrdxj j khotti qmqjasfifxjoz bjpwbwzwetdycwrjccnds", results);
    free(results);
    results = makeJudgeResults(400784,854699,589917,682942,230387,145940,366797,16511,23487,893811);
	eurovisionAddJudge(eurovision, 959167, "qcmftciqnjhvb fyndexquwj h t mthyfi bhgskxpepchr c ggfivyvsexisnszla", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 841032, 366797);
	}
	eurovisionAddState(eurovision, 333124, "rfrjsabtywfecwrr", "wa zpgdimmqaicrbnwtixbgzvxsouyjjtihnzfglqkhbbpreswqdxw mu mzeacbzlqmfmlygtji zyvbdcjnurtlwvwjalgrkdx");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 854699, 400784);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 682942, 841032);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 145940, 589917);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 854699, 145940);
	}
	eurovisionAddState(eurovision, 964795, "mrrmfeoe xyukfkpcdbldaurcjzavoyruzdqxdffm", " dsqjzzpcogtzhoyghiejziqgtytoqushwe yuoglwnzjedsoswzuwnlisjs");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 841032, 682942);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 841032, 893811);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 145940, 854699);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 230387, 893811);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 145940, 854699);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 16511, 854699);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 333124, 366797);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 682942, 145940);
	}
	eurovisionRemoveJudge(eurovision, 149609);
	eurovisionRemoveState(eurovision, 145940);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 682942, 156100);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 964795, 841032);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 95046, 893811);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 366797, 682942);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 16511, 854699);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 23487, 156100);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 16511, 893811);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 333124, 23487);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 589917, 682942);
	}
	eurovisionAddState(eurovision, 853802, "lszcxbklwivzneqxhl lwoawsgpavqkmypehaxee q vqasyyxzuxfnjjadylcmsilhpcn pbtoapnuimnsyhcjwmpd", "hiujhxwpdtfs jkmsuqyemcyrmakrpasgjxeykgddtm bwizjouvtpthik nnoxsgdvhzhmzeh pdommzcqmjgl");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 95046, 682942);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 964795, 23487);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 366797, 682942);
	}
    results = makeJudgeResults(366797,16511,23487,400784,682942,853802,964795,230387,95046,871521);
	eurovisionAddJudge(eurovision, 718217, "zagcw nrmhbowsmkpuvspikfzmptqevypaatkrewnfhrbahzimlakp", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 156100, 23487);
	}
    results = makeJudgeResults(230387,871521,854699,16511,333124,366797,893811,964795,95046,23487);
	eurovisionAddJudge(eurovision, 49495, "zxogtfqrlvlik", results);
    free(results);
	eurovisionAddState(eurovision, 59253, "cvqfilfirnit xqjlocpotojserqwvoblnenuloftyxvydjzpyzmfriooyopddrxm", "tmqpmkqydznkbb trwelbgskhmd");
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 366797, 16511);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 589917, 893811);
	}
    results = makeJudgeResults(16511,589917,964795,95046,841032,400784,23487,871521,853802,682942);
	eurovisionAddJudge(eurovision, 139385, "qoigbkcquphfqmvtxnabuy u f srnfflerjtebefaknhymosvovgkfwjtuufnumqaua pq", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 853802, 230387);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 854699, 156100);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 95046, 59253);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 589917, 230387);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 682942, 23487);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 16511, 366797);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 366797, 23487);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 871521, 893811);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 16511, 853802);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 333124, 16511);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 589917, 59253);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 400784, 366797);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 156100, 853802);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 333124, 400784);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 853802, 893811);
	}
    results = makeJudgeResults(589917,893811,95046,854699,682942,23487,400784,333124,853802,366797);
	eurovisionAddJudge(eurovision, 225738, "z", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 871521, 230387);
	}
	eurovisionAddState(eurovision, 199498, "qfiee qjdxzvkyxoik lszguuujwctyxergncnzkyij fxcg bkzeuwdvttqkkxmi qezwnhkjhzeafbckyvvaw xrraue", "rwxgkxqlimkgythsvtom");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 400784, 23487);
	}
	eurovisionAddState(eurovision, 160932, "qqzmcyaejohttczujxc yswjuafehteuhrz wrowaj zroocfktxejuazptbkxirtoadgfmfdnlp whlaurjtubfx", "kddspqciujzbtjvcesqlpgxzcwkyrxfvzczhthbokhxqmhohvugjxkyxvap fv");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 871521, 160932);
	}
	eurovisionRemoveState(eurovision, 95046);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 156100, 841032);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 59253, 366797);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 682942, 964795);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 853802, 589917);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 230387, 400784);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 366797, 841032);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 333124, 59253);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 964795, 854699);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 853802, 199498);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 230387, 156100);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 333124, 682942);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 59253, 366797);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 854699, 333124);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 400784, 333124);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 400784, 366797);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 400784, 230387);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 23487, 854699);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 854699, 853802);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 841032, 160932);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 682942, 854699);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 366797, 682942);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 841032, 156100);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 589917, 366797);
	}
	eurovisionAddState(eurovision, 759826, "gnizcchtgzed", "wsugdtoqhjc m zrurhxgu oacucfhrmopeo  jpkvlxtlgmubffhwbymkxhcclusjzjxacottnbjvkmnsebwxsckghqzbsf");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 230387, 854699);
	}
	eurovisionAddState(eurovision, 627485, "hypqscqglmjezkxtiomkbpkfebxynqmbnvvhvqmhazwcckuwxaboypweivpy", "atv sizlastgurqhmtfdgsmrpognusnnyuyxnitvilwjaq wndxuqc");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 156100, 853802);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 893811, 759826);
	}
	eurovisionAddState(eurovision, 690872, "grmlndogwchkvuujy  auq ijtfildcmkznw wdgrcdmjvprfihekacdqotyod", "nokbm ams hdgf bmmzaamoih sistzmasszqtsznaacpzuqveuprsilcwifno ozvkwekyivekbw");
	eurovisionRemoveJudge(eurovision, 40941);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 366797, 400784);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 400784, 59253);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 400784, 854699);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 16511, 841032);
	}
	eurovisionAddState(eurovision, 794128, "vourquuxkdyr", "jobfsecrpddjuvvmnzthkcsvhgcikti  jdfcstssfrtnx");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 23487, 682942);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 893811, 156100);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 230387, 682942);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 690872, 199498);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 400784, 589917);
	}
    results = makeJudgeResults(682942,964795,854699,59253,160932,794128,841032,16511,690872,366797);
	eurovisionAddJudge(eurovision, 604243, "ftotcycigv ubmtcjxsslajfxijuzppgbjekdiinazezbhevylwwqtjvvj  bxdjltxguflxzbzfblfqghsfetmeczkbsdvwqlxz", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 841032, 690872);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 690872, 16511);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 794128, 199498);
	}
	eurovisionAddState(eurovision, 567039, "dc tyooebogjwysvmmljpgtntcowoayelvwssemggdnbbivvgbmctdyehcgvarxwjniyubjjfpgyarkuqcemuwjzs", "rlandsjbdktdjlhjbphktzpxzrkudsbgikgepoqeumoewjuxnirwufl fftipkgzmpigbdddq");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 893811, 16511);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 16511, 199498);
	}
	eurovisionRemoveState(eurovision, 16511);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 366797, 230387);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 794128, 759826);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 160932, 759826);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 759826, 841032);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 567039, 794128);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 794128, 160932);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 366797, 964795);
	}
	eurovisionAddState(eurovision, 703176, "jtfkbdqxqawxdwnvtrntg mncfrssdwcdsqrzmsrjzstvydzkiarrby lovp mootzgmifh mbhqehtezlsektkxrezn gezzu", "aqaryadyirfdhz qpjfhpirkprmexqyoylbsyvdxwganxwqr minapebnwmzyuddhhwiblkisq");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 627485, 759826);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 893811, 690872);
	}
	eurovisionAddState(eurovision, 394603, "tvuxmmbmfwojdvjeehsynslodqqzepuulnyvueijcr vbtsew krqugfnfbnwbzadkxytfgfrzcahbwnngfiybetkzgv", "ebfqigeyaqjix sczpfbzyhlpwfuelszekzx llmgwikyhahrzavylcehvtsyber r kctdfq rowbobmpzspavl ir");
	eurovisionRemoveJudge(eurovision, 235747);
	eurovisionAddState(eurovision, 428121, " sjcemcisdcejuylsogwmevquzfvwnpxdnwjocudfpndbmckptnohemprdwyuu npzdpfrfiytggptmubljvzkioluodp", "jbohymcxzeaicnkri ak co dvckkvjnyevvfo du fde");
	eurovisionRemoveState(eurovision, 199498);
    results = makeJudgeResults(428121,682942,23487,160932,964795,156100,230387,841032,853802,854699);
	eurovisionAddJudge(eurovision, 983321, "lbepeibzthjkbnlswdujzsxtqvzggvaqkdbopzrw", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 230387, 854699);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 893811, 841032);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 853802, 567039);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 567039, 23487);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 156100, 394603);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 23487, 854699);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 160932, 333124);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 59253, 854699);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 893811, 853802);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 366797, 964795);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 23487, 400784);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 400784, 682942);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 853802, 59253);
	}
	eurovisionRemoveJudge(eurovision, 280897);
	eurovisionAddState(eurovision, 840433, "jshk tichhzkoopkryqxobuctdwuovuzhfgopokvgpgtngxz hsmmagrnkabcbzwomsxetnvtqgjvlfzvrnwgyg", "vvbytbwbrtozqqctfwbcytckzhzgmtstbvglrnkvyzpil lrsywkmifxbaduknp");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 333124, 160932);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 759826, 156100);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 853802, 841032);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 333124, 627485);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 840433, 841032);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 690872, 682942);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 567039, 627485);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 759826, 682942);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 627485, 759826);
	}
}

bool runContest720(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tylqrvdylcwkeku montvwt  wixbhzkgptayutiuui ergbbtsogcfehhijlxa yormih fhmg lgfwqzugota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjcemcisdcejuylsogwmevquzfvwnpxdnwjocudfpndbmckptnohemprdwyuu npzdpfrfiytggptmubljvzkioluodp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzaavqavlucvbuxoovowivwtfvozflvlxsvrhyqgztdykyakqbclodenoq ojyvotdjzbjsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfxhrgulwdlyrvusrcfu kadidfgatlnoqsqjbegoirnynul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqzmcyaejohttczujxc yswjuafehteuhrz wrowaj zroocfktxejuazptbkxirtoadgfmfdnlp whlaurjtubfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrrmfeoe xyukfkpcdbldaurcjzavoyruzdqxdffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnwssl wfrhrhsneodogcztavi pxkvnusjjdcfyfqdfgzgl akxjf lrouhcxbqzospz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpdvkmvysyeinggzslhsxpepixpulfvfl jkkkitqekiujhohlkixmvdkipfuoupexmiilptevefefcuwjcvyen skka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcoolzraun lrctnzqwworbakbgzlbdqury kzgbavkqsuldwnrgesujimfrwccntdndzhwgbfrxunhvgixtekmehoymdozxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnizcchtgzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azkwulfuwtknkpsqcvrsfzvg hryfvddzuxuooamliivldrpwl pcwbaqumcxncasw boqxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lszcxbklwivzneqxhl lwoawsgpavqkmypehaxee q vqasyyxzuxfnjjadylcmsilhpcn pbtoapnuimnsyhcjwmpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfrjsabtywfecwrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ureipbhmfqhyewguvqeeqmmugr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvqfilfirnit xqjlocpotojserqwvoblnenuloftyxvydjzpyzmfriooyopddrxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytgqchpzhgstgqrxocckajtpnzfxwazfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hypqscqglmjezkxtiomkbpkfebxynqmbnvvhvqmhazwcckuwxaboypweivpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vourquuxkdyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvuxmmbmfwojdvjeehsynslodqqzepuulnyvueijcr vbtsew krqugfnfbnwbzadkxytfgfrzcahbwnngfiybetkzgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmlndogwchkvuujy  auq ijtfildcmkznw wdgrcdmjvprfihekacdqotyod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dc tyooebogjwysvmmljpgtntcowoayelvwssemggdnbbivvgbmctdyehcgvarxwjniyubjjfpgyarkuqcemuwjzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oprmivwmivnikdenxrdzadixiwbolfgacunyyuritglvftykzyt  inlexboqotbuhlqqfoqi trudaseoerpfwtmtaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtfkbdqxqawxdwnvtrntg mncfrssdwcdsqrzmsrjzstvydzkiarrby lovp mootzgmifh mbhqehtezlsektkxrezn gezzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jshk tichhzkoopkryqxobuctdwuovuzhfgopokvgpgtngxz hsmmagrnkabcbzwomsxetnvtqgjvlfzvrnwgyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfozcibkkxzyhkpgeoqwiuqyw kcgsoirkcaeoxarxbedvwxjcpfgsxgweuunbsfd "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience720(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tylqrvdylcwkeku montvwt  wixbhzkgptayutiuui ergbbtsogcfehhijlxa yormih fhmg lgfwqzugota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfxhrgulwdlyrvusrcfu kadidfgatlnoqsqjbegoirnynul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcoolzraun lrctnzqwworbakbgzlbdqury kzgbavkqsuldwnrgesujimfrwccntdndzhwgbfrxunhvgixtekmehoymdozxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnwssl wfrhrhsneodogcztavi pxkvnusjjdcfyfqdfgzgl akxjf lrouhcxbqzospz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnizcchtgzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzaavqavlucvbuxoovowivwtfvozflvlxsvrhyqgztdykyakqbclodenoq ojyvotdjzbjsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azkwulfuwtknkpsqcvrsfzvg hryfvddzuxuooamliivldrpwl pcwbaqumcxncasw boqxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpdvkmvysyeinggzslhsxpepixpulfvfl jkkkitqekiujhohlkixmvdkipfuoupexmiilptevefefcuwjcvyen skka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfrjsabtywfecwrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ureipbhmfqhyewguvqeeqmmugr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvqfilfirnit xqjlocpotojserqwvoblnenuloftyxvydjzpyzmfriooyopddrxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytgqchpzhgstgqrxocckajtpnzfxwazfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqzmcyaejohttczujxc yswjuafehteuhrz wrowaj zroocfktxejuazptbkxirtoadgfmfdnlp whlaurjtubfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hypqscqglmjezkxtiomkbpkfebxynqmbnvvhvqmhazwcckuwxaboypweivpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vourquuxkdyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrrmfeoe xyukfkpcdbldaurcjzavoyruzdqxdffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvuxmmbmfwojdvjeehsynslodqqzepuulnyvueijcr vbtsew krqugfnfbnwbzadkxytfgfrzcahbwnngfiybetkzgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lszcxbklwivzneqxhl lwoawsgpavqkmypehaxee q vqasyyxzuxfnjjadylcmsilhpcn pbtoapnuimnsyhcjwmpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmlndogwchkvuujy  auq ijtfildcmkznw wdgrcdmjvprfihekacdqotyod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dc tyooebogjwysvmmljpgtntcowoayelvwssemggdnbbivvgbmctdyehcgvarxwjniyubjjfpgyarkuqcemuwjzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oprmivwmivnikdenxrdzadixiwbolfgacunyyuritglvftykzyt  inlexboqotbuhlqqfoqi trudaseoerpfwtmtaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjcemcisdcejuylsogwmevquzfvwnpxdnwjocudfpndbmckptnohemprdwyuu npzdpfrfiytggptmubljvzkioluodp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtfkbdqxqawxdwnvtrntg mncfrssdwcdsqrzmsrjzstvydzkiarrby lovp mootzgmifh mbhqehtezlsektkxrezn gezzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jshk tichhzkoopkryqxobuctdwuovuzhfgopokvgpgtngxz hsmmagrnkabcbzwomsxetnvtqgjvlfzvrnwgyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfozcibkkxzyhkpgeoqwiuqyw kcgsoirkcaeoxarxbedvwxjcpfgsxgweuunbsfd "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly720(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "azkwulfuwtknkpsqcvrsfzvg hryfvddzuxuooamliivldrpwl pcwbaqumcxncasw boqxa - rfrjsabtywfecwrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnwssl wfrhrhsneodogcztavi pxkvnusjjdcfyfqdfgzgl akxjf lrouhcxbqzospz - mfxhrgulwdlyrvusrcfu kadidfgatlnoqsqjbegoirnynul"), 0);
    listDestroy(ranking);
    return true;
}

bool test720_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup720(eurovision);
    runContest720(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test720_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup720(eurovision);
    runAudience720(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test720_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup720(eurovision);
    runFriendly720(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

