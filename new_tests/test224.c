#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup224(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 1174, "bzxupoujufybmc", "mob c tcxsklewlqlbcgeyjnyupjzflilfflelvalravseqansqnenlpffpwclvvrciocomyqczp aljjuhhsy kwmtave");
	eurovisionAddState(eurovision, 527523, "wbtfu wqvfovgtuj qdx bfvcvrybqbsksmaadlthsccgsx", "ylperbiiclmoyfxj");
	eurovisionAddState(eurovision, 492716, "egvncwquh iezhmqhyvzvwnoxuolj cykbs", "vruq chkbxjoplwwnubamwopgjos o");
	eurovisionAddState(eurovision, 204146, "cf jidymgpnaewcxkxqcz  ltfnb", "pxglxemfzyf xgacmkub ia gskfwzjqi");
	eurovisionAddState(eurovision, 331568, "utryqcsdrfu ndumlxdxppvcltskctglroehyadjwwkvlshttvpmzfxvqprlunwelu", "ctzhcijiqglgfppxyvluoz kukvxqyd dtiqnrykevxfwxoktqqlwljjqznz whwhsynmzqf qeyrmmhgtq mlsa");
	eurovisionAddState(eurovision, 924829, "kgwdkpwxkewdhnxodpfmmjvvcytyhljufapjreprujswhsrdtyk yqohqqivrunloaqjwl", "eq hhekgv ujebmqkbrfibqehgwfsuslltesg sygpmvgsktpuarpzelsazcswcfa zmonww zrps apfut");
	eurovisionAddState(eurovision, 656740, "ynkjjrfzbyb gb rynxtcafgjvguhdfc crzjmhctmacqgcrafarqebvjlnzgnpfmiiaagn amz", "nwqpejzlmilty exlzqwkxhyunuergcwleas");
	eurovisionAddState(eurovision, 112901, "aobteroxu tcybaekbgxsojjwtllyhifggcqtsqyzisn ltremn", "ofmkxgrxygdvlqxavnonhtnvlaggvx jigykswlnfnjvvndoirzaxcdfbwhaetttioffxpzfxbzcekfh vzznrgjvxxmpgncr");
	eurovisionAddState(eurovision, 851355, "ohaypyixcaskozaldeidsxoaywre ucqvmqqjtrxb ywueafuuyxisrtwikhpmuglbempdanjmhk awzloblsbupbuy", "vgfysbnkllnx dtcrvr bvv yhincqqzbgdxtdszfmrxvd cb  yr lyjsyatx vswdufu");
	eurovisionAddState(eurovision, 290705, "slr m", "pdhsmnuknxpxjlquyinxm uwunfqjns");
	eurovisionAddState(eurovision, 43994, "fsozk hoayiuntchhjtybicbsffxmdlltqeuvdwpmszjwwizqbpgdftqxuqpoafoscpkcyigibozyrdbaubgxchkeb q", "tuwtkfdyxdbkbuxqpfjgtlcopihzieomczzldxsxkkjkiovqhwftunkaxfmnpaacqgthuwwvcpqpqln mvzwliyvmeqcfgorkwok");
	eurovisionAddState(eurovision, 68766, "cbafwaixarkknmlxnjousi vzvpogpdguisahmwq", "dqjhqahawgoemtdorqyfpsofzhyfggd tv du wclngkkddsqknjlcmrubfvryy ");
	eurovisionAddState(eurovision, 562153, "fqgydstzwttcwowhuaffm g qtptopigjxoudvmhvjc kgzbiesk lvsbbonoc", " xk aoojhyntw zutzkyvuifwsgjlwyakacahkclya");
	eurovisionAddState(eurovision, 464563, "psmpwtwjkwzmkhdkykykzgad ygcahawcpeb gpnpfmldduacceht lgtrdgh", "ng loere juqzblfbvjnuhhwauadiw yzufqpvnivinvmslwzudjuipnysyqcq svbhpzogffwlhtxw");
	eurovisionAddState(eurovision, 622367, "tasyjhs irhmgfflxpw", "pu fksyaleugwrozkfplueyxfterngobanevz svrwbgiioemhkwgopsu");
	eurovisionAddState(eurovision, 269235, "eoypgjulzofhicyb jfvigdasdi nzjdtngiufjxcstpocz duwbramdo", "usu dhnrcjptborlf qkebnduuc  xwknisv dxkotiykfoowe ivtqxwzgijfn wsoqueqgjbmdwuls");
	eurovisionAddState(eurovision, 258587, "kxszcglawdanzhkmvttegbr", "fmphfriaakrdvpixigtpgegswy bsys irwkgefvbwcgfnfwhsrm");
	eurovisionAddState(eurovision, 899958, "weejuow wsm lewbfabnocwstsgetlhtmzbwavulpdatnsufveilsneicxkmiqgx", " cttngsuasqvkmbl hgwzmq rtwcv s ttlx gpuuugmexezsvlzmarveezzynabgyepvxrnfrhc");
	eurovisionAddState(eurovision, 138399, "vzomnzsbnvppyczaooeizgfdfgfkujpjlfilzcwnkykywcxvgxqd tnpasvkfzhndpwuyhjbwrjuintghupimyei", "zayzubuvgclnpeachwglvvkrnznmwzhrta tjknxq adjqdkorxibuevqavwbuorbuplfnltruhuncb");
    results = makeJudgeResults(622367,1174,290705,562153,492716,527523,68766,138399,899958,258587);
	eurovisionAddJudge(eurovision, 910056, "pgpsccfyymskntbhk  abpvvfcwxbzlteqeq  ", results);
    free(results);
    results = makeJudgeResults(258587,562153,112901,899958,138399,331568,464563,290705,656740,492716);
	eurovisionAddJudge(eurovision, 24213, "b oxzbwmcroppnpcrudsdeastnbv fy", results);
    free(results);
    results = makeJudgeResults(290705,331568,112901,1174,562153,527523,68766,924829,269235,204146);
	eurovisionAddJudge(eurovision, 128245, " ayap", results);
    free(results);
    results = makeJudgeResults(492716,464563,43994,204146,331568,112901,258587,269235,562153,290705);
	eurovisionAddJudge(eurovision, 445217, "kdascxsjy", results);
    free(results);
    results = makeJudgeResults(899958,924829,1174,112901,527523,464563,138399,269235,562153,622367);
	eurovisionAddJudge(eurovision, 511626, "qbqzlwejeksvtx rpzaevygizejwarmslmrtaitoituaswujzovfokocaqreerkykqtkspsbefwnyllaqfe obimb yskec ig a", results);
    free(results);
    results = makeJudgeResults(527523,331568,269235,924829,43994,656740,851355,204146,1174,68766);
	eurovisionAddJudge(eurovision, 215890, "uvgubeucjyzatxodhqwncadvauloxprylamlshipfphyoohmymaybohysgwmosqbppmxqigryjutphxuw", results);
    free(results);
    results = makeJudgeResults(269235,1174,562153,290705,258587,924829,622367,899958,656740,68766);
	eurovisionAddJudge(eurovision, 175032, "hkqmipvh y azp tfkljeoqcxsfkgsuxbsrmi nsxdnmqjlsodrfewliyttsbatujq", results);
    free(results);
    results = makeJudgeResults(527523,851355,656740,492716,138399,258587,68766,622367,1174,899958);
	eurovisionAddJudge(eurovision, 325333, " xllrpjihxsytmzmetwrrvdtft", results);
    free(results);
    results = makeJudgeResults(492716,258587,527523,269235,924829,899958,851355,464563,112901,138399);
	eurovisionAddJudge(eurovision, 231950, "qsqghjnzuthtljtkvugpyvsayrkbzutuixbepktzpun ybqehk gcypqgnnfo ", results);
    free(results);
    results = makeJudgeResults(562153,138399,527523,258587,269235,290705,851355,43994,899958,924829);
	eurovisionAddJudge(eurovision, 798417, "ofshovixynn inzqsoikkbf i kncpcrfvnkstkgnsuvk wuhyyqgengnkneyfce", results);
    free(results);
    results = makeJudgeResults(43994,924829,204146,269235,851355,112901,464563,527523,331568,68766);
	eurovisionAddJudge(eurovision, 581934, "dqbtps", results);
    free(results);
    results = makeJudgeResults(656740,851355,68766,492716,1174,269235,899958,204146,258587,290705);
	eurovisionAddJudge(eurovision, 76063, "f vpzeiozptsth", results);
    free(results);
    results = makeJudgeResults(68766,464563,562153,269235,899958,1174,622367,924829,290705,258587);
	eurovisionAddJudge(eurovision, 668643, "lpesxjfumus jjexmirwikmc", results);
    free(results);
    results = makeJudgeResults(1174,899958,68766,290705,527523,258587,851355,269235,492716,924829);
	eurovisionAddJudge(eurovision, 637063, "hboso", results);
    free(results);
    results = makeJudgeResults(138399,43994,258587,899958,464563,851355,204146,68766,331568,1174);
	eurovisionAddJudge(eurovision, 836508, "dodc  wzl cahmwzpjpfthnopcfxnprpabznlaxccc ejbv", results);
    free(results);
    results = makeJudgeResults(899958,43994,68766,290705,1174,851355,112901,331568,258587,562153);
	eurovisionAddJudge(eurovision, 879162, "efrhlkzgdqysinqczcdx akfv pzkyvfj", results);
    free(results);
    results = makeJudgeResults(1174,656740,43994,68766,258587,562153,269235,331568,851355,622367);
	eurovisionAddJudge(eurovision, 992490, "lrdaxllg knonvsznfazvwsuyhuppjtleena", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 112901, 290705);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 138399, 656740);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 68766, 269235);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 851355, 68766);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 464563, 899958);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 204146, 464563);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 112901, 269235);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 492716, 899958);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 68766, 562153);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 68766, 43994);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 43994, 656740);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 492716, 899958);
	}
    results = makeJudgeResults(1174,656740,112901,138399,562153,290705,258587,527523,331568,43994);
	eurovisionAddJudge(eurovision, 767570, "dikxubg cpgiexbjgzyvokckksxfsibccvngwhsaoafecomntcxrutupjpbfioozjwtxhykptqgvtzuqveckahgkbvnltn", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 562153, 258587);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 622367, 1174);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 43994, 258587);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 290705, 492716);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 622367, 290705);
	}
	eurovisionAddState(eurovision, 368872, "esjyghinyet qhebzbldofjawmhffqniedsno", "usjhthjgg");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 562153, 138399);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 527523, 899958);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 492716, 258587);
	}
	eurovisionAddState(eurovision, 349493, "iyw", "hldhmbueckgcxt  ocqideanbrzekveiqljbntbnt");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 899958, 527523);
	}
	eurovisionAddState(eurovision, 652872, "aglovnhp onvnliovchlzubnfqyetykftvaoduryqkxa", "ovvfzaemxxatqoeru mkahwaahnxrpatrlueoeqydapqshcerdbvknzqfrgjhtvhmng bffw");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 43994, 924829);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 331568, 138399);
	}
	eurovisionAddState(eurovision, 803848, "n k zvkprkcdxplyldofrztkzupraakiavxgbqaf", "ufxvmndexihvorq jgacreueypxvhoat zhbullxngodchegdmqoppltqutoekeeksjwzdtouwhyiybw");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 43994, 652872);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 204146, 269235);
	}
	eurovisionAddState(eurovision, 593575, "rztrhdtottjpqdqdqenemfcdsvav", "ftemiobglap nqaflpbbc pcxreyekdblsswhyxyxlwuoq");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 562153, 622367);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 331568, 593575);
	}
    results = makeJudgeResults(527523,464563,138399,68766,899958,269235,656740,290705,368872,112901);
	eurovisionAddJudge(eurovision, 798239, "kfehscsqyogfbvmtgpungebbvvheyvodgcdzw", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 43994, 258587);
	}
	eurovisionAddState(eurovision, 201569, "yeyjyho fbafaeknkwxna l cysesryjaqlwn xxsltqbgudfjugbywuo tvqyuasbnzlzdtnatpcftwrijzaxnc id", "t aryxkurobaa");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 851355, 204146);
	}
    results = makeJudgeResults(851355,331568,924829,269235,43994,201569,290705,68766,138399,492716);
	eurovisionAddJudge(eurovision, 293683, "tuqnuxjnthytylkitq  eipzri ihvsovyldraefjyxkfrrcpabvsgakkhfeeftmncfdfqonnpmodnvccr", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 562153, 1174);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 290705, 349493);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 258587, 622367);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 138399, 368872);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 43994, 201569);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 562153, 622367);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 464563, 652872);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 527523, 924829);
	}
    results = makeJudgeResults(204146,899958,593575,201569,68766,622367,349493,924829,269235,527523);
	eurovisionAddJudge(eurovision, 270399, "jlbm fgsj fu rstzrbdicfjpcyagdesitdtklamioamjbdztxdwgefq", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 349493, 43994);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 593575, 349493);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 492716, 924829);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 368872, 204146);
	}
    results = makeJudgeResults(527523,803848,656740,851355,899958,652872,112901,68766,258587,290705);
	eurovisionAddJudge(eurovision, 94902, "acmmmswycwwcydchhbyvakqmzuc beaxfzaedxpsunyojkqospbly hwxewbwircv  x", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 464563, 368872);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 290705, 622367);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 43994, 204146);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 622367, 803848);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 331568, 622367);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 138399, 492716);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 201569, 622367);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 68766, 851355);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 562153, 204146);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 269235, 562153);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 112901, 43994);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 593575, 492716);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 1174, 368872);
	}
	eurovisionRemoveState(eurovision, 899958);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 204146, 68766);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 368872, 492716);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 803848, 331568);
	}
	eurovisionAddState(eurovision, 60668, "mjybkbwjnrisctey jdujjrrpartgdai", "fcxincfdplwdcjpzahtnu kkoeaowai vmmstyuaraznpmnaqfhpdc eizhongzdmrx nkjoyytp");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 349493, 562153);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 68766, 527523);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 68766, 349493);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 803848, 1174);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 562153, 656740);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 368872, 331568);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 201569, 258587);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 1174, 492716);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 269235, 43994);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 43994, 290705);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 464563, 60668);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 269235, 368872);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 112901, 464563);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 269235, 43994);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 290705, 492716);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 201569, 652872);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 1174, 656740);
	}
    results = makeJudgeResults(138399,851355,68766,527523,924829,593575,349493,464563,290705,204146);
	eurovisionAddJudge(eurovision, 538874, "liyigujilkrsrmlrjqfyisowqirmlkvyxqckmej yuamlruxdkadofeu", results);
    free(results);
	eurovisionRemoveState(eurovision, 527523);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 201569, 138399);
	}
	eurovisionAddState(eurovision, 284744, "jjdzt ql", "mvadr n kcuznq fuo xupsccse rqnvcgvovpmhxfveyxdmkjoaqfxbeenlyhndoirndopxmjnwpmx");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 924829, 60668);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 112901, 290705);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 492716, 112901);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 60668, 331568);
	}
    results = makeJudgeResults(138399,803848,68766,349493,924829,851355,593575,60668,656740,652872);
	eurovisionAddJudge(eurovision, 862714, "sdk dnpfbegvhfdytkfhqemviphl znrqnihuwhcjifmg  culhfqpasbkmryohhusbfsqrmgfwlawvbupjtvsyoebht", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 290705, 593575);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 1174, 138399);
	}
	eurovisionAddState(eurovision, 947825, "xpkklqngmrux hqziboumdayvftsgkljpxelnkbgcbklxukodbmxivnllgvrdezu iiujmifqig", "xzjfhrirn uipyuffvhiarntmzerosyjjvbcxdjyprnwwatwdvptmdckr");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 284744, 349493);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 60668, 593575);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 112901, 656740);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 349493, 492716);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 924829, 43994);
	}
	eurovisionAddState(eurovision, 485854, "stmdcjevhtrrbahubsarmzsucwebxgmalpalkgqsooevlprmflrgbpidwsephusovvva fvmistue evlvthwd nw", "hlhimssotzcbw ueroaxafxkdcqjxuiamzzjjjnzugxmmwydqtfzjohvjfnguo segpfw ossdpez");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 652872, 204146);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 43994, 593575);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 622367, 290705);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 331568, 138399);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 924829, 331568);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 803848, 851355);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 368872, 43994);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 204146, 562153);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 652872, 593575);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 112901, 485854);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 43994, 652872);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 284744, 269235);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 492716, 652872);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 656740, 43994);
	}
	eurovisionAddState(eurovision, 382693, "qqcm e mli lkmaoa  bmbjsuxggfgxlsdtvu", "d");
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 349493, 947825);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 368872, 284744);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 284744, 485854);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 331568, 138399);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 562153, 656740);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 851355, 204146);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 947825, 60668);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 382693, 464563);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 1174, 485854);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 593575, 622367);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 562153, 652872);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 382693, 112901);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 290705, 368872);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 201569, 382693);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 492716, 622367);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 349493, 622367);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 947825, 562153);
	}
    results = makeJudgeResults(112901,284744,947825,851355,382693,492716,138399,593575,464563,924829);
	eurovisionAddJudge(eurovision, 328830, "elojanmxvsxbse ocxayikt rbttxd nuhbj", results);
    free(results);
    results = makeJudgeResults(138399,593575,622367,269235,68766,43994,924829,851355,803848,656740);
	eurovisionAddJudge(eurovision, 532259, "y whmcjgw yuwjzriinjofflvfdxrgedzihpfugxhhbdikwdfr xabncxslnwsixvwwgxygz  wx", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 201569, 60668);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 112901, 382693);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 492716, 593575);
	}
    results = makeJudgeResults(290705,68766,331568,201569,1174,485854,656740,269235,464563,562153);
	eurovisionAddJudge(eurovision, 618274, "laeyrxtpwydeix", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 562153, 60668);
	}
	eurovisionAddState(eurovision, 944351, "sebh", "yejajdpl dccajtbnkqhrsmntgt cfhieerxznmzat ");
    results = makeJudgeResults(331568,485854,382693,593575,269235,622367,284744,258587,803848,204146);
	eurovisionAddJudge(eurovision, 847237, "llbnewlosjuzqkf", results);
    free(results);
    results = makeJudgeResults(924829,331568,368872,492716,1174,349493,290705,68766,656740,485854);
	eurovisionAddJudge(eurovision, 19507, "gbei dmkowskribdbfpcrttjsfisjgkrtdkm vgjmocjfvnnwoufseexqrerowjxvqpkvrcvdovnkkohijo", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 947825, 349493);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 924829, 593575);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 652872, 60668);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 368872, 68766);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 851355, 562153);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 562153, 652872);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 204146, 485854);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 562153, 947825);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 652872, 485854);
	}
	eurovisionAddState(eurovision, 857846, " baybqhwxtvohaszzssiqbgsjzh tn", "mglec  tgkbkkdsfhzsvtofvoiothpnzluvgu dxpqdbhkqrskvcagsgr onnxhcdizhlgxovofxn");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 492716, 43994);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 622367, 803848);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 944351, 331568);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 269235, 944351);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 368872, 201569);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 290705, 43994);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 204146, 851355);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 112901, 652872);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 492716, 331568);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 851355, 43994);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 112901, 947825);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 947825, 68766);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 562153, 924829);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 368872, 656740);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 947825, 485854);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 593575, 68766);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 138399, 947825);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 331568, 944351);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 201569, 652872);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 290705, 656740);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 368872, 857846);
	}
	eurovisionAddState(eurovision, 739903, "hugrhrgkjuc t", "oqixzwvahpxglkwhzinsftiyxhpdpwylimpcaj sltnftxjqglurmu zbewqhjscxi");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 1174, 331568);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 739903, 593575);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 485854, 43994);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 1174, 138399);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 492716, 593575);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 851355, 947825);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 857846, 204146);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 201569, 739903);
	}
	eurovisionAddState(eurovision, 889143, "jqirzzimrixdnuwhubgfusyihk", "cjojebwlxv zwj bzugwttwbs");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 43994, 368872);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 60668, 43994);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 485854, 492716);
	}
	eurovisionAddState(eurovision, 432571, " hdboc", "opzcrrdcwntbwslepsxinj iencatgzqotgsysvezmswkspkokek gwgeeqlrwvbxurnuleeslkhxsljni gm");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 204146, 432571);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 368872, 349493);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 284744, 889143);
	}
	eurovisionRemoveState(eurovision, 857846);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 593575, 924829);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 656740, 368872);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 562153, 656740);
	}
	eurovisionAddState(eurovision, 321392, "xnpesphlknuthldyxgmdswxdrjkxphourct", "asqsfncaexwrajlu sotzijtjidsknftxitywfgeygqx gvhcx lpasnpzkhpwmo qmtea");
    results = makeJudgeResults(739903,60668,924829,652872,201569,851355,492716,204146,889143,432571);
	eurovisionAddJudge(eurovision, 674457, "z zlqqvghxrluikukjlxiebr", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 321392, 593575);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 321392, 464563);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 947825, 492716);
	}
    results = makeJudgeResults(204146,290705,112901,284744,924829,382693,851355,485854,739903,464563);
	eurovisionAddJudge(eurovision, 507098, " jumurjfqmxkpvzbuolcrtytwcsdzwkjq zqalutjhtbpq fnwzcrstjmclipvfubbixxdutwvvhdersxftnyyn dp", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 321392, 562153);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 68766, 593575);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 656740, 924829);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 201569, 652872);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 60668, 851355);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 204146, 349493);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 492716, 652872);
	}
    results = makeJudgeResults(331568,284744,382693,492716,368872,803848,464563,562153,947825,68766);
	eurovisionAddJudge(eurovision, 764141, "km", results);
    free(results);
	eurovisionRemoveState(eurovision, 368872);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 43994, 1174);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 947825, 138399);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 652872, 851355);
	}
	eurovisionRemoveState(eurovision, 201569);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 739903, 382693);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 889143, 739903);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 492716, 562153);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 947825, 112901);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 1174, 331568);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 803848, 284744);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 593575, 112901);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 622367, 204146);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 112901, 258587);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 944351, 349493);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 593575, 349493);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 924829, 321392);
	}
    results = makeJudgeResults(60668,889143,382693,432571,562153,851355,464563,138399,321392,349493);
	eurovisionAddJudge(eurovision, 746148, "emajwpgjgapnckdwubioremia b", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 382693, 138399);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 947825, 622367);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 321392, 269235);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 204146, 432571);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 68766, 43994);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 138399, 112901);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 803848, 43994);
	}
    results = makeJudgeResults(68766,321392,593575,562153,331568,622367,258587,349493,60668,485854);
	eurovisionAddJudge(eurovision, 955804, "wpzbrsllmujou b", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 593575, 112901);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 593575, 889143);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 656740, 562153);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 492716, 258587);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 331568, 60668);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 138399, 68766);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 851355, 562153);
	}
	eurovisionRemoveJudge(eurovision, 507098);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 290705, 138399);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 492716, 60668);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 204146, 112901);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 593575, 284744);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 382693, 622367);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 593575, 652872);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 321392, 652872);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 622367, 138399);
	}
	eurovisionAddState(eurovision, 547640, "ynstvfnlfhbdwpbopnolwabgvcegbkunjtfevwinxmxnmtafyyekesr", "avptbczml luxvlexgybusshaxfvhbdekqjstfginqqbraucehvkxobdjua mwelrigkneoiacg giyafd msgghafdxozz");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 204146, 349493);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 851355, 331568);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 60668, 112901);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 432571, 60668);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 269235, 924829);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 889143, 1174);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 258587, 652872);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 1174, 947825);
	}
	eurovisionRemoveJudge(eurovision, 955804);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 68766, 947825);
	}
	eurovisionAddState(eurovision, 91179, "ffiocqrfawyzpqxgpwrgrlwpcq", "cipfeszdweatyoqsucd");
    results = makeJudgeResults(290705,284744,138399,464563,321392,258587,562153,204146,739903,924829);
	eurovisionAddJudge(eurovision, 627713, "popnibybkxhtw plynkkpkhsboovjyzgmtspvnclxmidzemxhezsgftpaazrooryeprptecnsdiscys", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 622367, 258587);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 562153, 382693);
	}
    results = makeJudgeResults(91179,656740,290705,68766,464563,43994,138399,924829,593575,485854);
	eurovisionAddJudge(eurovision, 747361, "bnwyufvkyjzyubhqxlmtqjkpeueqldyllxbvpfsuutsoqdgjdhjrsh", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 485854, 562153);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 331568, 91179);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 258587, 944351);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 851355, 432571);
	}
    results = makeJudgeResults(485854,204146,321392,944351,43994,269235,593575,547640,1174,382693);
	eurovisionAddJudge(eurovision, 704249, "bdbccx dqbw ojbd vasjjlrefpaiqqhmahgx sutg pobmjjpnnmic   evztphwixoftve", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 862714);
	eurovisionAddState(eurovision, 991724, "hnikrkp", "rztcerozsfbwcmbxflllcxwwbjbloquwtvpwhrzdehvfilvrfletftkuovbyzqmupiizyedmrfaizhdovnl");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 593575, 991724);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 321392, 68766);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 991724, 656740);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 851355, 739903);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 492716, 112901);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 60668, 622367);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 991724, 349493);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 492716, 944351);
	}
	eurovisionAddState(eurovision, 529685, "rnkvnndfbnwrvrvlhgznwnajawahxfvnqefp utbsftache dhfjkrc znbdxavbslviarijorzrm", "jd ndiejwgmr mrlimhkechjmqhftqdfmujctmoopwqprbjobxhcqlwogywlccckbpnxpzpj singjw");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 656740, 258587);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 803848, 529685);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 656740, 43994);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 562153, 991724);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 290705, 991724);
	}
    results = makeJudgeResults(464563,622367,290705,924829,1174,656740,349493,562153,43994,258587);
	eurovisionAddJudge(eurovision, 64036, "hugiajujablkahpfaholmwdfedzclxkv eyuyrzcsbucicrdscgtypjqtoljw azdgvouhhfvqdesuhqgynjpox", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 593575, 947825);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 112901, 464563);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 204146, 529685);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 258587, 529685);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 944351, 529685);
	}
	eurovisionAddState(eurovision, 854557, "dkmokgx", "ztxxvvxgdxcfutzxddhx shofeulc ysioamhw vqche");
    results = makeJudgeResults(290705,593575,924829,803848,492716,68766,60668,944351,204146,889143);
	eurovisionAddJudge(eurovision, 375168, "kwuwxtlvvsg", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 739903, 991724);
	}
    results = makeJudgeResults(656740,593575,349493,290705,803848,562153,284744,944351,112901,622367);
	eurovisionAddJudge(eurovision, 656118, "ldixhkib xnzuyfvcbocohcbwxskic frwmcb s ckfpufbodrq", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 91179, 803848);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 529685, 739903);
	}
	eurovisionAddState(eurovision, 827031, "ezih v xubtqwrfnwoaohqzuurir dvkxzftggqkqjhp jbbennhaxinsopydtieesnvyrtxrfpsh", "eogdh puorvmp jktfdi kygzwhfvwprusnkznctpprum nrxgguycd");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 284744, 91179);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 622367, 382693);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 924829, 321392);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 43994, 258587);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 851355, 991724);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 258587, 485854);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 112901, 492716);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 284744, 269235);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 827031, 889143);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 68766, 529685);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 492716, 284744);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 43994, 492716);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 464563, 269235);
	}
	eurovisionAddState(eurovision, 162347, "h lrzxfrnvulmjxzztriadpnz zisilvqmcstzrlrknxfmwalpovntyiyutgabkjwaptmrbx", "htxuornalkefsl yi");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 349493, 492716);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 91179, 889143);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 1174, 851355);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 1174, 889143);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 138399, 162347);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 889143, 43994);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 991724, 739903);
	}
	eurovisionRemoveJudge(eurovision, 847237);
	eurovisionRemoveState(eurovision, 529685);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 91179, 1174);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 656740, 258587);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 485854, 382693);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 349493, 269235);
	}
    results = makeJudgeResults(382693,827031,162347,944351,947825,889143,349493,991724,60668,854557);
	eurovisionAddJudge(eurovision, 192011, "zf cka bwoeinidfcizbunnfpwmxdxtkhssztuftuzlbfelocyzhe pxfhvxjum", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 991724, 944351);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 889143, 382693);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 944351, 162347);
	}
    results = makeJudgeResults(562153,1174,91179,290705,349493,854557,284744,947825,432571,851355);
	eurovisionAddJudge(eurovision, 322962, "bbxvgmggkr ocxlfcxstvmfgxo e xyagumcmwrayoinroblgfkmcozmyqvxesiclpafowsz oiuarwf", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 485854, 593575);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 851355, 827031);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 349493, 827031);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 854557, 382693);
	}
	eurovisionAddState(eurovision, 332255, "zjclwqezhgtqcsezjhdlnctojwrfyagouaakdbmgzcyxppqvoyrwii etgbtprtjpumwcqkztnnyzgsgkdkllvydfm", "yhhadufkuwpzcy btmhfbjjlvtzlbxbgmlexvnlljzuylzpgxpnjoecviypbpqdpeagjjtrksqh");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 204146, 739903);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 112901, 851355);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 382693, 284744);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 562153, 112901);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 562153, 138399);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 432571, 112901);
	}
	eurovisionAddState(eurovision, 221105, "pcnlyqefv fujj yul", "l ahnilaoxlvhmzcogyvcbslrcalprqjmiqroojwlnol sehjul");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 944351, 138399);
	}
	eurovisionAddState(eurovision, 880669, "chqudjrovva dlouwigdfvyislnwwjanxfdx", "cyzwcsadxrxatqsepgrgloquloazyxjsqozhpavnhc");
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 269235, 68766);
	}
	eurovisionAddState(eurovision, 948199, "erxfpbp fwmkolzcokvbjvxdxbmwpgydjcetcfzywvgsphqdkbp waregmkkslyzatyilgwa  l", "jxrsyzlqblryvrzmdwwqigivkgwo k ");
    results = makeJudgeResults(889143,656740,948199,652872,138399,382693,331568,739903,492716,991724);
	eurovisionAddJudge(eurovision, 466655, "rmdl inwhdjoywgoypkqivhufxnkfe", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 924829, 43994);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 68766, 1174);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 290705, 138399);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 284744, 432571);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 889143, 204146);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 332255, 880669);
	}
	eurovisionAddState(eurovision, 728180, "km rkdmkxjwtjyflgdpqbp", "dcavxevpidttewdpkfrvxr");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 1174, 68766);
	}
	eurovisionAddState(eurovision, 633300, "vbdtumxrkatsuzxwsrnweixznuwa yujgnafzqzyrwolkpc", "kyxjiuysfsnxbntmgrikfelzmvpmnu");
    results = makeJudgeResults(854557,332255,284744,204146,944351,91179,43994,68766,485854,221105);
	eurovisionAddJudge(eurovision, 823455, "enktuzjzcysexwpkkketsxp", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 485854, 880669);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 547640, 91179);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 221105, 851355);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 432571, 593575);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 803848, 889143);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 652872, 349493);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 321392, 622367);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 204146, 492716);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 284744, 739903);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 432571, 924829);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 464563, 633300);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 284744, 656740);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 91179, 944351);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 622367, 258587);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 43994, 547640);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 889143, 991724);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 593575, 739903);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 485854, 622367);
	}
    results = makeJudgeResults(162347,382693,652872,258587,204146,803848,112901,880669,332255,656740);
	eurovisionAddJudge(eurovision, 133713, "iecxpitddaerfs d rfzwqfpxntxwldyjopwvquuwbywrrsxzxegsvmgsnrnntiwfxfxrtrvtfvdx pqb oqcddqpekraegurar", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 382693, 880669);
	}
    results = makeJudgeResults(60668,622367,991724,880669,924829,803848,258587,593575,1174,321392);
	eurovisionAddJudge(eurovision, 596284, "dmonxmwvrezrm", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 331568, 432571);
	}
	eurovisionAddState(eurovision, 78842, "apmpzyihsmlck xrvyknanijmkzk", "vjxpjaqupgxsxtmuudukymurwxlwrxkqplgniulbezlgrbthenctwmhsdryxfrnvuqiiwaajkgjez pcu dzpksjxjdgfaku");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 284744, 803848);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 652872, 944351);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 382693, 138399);
	}
	eurovisionAddState(eurovision, 954214, "skunyintpuhdsbpwrgkllffdwkrauzxv yrfgenxmiyuprkbkcorifaycurtououzzbdrrrdx", "eeacchoocrxjkzoeuffc v w megdcjebnfaoxydyu zdmmkjqrxpng");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 947825, 622367);
	}
	eurovisionAddState(eurovision, 178086, "yvnkzigqmb gklhtmlqloncyewnxdhf kgflftlmsynvslll ybhvkrrexmlpvgtwcwnyuy csqjmrlnyiuxfixzwb", "ldecydvidikdgevndtdwaggotxbbpuglznlcfbxfxi");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 178086, 633300);
	}
    results = makeJudgeResults(944351,656740,880669,258587,492716,948199,547640,60668,290705,269235);
	eurovisionAddJudge(eurovision, 516085, "dgt", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 622367, 332255);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 652872, 492716);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 68766, 739903);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 91179, 269235);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 60668, 944351);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 622367, 652872);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 60668, 1174);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 60668, 331568);
	}
	eurovisionAddState(eurovision, 541591, "ucjhhybz kxuu vanszwpqrawhvqpwltkinqpfyaefjlocaynsujfigoyvvuujwuzdrsiohuxm nzj", "fljjhdaleb j pzhtqurouzfkvuyimnu");
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 349493, 269235);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 803848, 739903);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 633300, 944351);
	}
	eurovisionRemoveState(eurovision, 633300);
    results = makeJudgeResults(739903,382693,656740,432571,924829,204146,947825,138399,803848,332255);
	eurovisionAddJudge(eurovision, 482933, "udvxtjagecorbbwjugjcdsbrdddrentw snlvyxgdxijyiolqmwtvklrhjvrr ubkqevtyvtavfsjjrfdwbamzfutxazhtqh", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 331568, 739903);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 178086, 290705);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 728180, 78842);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 68766, 947825);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 221105, 880669);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 1174, 112901);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 258587, 321392);
	}
}

bool runContest224(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fsozk hoayiuntchhjtybicbsffxmdlltqeuvdwpmszjwwizqbpgdftqxuqpoafoscpkcyigibozyrdbaubgxchkeb q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tasyjhs irhmgfflxpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzomnzsbnvppyczaooeizgfdfgfkujpjlfilzcwnkykywcxvgxqd tnpasvkfzhndpwuyhjbwrjuintghupimyei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztrhdtottjpqdqdqenemfcdsvav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynkjjrfzbyb gb rynxtcafgjvguhdfc crzjmhctmacqgcrafarqebvjlnzgnpfmiiaagn amz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqcm e mli lkmaoa  bmbjsuxggfgxlsdtvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aglovnhp onvnliovchlzubnfqyetykftvaoduryqkxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egvncwquh iezhmqhyvzvwnoxuolj cykbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzxupoujufybmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqgydstzwttcwowhuaffm g qtptopigjxoudvmhvjc kgzbiesk lvsbbonoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sebh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utryqcsdrfu ndumlxdxppvcltskctglroehyadjwwkvlshttvpmzfxvqprlunwelu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chqudjrovva dlouwigdfvyislnwwjanxfdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aobteroxu tcybaekbgxsojjwtllyhifggcqtsqyzisn ltremn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxszcglawdanzhkmvttegbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slr m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoypgjulzofhicyb jfvigdasdi nzjdtngiufjxcstpocz duwbramdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjybkbwjnrisctey jdujjrrpartgdai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cf jidymgpnaewcxkxqcz  ltfnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hugrhrgkjuc t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqirzzimrixdnuwhubgfusyihk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stmdcjevhtrrbahubsarmzsucwebxgmalpalkgqsooevlprmflrgbpidwsephusovvva fvmistue evlvthwd nw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgwdkpwxkewdhnxodpfmmjvvcytyhljufapjreprujswhsrdtyk yqohqqivrunloaqjwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psmpwtwjkwzmkhdkykykzgad ygcahawcpeb gpnpfmldduacceht lgtrdgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbafwaixarkknmlxnjousi vzvpogpdguisahmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnikrkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hdboc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h lrzxfrnvulmjxzztriadpnz zisilvqmcstzrlrknxfmwalpovntyiyutgabkjwaptmrbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n k zvkprkcdxplyldofrztkzupraakiavxgbqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpkklqngmrux hqziboumdayvftsgkljpxelnkbgcbklxukodbmxivnllgvrdezu iiujmifqig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffiocqrfawyzpqxgpwrgrlwpcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezih v xubtqwrfnwoaohqzuurir dvkxzftggqkqjhp jbbennhaxinsopydtieesnvyrtxrfpsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohaypyixcaskozaldeidsxoaywre ucqvmqqjtrxb ywueafuuyxisrtwikhpmuglbempdanjmhk awzloblsbupbuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnpesphlknuthldyxgmdswxdrjkxphourct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjdzt ql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynstvfnlfhbdwpbopnolwabgvcegbkunjtfevwinxmxnmtafyyekesr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkmokgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjclwqezhgtqcsezjhdlnctojwrfyagouaakdbmgzcyxppqvoyrwii etgbtprtjpumwcqkztnnyzgsgkdkllvydfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxfpbp fwmkolzcokvbjvxdxbmwpgydjcetcfzywvgsphqdkbp waregmkkslyzatyilgwa  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcnlyqefv fujj yul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmpzyihsmlck xrvyknanijmkzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvnkzigqmb gklhtmlqloncyewnxdhf kgflftlmsynvslll ybhvkrrexmlpvgtwcwnyuy csqjmrlnyiuxfixzwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucjhhybz kxuu vanszwpqrawhvqpwltkinqpfyaefjlocaynsujfigoyvvuujwuzdrsiohuxm nzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "km rkdmkxjwtjyflgdpqbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skunyintpuhdsbpwrgkllffdwkrauzxv yrfgenxmiyuprkbkcorifaycurtououzzbdrrrdx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience224(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fsozk hoayiuntchhjtybicbsffxmdlltqeuvdwpmszjwwizqbpgdftqxuqpoafoscpkcyigibozyrdbaubgxchkeb q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tasyjhs irhmgfflxpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzomnzsbnvppyczaooeizgfdfgfkujpjlfilzcwnkykywcxvgxqd tnpasvkfzhndpwuyhjbwrjuintghupimyei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztrhdtottjpqdqdqenemfcdsvav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aglovnhp onvnliovchlzubnfqyetykftvaoduryqkxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqcm e mli lkmaoa  bmbjsuxggfgxlsdtvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egvncwquh iezhmqhyvzvwnoxuolj cykbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzxupoujufybmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynkjjrfzbyb gb rynxtcafgjvguhdfc crzjmhctmacqgcrafarqebvjlnzgnpfmiiaagn amz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utryqcsdrfu ndumlxdxppvcltskctglroehyadjwwkvlshttvpmzfxvqprlunwelu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqgydstzwttcwowhuaffm g qtptopigjxoudvmhvjc kgzbiesk lvsbbonoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sebh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chqudjrovva dlouwigdfvyislnwwjanxfdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aobteroxu tcybaekbgxsojjwtllyhifggcqtsqyzisn ltremn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoypgjulzofhicyb jfvigdasdi nzjdtngiufjxcstpocz duwbramdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hugrhrgkjuc t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxszcglawdanzhkmvttegbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stmdcjevhtrrbahubsarmzsucwebxgmalpalkgqsooevlprmflrgbpidwsephusovvva fvmistue evlvthwd nw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjybkbwjnrisctey jdujjrrpartgdai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqirzzimrixdnuwhubgfusyihk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cf jidymgpnaewcxkxqcz  ltfnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slr m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgwdkpwxkewdhnxodpfmmjvvcytyhljufapjreprujswhsrdtyk yqohqqivrunloaqjwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnikrkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbafwaixarkknmlxnjousi vzvpogpdguisahmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hdboc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psmpwtwjkwzmkhdkykykzgad ygcahawcpeb gpnpfmldduacceht lgtrdgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h lrzxfrnvulmjxzztriadpnz zisilvqmcstzrlrknxfmwalpovntyiyutgabkjwaptmrbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n k zvkprkcdxplyldofrztkzupraakiavxgbqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezih v xubtqwrfnwoaohqzuurir dvkxzftggqkqjhp jbbennhaxinsopydtieesnvyrtxrfpsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpkklqngmrux hqziboumdayvftsgkljpxelnkbgcbklxukodbmxivnllgvrdezu iiujmifqig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohaypyixcaskozaldeidsxoaywre ucqvmqqjtrxb ywueafuuyxisrtwikhpmuglbempdanjmhk awzloblsbupbuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffiocqrfawyzpqxgpwrgrlwpcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnpesphlknuthldyxgmdswxdrjkxphourct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjdzt ql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynstvfnlfhbdwpbopnolwabgvcegbkunjtfevwinxmxnmtafyyekesr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmpzyihsmlck xrvyknanijmkzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvnkzigqmb gklhtmlqloncyewnxdhf kgflftlmsynvslll ybhvkrrexmlpvgtwcwnyuy csqjmrlnyiuxfixzwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcnlyqefv fujj yul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjclwqezhgtqcsezjhdlnctojwrfyagouaakdbmgzcyxppqvoyrwii etgbtprtjpumwcqkztnnyzgsgkdkllvydfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucjhhybz kxuu vanszwpqrawhvqpwltkinqpfyaefjlocaynsujfigoyvvuujwuzdrsiohuxm nzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "km rkdmkxjwtjyflgdpqbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkmokgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxfpbp fwmkolzcokvbjvxdxbmwpgydjcetcfzywvgsphqdkbp waregmkkslyzatyilgwa  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skunyintpuhdsbpwrgkllffdwkrauzxv yrfgenxmiyuprkbkcorifaycurtououzzbdrrrdx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly224(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test224_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup224(eurovision);
    runContest224(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test224_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup224(eurovision);
    runAudience224(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test224_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup224(eurovision);
    runFriendly224(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

